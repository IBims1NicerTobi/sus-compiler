
use std::{ops::Range, path::PathBuf};

use crate::{
    arena_alloc::ArenaVector, compiler_top::{add_file, recompile_all}, config::config, errors::{CompileError, ErrorLevel}, file_position::Span, flattening::{IdentifierType, Instruction, Module, WireReference, WireReferenceRoot, WireSource}, linker::{FileUUID, FileUUIDMarker, Linker, NameElem}
};

use ariadne::*;

#[derive(Debug,Clone,Copy,PartialEq,Eq)]
pub enum IDEIdentifierType {
    Value(IdentifierType),
    Type,
    Interface,
    Constant
}

pub fn walk_name_color_wireref(module : &Module, wire_ref : &WireReference, result : &mut Vec<(IDEIdentifierType, Span)>) {
    match &wire_ref.root {
        WireReferenceRoot::LocalDecl(decl_id, span) => {
            let decl = module.instructions[*decl_id].unwrap_wire_declaration();
            result.push((IDEIdentifierType::Value(decl.identifier_type), *span));
        }
        WireReferenceRoot::NamedConstant(_cst, span) => {
            result.push((IDEIdentifierType::Constant, *span));
        }
        WireReferenceRoot::SubModulePort(port) => {
            if let Some(span) = port.port_name_span {
                result.push((IDEIdentifierType::Value(port.port_identifier_typ), span))
            }
        }
    }
}

pub fn walk_name_color(all_objects : &[NameElem], linker : &Linker) -> Vec<(IDEIdentifierType, Span)> {
    let mut result : Vec<(IDEIdentifierType, Span)> = Vec::new();
    for obj_uuid in all_objects {
        let (ide_typ, link_info) = match obj_uuid {
            NameElem::Module(id) => {
                let module = &linker.modules[*id];
                for (_id, item) in &module.instructions {
                    match item {
                        Instruction::Wire(w) => {
                            match &w.source {
                                WireSource::WireRead(from_wire) => {
                                    walk_name_color_wireref(module, from_wire, &mut result);
                                }
                                WireSource::UnaryOp { op:_, right:_ } => {}
                                WireSource::BinaryOp { op:_, left:_, right:_ } => {}
                                WireSource::Constant(_) => {}
                            }
                        }
                        Instruction::Declaration(decl) => {
                            decl.typ_expr.for_each_located_type(&mut |_, span| {
                                result.push((IDEIdentifierType::Type, span));
                            });
                            result.push((IDEIdentifierType::Value(decl.identifier_type), decl.name_span));
                        }
                        Instruction::Write(conn) => {
                            walk_name_color_wireref(module, &conn.to, &mut result);
                        }
                        Instruction::SubModule(sm) => {
                            result.push((IDEIdentifierType::Interface, sm.module_name_span));
                        }
                        Instruction::IfStatement(_) | Instruction::ForStatement(_) => {}
                    }
                }
                (IDEIdentifierType::Interface, &module.link_info)
            }
            _other => {todo!("Name Color for non-modules not implemented")}
        };
        
        result.push((ide_typ, link_info.name_span));
    }
    result
}

pub fn compile_all(file_paths : Vec<PathBuf>) -> (Linker, ArenaVector<(PathBuf, Source), FileUUIDMarker>) {
    let mut linker = Linker::new();
    let mut paths_arena : ArenaVector<(PathBuf, Source), FileUUIDMarker> = ArenaVector::new();
    for file_path in file_paths {
        let file_text = match std::fs::read_to_string(&file_path) {
            Ok(file_text) => file_text,
            Err(reason) => {
                let file_path_disp = file_path.display();
                panic!("Could not open file '{file_path_disp}' for syntax highlighting because {reason}")
            }
        };
        
        let source = Source::from(file_text.clone());
        let uuid = add_file(file_text, &mut linker);

        paths_arena.insert(uuid, (file_path, source));
    }

    recompile_all(&mut linker);
    
    (linker, paths_arena)
}

pub fn pretty_print_error<AriadneCache : Cache<FileUUID>>(error : &CompileError, file : FileUUID, linker : &Linker, file_cache : &mut AriadneCache) {
    // Generate & choose some colours for each of our elements
    let (err_color, report_kind) = match error.level {
        ErrorLevel::Error => (Color::Red, ReportKind::Error),
        ErrorLevel::Warning => (Color::Yellow, ReportKind::Warning),
    };
    let info_color = Color::Blue;

    // Assert that span is in file
    let _ = &linker.files[file].file_text[error.position];

    let error_span = error.position.into_range();

    let config = 
        Config::default()
        .with_index_type(IndexType::Byte);
    let mut report: ReportBuilder<'_, (FileUUID, Range<usize>)> = Report::build(report_kind, file, error_span.start).with_config(config);
    report = report
        .with_message(&error.reason)
        .with_label(
            Label::new((file, error_span))
                .with_message(&error.reason)
                .with_color(err_color)
        );

    for info in &error.infos {
        let info_span = info.position.into_range();
        // Assert that span is in file
        let _ = &linker.files[info.file].file_text[info.position];
        report = report.with_label(
            Label::new((info.file, info_span))
                .with_message(&info.info)
                .with_color(info_color)
        )
    }

    report.finish().eprint(file_cache).unwrap();
}

impl Cache<FileUUID> for ArenaVector<(PathBuf, Source<String>), FileUUIDMarker> {
    type Storage = String;

    fn fetch(&mut self, id: &FileUUID) -> Result<&Source, Box<dyn std::fmt::Debug + '_>> {
        Ok(&self[*id].1)
    }
    fn display<'a>(&self, id: &'a FileUUID) -> Option<Box<dyn std::fmt::Display + 'a>> {
        let text : String = self[*id].0.to_string_lossy().into_owned();
        Some(Box::new(text))
    }
}

pub fn print_all_errors(linker : &Linker, paths_arena : &mut ArenaVector<(PathBuf, Source), FileUUIDMarker>) {
    for (file_uuid, _f) in &linker.files {
        linker.for_all_errors_in_file(file_uuid, |err| {
            pretty_print_error(err, file_uuid, linker, paths_arena);
        });
    }
}


pub fn pretty_print_spans_in_reverse_order(file_text : String, spans : Vec<Range<usize>>) {
    let text_len = file_text.len();
    let mut source = Source::from(file_text);

    for span in spans.into_iter().rev() {
        // If span not in file, just don't print it. This happens. 
        if span.end > text_len {
            println!("Span({}, {}) certainly does not correspond to this file. ", span.start, span.end);
            return;
        }
    
        let config = 
            Config::default()
            .with_index_type(IndexType::Byte)
            .with_color(!config().use_lsp); // Disable color because LSP output doesn't support it
    
        let mut report: ReportBuilder<'_, Range<usize>> = Report::build(ReportKind::Advice, (), span.start).with_config(config);
        report = report
            .with_label(
                Label::new(span.clone())
                    .with_message(format!("Span({}, {})", span.start, span.end))
                    .with_color(Color::Blue)
            );
    
        report.finish().print(&mut source).unwrap();
    }
}

