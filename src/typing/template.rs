use crate::prelude::*;

use super::{abstract_type::AbstractType, concrete_type::ConcreteType};
use crate::{flattening::WrittenType, linker::LinkInfo, value::TypedValue};

#[derive(Debug)]
pub struct GlobalReference<ID> {
    pub name_span: Span,
    pub id: ID,
    pub template_args: TemplateArgs,
    pub template_arg_types: TemplateAbstractTypes,
    pub template_span: Option<BracketSpan>,
}

impl<ID> GlobalReference<ID> {
    pub fn get_total_span(&self) -> Span {
        let mut result = self.name_span;
        if let Some(template_span) = self.template_span {
            result = Span::new_overarching(result, template_span.outer_span());
        }
        result
    }
}

#[derive(Debug)]
pub struct TemplateInput {
    pub name: String,
    pub name_span: Span,
    pub kind: TemplateInputKind,
}

#[derive(Debug)]
pub struct GenerativeTemplateInputKind {
    pub decl_span: Span,
    /// Set at the end of Flattening
    pub declaration_instruction: FlatID,
}

#[derive(Debug)]
pub struct TypeTemplateInputKind {}

#[derive(Debug)]
pub enum TemplateInputKind {
    Type(TypeTemplateInputKind),
    Generative(GenerativeTemplateInputKind),
}

impl TemplateInputKind {
    #[track_caller]
    pub fn unwrap_type(&self) -> &TypeTemplateInputKind {
        let Self::Type(t) = self else {
            unreachable!("TemplateInputKind::unwrap_type on {self:?}")
        };
        t
    }
    #[track_caller]
    pub fn unwrap_value(&self) -> &GenerativeTemplateInputKind {
        let Self::Generative(v) = self else {
            unreachable!("TemplateInputKind::unwrap_value on {self:?}")
        };
        v
    }
}

#[derive(Debug)]
pub struct TemplateArg {
    pub name_span: Span,
    pub value_span: Span,
    pub kind: TemplateArgKind,
}

#[derive(Debug)]
pub enum TemplateArgKind {
    Type(WrittenType),
    Value(FlatID),
}

impl TemplateArgKind {
    #[track_caller]
    pub fn unwrap_type(&self) -> &WrittenType {
        let Self::Type(t) = self else {
            unreachable!("TemplateArgKind::unwrap_type on {self:?}")
        };
        t
    }
    #[track_caller]
    pub fn unwrap_value(&self) -> FlatID {
        let Self::Value(v) = self else {
            unreachable!("TemplateArgKind::unwrap_value on {self:?}")
        };
        *v
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Hash)]
pub enum ConcreteTemplateArg {
    Type(ConcreteType),
    Value(TypedValue),
    NotProvided,
}

impl ConcreteTemplateArg {
    #[track_caller]
    pub fn unwrap_type(&self) -> &ConcreteType {
        let Self::Type(t) = self else {unreachable!()};
        t
    }
    #[track_caller]
    pub fn unwrap_value(&self) -> &TypedValue {
        let Self::Value(v) = self else {unreachable!()};
        v
    }
}

pub type TemplateArgs = FlatAlloc<Option<TemplateArg>, TemplateIDMarker>;
/// Applies to both Template Type args and Template Value args. 
/// 
/// For Types this is the Type, for Values this is unified with the parameter declaration type
pub type TemplateAbstractTypes = FlatAlloc<AbstractType, TemplateIDMarker>;
pub type TemplateInputs = FlatAlloc<TemplateInput, TemplateIDMarker>;
pub type ConcreteTemplateArgs = FlatAlloc<ConcreteTemplateArg, TemplateIDMarker>;

pub fn check_all_template_args_valid(
    errors: &ErrorCollector,
    span: Span,
    target_link_info: &LinkInfo,
    template_args: &ConcreteTemplateArgs,
) -> bool {
    let mut not_found_list: Vec<&TemplateInput> = Vec::new();
    for (id, arg) in &target_link_info.template_arguments {
        match &template_args[id] {
            ConcreteTemplateArg::Type(_) => {}
            ConcreteTemplateArg::Value(_) => {}
            ConcreteTemplateArg::NotProvided => {
                not_found_list.push(arg);
            }
        }
    }
    if !not_found_list.is_empty() {
        let mut uncovered_ports_list = String::new();
        for v in &not_found_list {
            use std::fmt::Write;
            write!(uncovered_ports_list, "'{}', ", v.name).unwrap();
        }
        uncovered_ports_list.truncate(uncovered_ports_list.len() - 2); // Cut off last comma
        let err_ref = errors.error(span, format!("Could not instantiate {} because the template arguments {uncovered_ports_list} were missing and no default was provided", target_link_info.get_full_name()));
        for v in &not_found_list {
            err_ref.info(
                (v.name_span, target_link_info.file),
                format!("'{}' defined here", v.name),
            );
        }
        false
    } else {
        true
    }
}
