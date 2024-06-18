#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 188
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 29
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 46

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_module = 2,
  anon_sym_COLON = 3,
  anon_sym_DASH_GT = 4,
  anon_sym_LT = 5,
  anon_sym_GT = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_interface = 9,
  anon_sym_EQ = 10,
  anon_sym_reg = 11,
  anon_sym_initial = 12,
  anon_sym_if = 13,
  anon_sym_else = 14,
  anon_sym_for = 15,
  anon_sym_in = 16,
  anon_sym_DOT_DOT = 17,
  anon_sym_input = 18,
  anon_sym_output = 19,
  anon_sym_state = 20,
  anon_sym_gen = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  anon_sym_STAR = 25,
  anon_sym_BANG = 26,
  anon_sym_PIPE = 27,
  anon_sym_AMP = 28,
  anon_sym_CARET = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_SLASH = 34,
  anon_sym_PERCENT = 35,
  anon_sym_DOT = 36,
  anon_sym_LPAREN = 37,
  anon_sym_RPAREN = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_COMMA = 41,
  anon_sym_LF = 42,
  anon_sym_COLON_COLON = 43,
  sym_number = 44,
  sym_single_line_comment = 45,
  sym_multi_line_comment = 46,
  sym_source_file = 47,
  sym_module = 48,
  sym_interface_ports = 49,
  sym__interface_ports_output = 50,
  sym_template_declaration_arguments = 51,
  sym_template_declaration_type = 52,
  sym_block = 53,
  sym_interface_statement = 54,
  sym_decl_assign_statement = 55,
  sym_assign_left_side = 56,
  sym_assign_to = 57,
  sym_write_modifiers = 58,
  sym_if_statement = 59,
  sym_for_statement = 60,
  sym_declaration_list = 61,
  sym_declaration = 62,
  sym__type = 63,
  sym_array_type = 64,
  sym_named_type = 65,
  sym_template_type = 66,
  sym_template_generative_expression = 67,
  sym_latency_specifier = 68,
  sym__expression = 69,
  sym_unary_op = 70,
  sym_binary_op = 71,
  sym_array_op = 72,
  sym_func_call = 73,
  sym_field_access = 74,
  sym_parenthesis_expression_list = 75,
  sym_parenthesis_expression = 76,
  sym_array_bracket_expression = 77,
  sym__comma = 78,
  aux_sym__linebreak = 79,
  sym_global_identifier = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_template_declaration_arguments_repeat1 = 82,
  aux_sym_block_repeat1 = 83,
  aux_sym_assign_left_side_repeat1 = 84,
  aux_sym_write_modifiers_repeat1 = 85,
  aux_sym_declaration_list_repeat1 = 86,
  aux_sym_named_type_repeat1 = 87,
  aux_sym_parenthesis_expression_list_repeat1 = 88,
  aux_sym_global_identifier_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_module] = "module",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_interface] = "interface",
  [anon_sym_EQ] = "=",
  [anon_sym_reg] = "reg",
  [anon_sym_initial] = "initial",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_state] = "state",
  [anon_sym_gen] = "gen",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON_COLON] = "::",
  [sym_number] = "number",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_source_file] = "source_file",
  [sym_module] = "module",
  [sym_interface_ports] = "interface_ports",
  [sym__interface_ports_output] = "_interface_ports_output",
  [sym_template_declaration_arguments] = "template_declaration_arguments",
  [sym_template_declaration_type] = "template_declaration_type",
  [sym_block] = "block",
  [sym_interface_statement] = "interface_statement",
  [sym_decl_assign_statement] = "decl_assign_statement",
  [sym_assign_left_side] = "assign_left_side",
  [sym_assign_to] = "assign_to",
  [sym_write_modifiers] = "write_modifiers",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_declaration_list] = "declaration_list",
  [sym_declaration] = "declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_named_type] = "named_type",
  [sym_template_type] = "template_type",
  [sym_template_generative_expression] = "template_generative_expression",
  [sym_latency_specifier] = "latency_specifier",
  [sym__expression] = "_expression",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_array_op] = "array_op",
  [sym_func_call] = "func_call",
  [sym_field_access] = "field_access",
  [sym_parenthesis_expression_list] = "parenthesis_expression_list",
  [sym_parenthesis_expression] = "parenthesis_expression",
  [sym_array_bracket_expression] = "array_bracket_expression",
  [sym__comma] = "_comma",
  [aux_sym__linebreak] = "_linebreak",
  [sym_global_identifier] = "global_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_template_declaration_arguments_repeat1] = "template_declaration_arguments_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_assign_left_side_repeat1] = "assign_left_side_repeat1",
  [aux_sym_write_modifiers_repeat1] = "write_modifiers_repeat1",
  [aux_sym_declaration_list_repeat1] = "declaration_list_repeat1",
  [aux_sym_named_type_repeat1] = "named_type_repeat1",
  [aux_sym_parenthesis_expression_list_repeat1] = "parenthesis_expression_list_repeat1",
  [aux_sym_global_identifier_repeat1] = "global_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_reg] = anon_sym_reg,
  [anon_sym_initial] = anon_sym_initial,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_gen] = anon_sym_gen,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_number] = sym_number,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_source_file] = sym_source_file,
  [sym_module] = sym_module,
  [sym_interface_ports] = sym_interface_ports,
  [sym__interface_ports_output] = sym__interface_ports_output,
  [sym_template_declaration_arguments] = sym_template_declaration_arguments,
  [sym_template_declaration_type] = sym_template_declaration_type,
  [sym_block] = sym_block,
  [sym_interface_statement] = sym_interface_statement,
  [sym_decl_assign_statement] = sym_decl_assign_statement,
  [sym_assign_left_side] = sym_assign_left_side,
  [sym_assign_to] = sym_assign_to,
  [sym_write_modifiers] = sym_write_modifiers,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_declaration_list] = sym_declaration_list,
  [sym_declaration] = sym_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_named_type] = sym_named_type,
  [sym_template_type] = sym_template_type,
  [sym_template_generative_expression] = sym_template_generative_expression,
  [sym_latency_specifier] = sym_latency_specifier,
  [sym__expression] = sym__expression,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [sym_array_op] = sym_array_op,
  [sym_func_call] = sym_func_call,
  [sym_field_access] = sym_field_access,
  [sym_parenthesis_expression_list] = sym_parenthesis_expression_list,
  [sym_parenthesis_expression] = sym_parenthesis_expression,
  [sym_array_bracket_expression] = sym_array_bracket_expression,
  [sym__comma] = sym__comma,
  [aux_sym__linebreak] = aux_sym__linebreak,
  [sym_global_identifier] = sym_global_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_template_declaration_arguments_repeat1] = aux_sym_template_declaration_arguments_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_assign_left_side_repeat1] = aux_sym_assign_left_side_repeat1,
  [aux_sym_write_modifiers_repeat1] = aux_sym_write_modifiers_repeat1,
  [aux_sym_declaration_list_repeat1] = aux_sym_declaration_list_repeat1,
  [aux_sym_named_type_repeat1] = aux_sym_named_type_repeat1,
  [aux_sym_parenthesis_expression_list_repeat1] = aux_sym_parenthesis_expression_list_repeat1,
  [aux_sym_global_identifier_repeat1] = aux_sym_global_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_initial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_ports] = {
    .visible = true,
    .named = true,
  },
  [sym__interface_ports_output] = {
    .visible = false,
    .named = true,
  },
  [sym_template_declaration_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_template_declaration_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_assign_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_left_side] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_to] = {
    .visible = true,
    .named = true,
  },
  [sym_write_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_named_type] = {
    .visible = true,
    .named = true,
  },
  [sym_template_type] = {
    .visible = true,
    .named = true,
  },
  [sym_template_generative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_latency_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_array_op] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesis_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesis_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_bracket_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__linebreak] = {
    .visible = false,
    .named = false,
  },
  [sym_global_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_declaration_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assign_left_side_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_write_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parenthesis_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_arr = 2,
  field_arr_idx = 3,
  field_assign_left = 4,
  field_assign_value = 5,
  field_block = 6,
  field_condition = 7,
  field_content = 8,
  field_declaration_modifiers = 9,
  field_else_block = 10,
  field_expr_or_decl = 11,
  field_for_decl = 12,
  field_from = 13,
  field_inputs = 14,
  field_interface_ports = 15,
  field_io_port_modifiers = 16,
  field_item = 17,
  field_latency_specifier = 18,
  field_left = 19,
  field_name = 20,
  field_operator = 21,
  field_outputs = 22,
  field_right = 23,
  field_template_declaration_arguments = 24,
  field_template_params = 25,
  field_then_block = 26,
  field_to = 27,
  field_type = 28,
  field_write_modifiers = 29,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_arr] = "arr",
  [field_arr_idx] = "arr_idx",
  [field_assign_left] = "assign_left",
  [field_assign_value] = "assign_value",
  [field_block] = "block",
  [field_condition] = "condition",
  [field_content] = "content",
  [field_declaration_modifiers] = "declaration_modifiers",
  [field_else_block] = "else_block",
  [field_expr_or_decl] = "expr_or_decl",
  [field_for_decl] = "for_decl",
  [field_from] = "from",
  [field_inputs] = "inputs",
  [field_interface_ports] = "interface_ports",
  [field_io_port_modifiers] = "io_port_modifiers",
  [field_item] = "item",
  [field_latency_specifier] = "latency_specifier",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_outputs] = "outputs",
  [field_right] = "right",
  [field_template_declaration_arguments] = "template_declaration_arguments",
  [field_template_params] = "template_params",
  [field_then_block] = "then_block",
  [field_to] = "to",
  [field_type] = "type",
  [field_write_modifiers] = "write_modifiers",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 1},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 1},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 4},
  [25] = {.index = 41, .length = 1},
  [26] = {.index = 42, .length = 3},
  [27] = {.index = 45, .length = 3},
  [28] = {.index = 48, .length = 3},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 2},
  [31] = {.index = 55, .length = 2},
  [32] = {.index = 57, .length = 1},
  [33] = {.index = 58, .length = 2},
  [34] = {.index = 60, .length = 3},
  [35] = {.index = 63, .length = 2},
  [36] = {.index = 65, .length = 1},
  [37] = {.index = 66, .length = 4},
  [38] = {.index = 70, .length = 4},
  [39] = {.index = 74, .length = 4},
  [40] = {.index = 78, .length = 4},
  [41] = {.index = 82, .length = 2},
  [42] = {.index = 84, .length = 5},
  [43] = {.index = 89, .length = 5},
  [44] = {.index = 94, .length = 3},
  [45] = {.index = 97, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_item, 0},
  [1] =
    {field_item, 0},
    {field_item, 1, .inherited = true},
  [3] =
    {field_item, 1},
  [4] =
    {field_block, 2},
    {field_name, 1},
  [6] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [8] =
    {field_item, 1},
    {field_item, 2, .inherited = true},
  [10] =
    {field_outputs, 1, .inherited = true},
  [11] =
    {field_inputs, 1},
  [12] =
    {field_name, 0},
  [13] =
    {field_expr_or_decl, 0},
  [14] =
    {field_item, 0, .inherited = true},
  [15] =
    {field_block, 3},
    {field_interface_ports, 2},
    {field_name, 1},
  [18] =
    {field_block, 3},
    {field_name, 1},
    {field_template_declaration_arguments, 2},
  [21] =
    {field_outputs, 1},
  [22] =
    {field_inputs, 1},
    {field_outputs, 2, .inherited = true},
  [24] =
    {field_name, 1},
    {field_type, 0},
  [26] =
    {field_arr, 0},
    {field_arr_idx, 1},
  [28] =
    {field_outputs, 2, .inherited = true},
  [29] =
    {field_inputs, 2},
  [30] =
    {field_name, 1},
  [31] =
    {field_operator, 0},
    {field_right, 1},
  [33] =
    {field_expr_or_decl, 1},
    {field_write_modifiers, 0},
  [35] =
    {field_arguments, 1},
    {field_name, 0},
  [37] =
    {field_block, 4},
    {field_interface_ports, 3},
    {field_name, 1},
    {field_template_declaration_arguments, 2},
  [41] =
    {field_outputs, 2},
  [42] =
    {field_io_port_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [45] =
    {field_declaration_modifiers, 0},
    {field_name, 2},
    {field_type, 1},
  [48] =
    {field_latency_specifier, 2},
    {field_name, 1},
    {field_type, 0},
  [51] =
    {field_inputs, 2},
    {field_outputs, 3, .inherited = true},
  [53] =
    {field_interface_ports, 2},
    {field_name, 1},
  [55] =
    {field_condition, 1},
    {field_then_block, 2},
  [57] =
    {field_content, 1},
  [58] =
    {field_assign_left, 0},
    {field_assign_value, 2},
  [60] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [63] =
    {field_left, 0},
    {field_name, 2},
  [65] =
    {field_item, 2},
  [66] =
    {field_declaration_modifiers, 1},
    {field_io_port_modifiers, 0},
    {field_name, 3},
    {field_type, 2},
  [70] =
    {field_io_port_modifiers, 0},
    {field_latency_specifier, 3},
    {field_name, 2},
    {field_type, 1},
  [74] =
    {field_declaration_modifiers, 0},
    {field_latency_specifier, 3},
    {field_name, 2},
    {field_type, 1},
  [78] =
    {field_name, 0},
    {field_template_params, 1},
    {field_template_params, 2},
    {field_template_params, 3},
  [82] =
    {field_item, 2},
    {field_item, 3, .inherited = true},
  [84] =
    {field_declaration_modifiers, 1},
    {field_io_port_modifiers, 0},
    {field_latency_specifier, 4},
    {field_name, 3},
    {field_type, 2},
  [89] =
    {field_name, 0},
    {field_template_params, 1},
    {field_template_params, 2},
    {field_template_params, 3},
    {field_template_params, 4},
  [94] =
    {field_condition, 1},
    {field_else_block, 4},
    {field_then_block, 2},
  [97] =
    {field_block, 6},
    {field_for_decl, 1},
    {field_from, 3},
    {field_to, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 39,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 33,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 42994
    ? (c < 3585
      ? (c < 2649
        ? (c < 1869
          ? (c < 931
            ? (c < 748
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 880
                  ? (c < 837
                    ? c == 750
                    : c <= 837)
                  : (c <= 884 || (c < 890
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1519
              ? (c < 1456
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1761
                ? (c < 1625
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1623)
                  : (c <= 1631 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1791
                  ? (c < 1786
                    ? (c >= 1773 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || (c >= 1808 && c <= 1855)))))))))
          : (c <= 1969 || (c < 2486
            ? (c < 2275
              ? (c < 2112
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2071)
                    : c <= 2092)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c < 2260
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2271)))))
              : (c <= 2281 || (c < 2437
                ? (c < 2382
                  ? (c < 2365
                    ? (c >= 2288 && c <= 2363)
                    : c <= 2380)
                  : (c <= 2384 || (c < 2417
                    ? (c >= 2389 && c <= 2403)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2565
              ? (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2493 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2508 || (c < 2519
                    ? c == 2510
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2561 && c <= 2563)))))
              : (c <= 2570 || (c < 2616
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))
                : (c <= 2617 || (c < 2635
                  ? (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)
                  : (c <= 2636 || c == 2641))))))))))
        : (c <= 2652 || (c < 3072
          ? (c < 2877
            ? (c < 2763
              ? (c < 2707
                ? (c < 2689
                  ? (c < 2672
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)))
                : (c <= 2728 || (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2759
                    ? (c >= 2749 && c <= 2757)
                    : c <= 2761)))))
              : (c <= 2764 || (c < 2831
                ? (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2812 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))))
            : (c <= 2884 || (c < 2969
              ? (c < 2929
                ? (c < 2902
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2892)
                  : (c <= 2903 || (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 3006
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3020)
                  : (c <= 3024 || c == 3031))))))))
          : (c <= 3075 || (c < 3296
            ? (c < 3200
              ? (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3148)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))
              : (c <= 3203 || (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3268 || (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3276)
                  : (c <= 3286 || (c >= 3293 && c <= 3294)))))))
            : (c <= 3299 || (c < 3450
              ? (c < 3398
                ? (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3396)))
                : (c <= 3400 || (c < 3412
                  ? (c < 3406
                    ? (c >= 3402 && c <= 3404)
                    : c <= 3406)
                  : (c <= 3415 || (c >= 3423 && c <= 3427)))))
              : (c <= 3455 || (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3544
                  ? (c < 3542
                    ? (c >= 3535 && c <= 3540)
                    : c <= 3542)
                  : (c <= 3551 || (c >= 3570 && c <= 3571)))))))))))))
      : (c <= 3642 || (c < 7357
        ? (c < 5024
          ? (c < 4176
            ? (c < 3789
              ? (c < 3724
                ? (c < 3713
                  ? (c < 3661
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3661)
                  : (c <= 3714 || (c < 3718
                    ? c == 3716
                    : c <= 3722)))
                : (c <= 3747 || (c < 3771
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3769)
                  : (c <= 3773 || (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)))))
              : (c <= 3789 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3969)))
                : (c <= 3991 || (c < 4152
                  ? (c < 4096
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4150)
                  : (c <= 4152 || (c >= 4155 && c <= 4159)))))))
            : (c <= 4239 || (c < 4746
              ? (c < 4348
                ? (c < 4295
                  ? (c < 4256
                    ? (c >= 4250 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))
                : (c <= 4680 || (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)))))
              : (c <= 4749 || (c < 4808
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || (c < 4802
                    ? c == 4800
                    : c <= 4805)))
                : (c <= 4822 || (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))))))))
          : (c <= 5109 || (c < 6480
            ? (c < 6002
              ? (c < 5870
                ? (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)))
                : (c <= 5880 || (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5907)
                    : c <= 5939)
                  : (c <= 5971 || (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)))))
              : (c <= 6003 || (c < 6272
                ? (c < 6103
                  ? (c < 6070
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6088)
                  : (c <= 6103 || (c < 6176
                    ? c == 6108
                    : c <= 6264)))
                : (c <= 6314 || (c < 6432
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6443 || (c >= 6448 && c <= 6456)))))))
            : (c <= 6509 || (c < 6965
              ? (c < 6753
                ? (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6688
                    ? (c >= 6656 && c <= 6683)
                    : c <= 6750)))
                : (c <= 6772 || (c < 6860
                  ? (c < 6847
                    ? c == 6823
                    : c <= 6848)
                  : (c <= 6862 || (c >= 6912 && c <= 6963)))))
              : (c <= 6979 || (c < 7168
                ? (c < 7084
                  ? (c < 7040
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7081)
                  : (c <= 7087 || (c < 7143
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7153)))
                : (c <= 7222 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))))))
        : (c <= 7359 || (c < 11499
          ? (c < 8160
            ? (c < 8025
              ? (c < 7655
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || (c < 7424
                    ? c == 7418
                    : c <= 7615)))
                : (c <= 7668 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))
              : (c <= 8025 || (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))))
            : (c <= 8172 || (c < 8484
              ? (c < 8450
                ? (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || (c < 8336
                    ? c == 8319
                    : c <= 8348)))
                : (c <= 8450 || (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))))
              : (c <= 8484 || (c < 8517
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c < 8508
                    ? (c >= 8495 && c <= 8505)
                    : c <= 8511)))
                : (c <= 8521 || (c < 9398
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 9449 || (c >= 11264 && c <= 11492)))))))))
          : (c <= 11502 || (c < 12445
            ? (c < 11712
              ? (c < 11631
                ? (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || (c < 11568
                    ? c == 11565
                    : c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)))))
              : (c <= 11718 || (c < 12293
                ? (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c < 11823
                    ? (c >= 11744 && c <= 11775)
                    : c <= 11823)))
                : (c <= 12295 || (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))))
            : (c <= 12447 || (c < 42512
              ? (c < 12784
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)))
                : (c <= 12799 || (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))))
              : (c <= 42527 || (c < 42786
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42538 && c <= 42539)
                    : c <= 42606)
                  : (c <= 42619 || (c < 42775
                    ? (c >= 42623 && c <= 42735)
                    : c <= 42783)))
                : (c <= 42888 || (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))))))))))))
    : (c <= 43013 || (c < 71096
      ? (c < 67392
        ? (c < 64326
          ? (c < 43744
            ? (c < 43444
              ? (c < 43259
                ? (c < 43136
                  ? (c < 43072
                    ? (c >= 43015 && c <= 43047)
                    : c <= 43123)
                  : (c <= 43203 || (c < 43250
                    ? c == 43205
                    : c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43263)
                    : c <= 43306)
                  : (c <= 43346 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)))))
              : (c <= 43455 || (c < 43616
                ? (c < 43514
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)))
                : (c <= 43638 || (c < 43714
                  ? (c < 43712
                    ? (c >= 43642 && c <= 43710)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))))))
            : (c <= 43759 || (c < 55243
              ? (c < 43816
                ? (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43765)
                    : c <= 43782)
                  : (c <= 43790 || (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)))
                : (c <= 43822 || (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44010 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))))
              : (c <= 55291 || (c < 64298
                ? (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)))
                : (c <= 64310 || (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))))))))
          : (c <= 64433 || (c < 66208
            ? (c < 65490
              ? (c < 65142
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64467 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65136
                    ? (c >= 65008 && c <= 65019)
                    : c <= 65140)))
                : (c <= 65276 || (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))))
              : (c <= 65495 || (c < 65599
                ? (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)))
                : (c <= 65613 || (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))))))
            : (c <= 66256 || (c < 66816
              ? (c < 66504
                ? (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66426 || (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)))
                : (c <= 66511 || (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))))
              : (c <= 66855 || (c < 66967
                ? (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)))
                : (c <= 66977 || (c < 67003
                  ? (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))))))))))
        : (c <= 67413 || (c < 69632
          ? (c < 68121
            ? (c < 67712
              ? (c < 67592
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)))))
              : (c <= 67742 || (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68108
                  ? (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69291
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68903)
                    : c <= 69289)
                  : (c <= 69292 || (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69701 || (c < 70320
            ? (c < 70106
              ? (c < 69956
                ? (c < 69826
                  ? (c < 69762
                    ? (c >= 69745 && c <= 69749)
                    : c <= 69816)
                  : (c <= 69826 || (c < 69888
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69938)))
                : (c <= 69959 || (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70079 || (c < 70094
                    ? (c >= 70081 && c <= 70084)
                    : c <= 70095)))))
              : (c <= 70106 || (c < 70272
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70196 || (c < 70206
                    ? c == 70199
                    : c <= 70206)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))))
            : (c <= 70376 || (c < 70480
              ? (c < 70450
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)
                  : (c <= 70416 || (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)))
                : (c <= 70451 || (c < 70471
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)
                  : (c <= 70472 || (c >= 70475 && c <= 70476)))))
              : (c <= 70480 || (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70487
                    : c <= 70499)
                  : (c <= 70721 || (c < 70727
                    ? (c >= 70723 && c <= 70725)
                    : c <= 70730)))
                : (c <= 70753 || (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70849)
                    : c <= 70853)
                  : (c <= 70855 || (c >= 71040 && c <= 71093)))))))))))))
      : (c <= 71102 || (c < 119966
        ? (c < 73063
          ? (c < 72161
            ? (c < 71935
              ? (c < 71352
                ? (c < 71232
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71230)
                  : (c <= 71232 || (c < 71296
                    ? c == 71236
                    : c <= 71349)))
                : (c <= 71352 || (c < 71488
                  ? (c < 71453
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71466)
                  : (c <= 71494 || (c < 71840
                    ? (c >= 71680 && c <= 71736)
                    : c <= 71903)))))
              : (c <= 71942 || (c < 71995
                ? (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c < 71991
                    ? (c >= 71960 && c <= 71989)
                    : c <= 71992)))
                : (c <= 71996 || (c < 72106
                  ? (c < 72096
                    ? (c >= 71999 && c <= 72002)
                    : c <= 72103)
                  : (c <= 72151 || (c >= 72154 && c <= 72159)))))))
            : (c <= 72161 || (c < 72850
              ? (c < 72368
                ? (c < 72245
                  ? (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72242)
                  : (c <= 72254 || (c < 72349
                    ? (c >= 72272 && c <= 72343)
                    : c <= 72349)))
                : (c <= 72440 || (c < 72760
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)
                  : (c <= 72766 || (c < 72818
                    ? c == 72768
                    : c <= 72847)))))
              : (c <= 72871 || (c < 73020
                ? (c < 72968
                  ? (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)
                  : (c <= 72969 || (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)))
                : (c <= 73021 || (c < 73030
                  ? (c < 73027
                    ? (c >= 73023 && c <= 73025)
                    : c <= 73027)
                  : (c <= 73031 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94031
            ? (c < 82944
              ? (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73110 || (c < 73440
                    ? c == 73112
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))
              : (c <= 83526 || (c < 92992
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94087 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113792
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)))
                : (c <= 113800 || (c < 119808
                  ? (c < 113822
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 125255
          ? (c < 120656
            ? (c < 120123
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c < 120094
                    ? (c >= 120086 && c <= 120092)
                    : c <= 120121)))))
              : (c <= 120126 || (c < 120514
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123136
              ? (c < 122880
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122886 || (c < 122915
                  ? (c < 122907
                    ? (c >= 122888 && c <= 122904)
                    : c <= 122913)
                  : (c <= 122916 || (c >= 122918 && c <= 122922)))))
              : (c <= 123180 || (c < 124904
                ? (c < 123536
                  ? (c < 123214
                    ? (c >= 123191 && c <= 123197)
                    : c <= 123214)
                  : (c <= 123565 || (c < 124896
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125255 || (c < 126561
            ? (c < 126535
              ? (c < 126503
                ? (c < 126469
                  ? (c < 126464
                    ? c == 125259
                    : c <= 126467)
                  : (c <= 126495 || (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)))
                : (c <= 126503 || (c < 126521
                  ? (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)
                  : (c <= 126521 || (c < 126530
                    ? c == 126523
                    : c <= 126530)))))
              : (c <= 126535 || (c < 126551
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126635
              ? (c < 126590
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c < 126585
                    ? (c >= 126580 && c <= 126583)
                    : c <= 126588)))
                : (c <= 126590 || (c < 126625
                  ? (c < 126603
                    ? (c >= 126592 && c <= 126601)
                    : c <= 126619)
                  : (c <= 126627 || (c >= 126629 && c <= 126633)))))
              : (c <= 126651 || (c < 177984
                ? (c < 127344
                  ? (c < 127312
                    ? (c >= 127280 && c <= 127305)
                    : c <= 127337)
                  : (c <= 127369 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 42786
    ? (c < 3544
      ? (c < 2654
        ? (c < 1984
          ? (c < 931
            ? (c < 736
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 890
                ? (c < 837
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 837 || (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1519
              ? (c < 1456
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1761
                ? (c < 1625
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1623)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1773 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1855 || (c >= 1869 && c <= 1969)))))))))
          : (c <= 2026 || (c < 2486
            ? (c < 2288
              ? (c < 2144
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2071 || (c < 2112
                    ? (c >= 2074 && c <= 2092)
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c < 2275
                    ? (c >= 2260 && c <= 2271)
                    : c <= 2281)))))
              : (c <= 2363 || (c < 2437
                ? (c < 2389
                  ? (c < 2382
                    ? (c >= 2365 && c <= 2380)
                    : c <= 2384)
                  : (c <= 2403 || (c < 2417
                    ? (c >= 2406 && c <= 2415)
                    : c <= 2435)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2575
              ? (c < 2524
                ? (c < 2507
                  ? (c < 2503
                    ? (c >= 2493 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2508 || (c < 2519
                    ? c == 2510
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)))))
              : (c <= 2576 || (c < 2622
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)))
                : (c <= 2626 || (c < 2641
                  ? (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2636)
                  : (c <= 2641 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3072
          ? (c < 2887
            ? (c < 2768
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2757 || (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2764)))))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)
                  : (c <= 2812 || (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)))))))
            : (c <= 2888 || (c < 2972
              ? (c < 2929
                ? (c < 2908
                  ? (c < 2902
                    ? (c >= 2891 && c <= 2892)
                    : c <= 2903)
                  : (c <= 2909 || (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))))
              : (c <= 2972 || (c < 3014
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3020)
                    : c <= 3024)
                  : (c <= 3031 || (c >= 3046 && c <= 3055)))))))))
          : (c <= 3075 || (c < 3293
            ? (c < 3174
              ? (c < 3142
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3140)))
                : (c <= 3144 || (c < 3160
                  ? (c < 3157
                    ? (c >= 3146 && c <= 3148)
                    : c <= 3158)
                  : (c <= 3162 || (c < 3168
                    ? c == 3165
                    : c <= 3171)))))
              : (c <= 3183 || (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3261 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3276 || (c >= 3285 && c <= 3286)))))))
            : (c <= 3294 || (c < 3423
              ? (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3386 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3389 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3404 || (c < 3412
                    ? c == 3406
                    : c <= 3415)))))
              : (c <= 3427 || (c < 3507
                ? (c < 3457
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3459 || (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)))
                : (c <= 3515 || (c < 3535
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3540 || c == 3542))))))))))))
      : (c <= 3551 || (c < 7040
        ? (c < 4824
          ? (c < 3976
            ? (c < 3751
              ? (c < 3664
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3661
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3661)))
                : (c <= 3673 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)))))
              : (c <= 3769 || (c < 3804
                ? (c < 3782
                  ? (c < 3776
                    ? (c >= 3771 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c < 3792
                    ? c == 3789
                    : c <= 3801)))
                : (c <= 3807 || (c < 3904
                  ? (c < 3872
                    ? c == 3840
                    : c <= 3881)
                  : (c <= 3911 || (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3969)))))))
            : (c <= 3991 || (c < 4688
              ? (c < 4256
                ? (c < 4152
                  ? (c < 4096
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4150)
                  : (c <= 4152 || (c < 4176
                    ? (c >= 4155 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))
              : (c <= 4694 || (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))))
          : (c <= 4880 || (c < 6176
            ? (c < 5919
              ? (c < 5121
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)))
                : (c <= 5740 || (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5907)))))
              : (c <= 5939 || (c < 6070
                ? (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c < 6016
                    ? (c >= 6002 && c <= 6003)
                    : c <= 6067)))
                : (c <= 6088 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6121 || (c >= 6160 && c <= 6169)))))))
            : (c <= 6264 || (c < 6688
              ? (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6456)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6617)
                    : c <= 6683)))))
              : (c <= 6750 || (c < 6860
                ? (c < 6800
                  ? (c < 6784
                    ? (c >= 6753 && c <= 6772)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6847
                    ? c == 6823
                    : c <= 6848)))
                : (c <= 6862 || (c < 6981
                  ? (c < 6965
                    ? (c >= 6912 && c <= 6963)
                    : c <= 6979)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))))))))
        : (c <= 7081 || (c < 8495
          ? (c < 8031
            ? (c < 7418
              ? (c < 7296
                ? (c < 7168
                  ? (c < 7143
                    ? (c >= 7084 && c <= 7141)
                    : c <= 7153)
                  : (c <= 7222 || (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)))))
              : (c <= 7418 || (c < 8008
                ? (c < 7680
                  ? (c < 7655
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7668)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))))
            : (c <= 8061 || (c < 8319
              ? (c < 8144
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)))
                : (c <= 8147 || (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))))
              : (c <= 8319 || (c < 8473
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))))))
          : (c <= 8505 || (c < 11744
            ? (c < 11568
              ? (c < 11264
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 9398
                    ? (c >= 8544 && c <= 8584)
                    : c <= 9449)))
                : (c <= 11492 || (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || (c < 11565
                    ? c == 11559
                    : c <= 11565)))))
              : (c <= 11623 || (c < 11704
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))
            : (c <= 11775 || (c < 12704
              ? (c < 12353
                ? (c < 12321
                  ? (c < 12293
                    ? c == 11823
                    : c <= 12295)
                  : (c <= 12329 || (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)))
                : (c <= 12438 || (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))))
              : (c <= 12735 || (c < 42512
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c < 42612
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42619)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))))))))))
    : (c <= 42888 || (c < 70784
      ? (c < 66964
        ? (c < 64298
          ? (c < 43642
            ? (c < 43259
              ? (c < 43015
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43013)))
                : (c <= 43047 || (c < 43205
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43203)
                  : (c <= 43205 || (c < 43250
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43471
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43306)
                    : c <= 43346)
                  : (c <= 43388 || (c < 43444
                    ? (c >= 43392 && c <= 43442)
                    : c <= 43455)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c < 43616
                    ? (c >= 43600 && c <= 43609)
                    : c <= 43638)))))))
            : (c <= 43710 || (c < 43868
              ? (c < 43777
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43765)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)))))
              : (c <= 43881 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 43888 && c <= 44010)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c >= 64285 && c <= 64296)))))))))
          : (c <= 64310 || (c < 65596
            ? (c < 65296
              ? (c < 64467
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65019 || (c < 65142
                    ? (c >= 65136 && c <= 65140)
                    : c <= 65276)))))
              : (c <= 65305 || (c < 65490
                ? (c < 65382
                  ? (c < 65345
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65370)
                  : (c <= 65470 || (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66504
              ? (c < 66208
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66426 || (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66720
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66729 || (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69415
          ? (c < 67968
            ? (c < 67592
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)))))
              : (c <= 67592 || (c < 67712
                ? (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)))
                : (c <= 67742 || (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))))))
            : (c <= 68023 || (c < 68416
              ? (c < 68121
                ? (c < 68101
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)
                  : (c <= 68102 || (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)))
                : (c <= 68149 || (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))))
              : (c <= 68437 || (c < 68864
                ? (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)))
                : (c <= 68903 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))))))))
          : (c <= 69415 || (c < 70272
            ? (c < 69968
              ? (c < 69745
                ? (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c < 69632
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69701)))
                : (c <= 69749 || (c < 69840
                  ? (c < 69826
                    ? (c >= 69762 && c <= 69816)
                    : c <= 69826)
                  : (c <= 69864 || (c < 69956
                    ? (c >= 69888 && c <= 69938)
                    : c <= 69959)))))
              : (c <= 70002 || (c < 70108
                ? (c < 70081
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70079)
                  : (c <= 70084 || (c < 70106
                    ? (c >= 70094 && c <= 70095)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70199
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70196)
                  : (c <= 70199 || c == 70206))))))
            : (c <= 70278 || (c < 70453
              ? (c < 70400
                ? (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70376)))
                : (c <= 70403 || (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)))))
              : (c <= 70457 || (c < 70493
                ? (c < 70475
                  ? (c < 70471
                    ? (c >= 70461 && c <= 70468)
                    : c <= 70472)
                  : (c <= 70476 || (c < 70487
                    ? c == 70480
                    : c <= 70487)))
                : (c <= 70499 || (c < 70727
                  ? (c < 70723
                    ? (c >= 70656 && c <= 70721)
                    : c <= 70725)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))))))))))
      : (c <= 70849 || (c < 119808
        ? (c < 73027
          ? (c < 72096
            ? (c < 71453
              ? (c < 71168
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71093 || (c < 71128
                    ? (c >= 71096 && c <= 71102)
                    : c <= 71133)))
                : (c <= 71230 || (c < 71296
                  ? (c < 71236
                    ? c == 71232
                    : c <= 71236)
                  : (c <= 71349 || (c < 71424
                    ? c == 71352
                    : c <= 71450)))))
              : (c <= 71466 || (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71736)
                  : (c <= 71903 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 71999
                    ? (c >= 71995 && c <= 71996)
                    : c <= 72002)))))))
            : (c <= 72103 || (c < 72760
              ? (c < 72245
                ? (c < 72161
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72159)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72242)))
                : (c <= 72254 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72343)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))
              : (c <= 72766 || (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? c == 72768
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c >= 73023 && c <= 73025)))))))))
          : (c <= 73027 || (c < 93053
            ? (c < 74880
              ? (c < 73107
                ? (c < 73063
                  ? (c < 73056
                    ? (c >= 73030 && c <= 73031)
                    : c <= 73061)
                  : (c <= 73064 || (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)))
                : (c <= 73110 || (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73462)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))))
              : (c <= 75075 || (c < 92784
                ? (c < 82944
                  ? (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)
                  : (c <= 83526 || (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)))
                : (c <= 92862 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)
                  : (c <= 92995 || (c >= 93027 && c <= 93047)))))))
            : (c <= 93071 || (c < 110581
              ? (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94179 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))
              : (c <= 110587 || (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || c == 113822))))))))))
        : (c <= 119892 || (c < 125184
          ? (c < 120598
            ? (c < 120086
              ? (c < 119982
                ? (c < 119970
                  ? (c < 119966
                    ? (c >= 119894 && c <= 119964)
                    : c <= 119967)
                  : (c <= 119970 || (c < 119977
                    ? (c >= 119973 && c <= 119974)
                    : c <= 119980)))
                : (c <= 119993 || (c < 120005
                  ? (c < 119997
                    ? c == 119995
                    : c <= 120003)
                  : (c <= 120069 || (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)))))
              : (c <= 120092 || (c < 120146
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || (c < 120138
                    ? c == 120134
                    : c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 122918
              ? (c < 120772
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)))
                : (c <= 120779 || (c < 122888
                  ? (c < 122880
                    ? (c >= 122624 && c <= 122654)
                    : c <= 122886)
                  : (c <= 122904 || (c < 122915
                    ? (c >= 122907 && c <= 122913)
                    : c <= 122916)))))
              : (c <= 122922 || (c < 124896
                ? (c < 123214
                  ? (c < 123191
                    ? (c >= 123136 && c <= 123180)
                    : c <= 123197)
                  : (c <= 123214 || (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)))
                : (c <= 124902 || (c < 124912
                  ? (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)
                  : (c <= 124926 || (c >= 124928 && c <= 125124)))))))))
          : (c <= 125251 || (c < 126559
            ? (c < 126530
              ? (c < 126500
                ? (c < 126464
                  ? (c < 125259
                    ? c == 125255
                    : c <= 125259)
                  : (c <= 126467 || (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)))
                : (c <= 126500 || (c < 126516
                  ? (c < 126505
                    ? c == 126503
                    : c <= 126514)
                  : (c <= 126519 || (c < 126523
                    ? c == 126521
                    : c <= 126523)))))
              : (c <= 126530 || (c < 126548
                ? (c < 126539
                  ? (c < 126537
                    ? c == 126535
                    : c <= 126537)
                  : (c <= 126539 || (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126635
              ? (c < 126585
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c < 126580
                    ? (c >= 126572 && c <= 126578)
                    : c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c < 126629
                    ? (c >= 126625 && c <= 126627)
                    : c <= 126633)))))
              : (c <= 126651 || (c < 177984
                ? (c < 127344
                  ? (c < 127312
                    ? (c >= 127280 && c <= 127305)
                    : c <= 127337)
                  : (c <= 127369 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '&') ADVANCE(28);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '^') ADVANCE(29);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(43);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'g') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_gen);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_reg);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_state);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_initial);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_reg] = ACTIONS(1),
    [anon_sym_initial] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_gen] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(187),
    [sym_module] = STATE(116),
    [aux_sym__linebreak] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block] = STATE(167),
    [sym_interface_statement] = STATE(167),
    [sym_decl_assign_statement] = STATE(167),
    [sym_assign_left_side] = STATE(155),
    [sym_assign_to] = STATE(94),
    [sym_write_modifiers] = STATE(32),
    [sym_if_statement] = STATE(167),
    [sym_for_statement] = STATE(167),
    [sym_declaration] = STATE(124),
    [sym__type] = STATE(163),
    [sym_array_type] = STATE(163),
    [sym_named_type] = STATE(163),
    [sym__expression] = STATE(34),
    [sym_unary_op] = STATE(34),
    [sym_binary_op] = STATE(34),
    [sym_array_op] = STATE(34),
    [sym_func_call] = STATE(34),
    [sym_field_access] = STATE(34),
    [sym_parenthesis_expression] = STATE(34),
    [aux_sym__linebreak] = STATE(33),
    [sym_global_identifier] = STATE(39),
    [aux_sym_write_modifiers_repeat1] = STATE(67),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_reg] = ACTIONS(19),
    [anon_sym_initial] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block] = STATE(167),
    [sym_interface_statement] = STATE(167),
    [sym_decl_assign_statement] = STATE(167),
    [sym_assign_left_side] = STATE(155),
    [sym_assign_to] = STATE(94),
    [sym_write_modifiers] = STATE(32),
    [sym_if_statement] = STATE(167),
    [sym_for_statement] = STATE(167),
    [sym_declaration] = STATE(124),
    [sym__type] = STATE(163),
    [sym_array_type] = STATE(163),
    [sym_named_type] = STATE(163),
    [sym__expression] = STATE(34),
    [sym_unary_op] = STATE(34),
    [sym_binary_op] = STATE(34),
    [sym_array_op] = STATE(34),
    [sym_func_call] = STATE(34),
    [sym_field_access] = STATE(34),
    [sym_parenthesis_expression] = STATE(34),
    [aux_sym__linebreak] = STATE(33),
    [sym_global_identifier] = STATE(39),
    [aux_sym_write_modifiers_repeat1] = STATE(67),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_reg] = ACTIONS(19),
    [anon_sym_initial] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_block] = STATE(167),
    [sym_interface_statement] = STATE(167),
    [sym_decl_assign_statement] = STATE(167),
    [sym_assign_left_side] = STATE(155),
    [sym_assign_to] = STATE(94),
    [sym_write_modifiers] = STATE(32),
    [sym_if_statement] = STATE(167),
    [sym_for_statement] = STATE(167),
    [sym_declaration] = STATE(124),
    [sym__type] = STATE(163),
    [sym_array_type] = STATE(163),
    [sym_named_type] = STATE(163),
    [sym__expression] = STATE(34),
    [sym_unary_op] = STATE(34),
    [sym_binary_op] = STATE(34),
    [sym_array_op] = STATE(34),
    [sym_func_call] = STATE(34),
    [sym_field_access] = STATE(34),
    [sym_parenthesis_expression] = STATE(34),
    [aux_sym__linebreak] = STATE(33),
    [sym_global_identifier] = STATE(39),
    [aux_sym_write_modifiers_repeat1] = STATE(67),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_reg] = ACTIONS(19),
    [anon_sym_initial] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_block] = STATE(167),
    [sym_interface_statement] = STATE(167),
    [sym_decl_assign_statement] = STATE(167),
    [sym_assign_left_side] = STATE(155),
    [sym_assign_to] = STATE(94),
    [sym_write_modifiers] = STATE(32),
    [sym_if_statement] = STATE(167),
    [sym_for_statement] = STATE(167),
    [sym_declaration] = STATE(124),
    [sym__type] = STATE(163),
    [sym_array_type] = STATE(163),
    [sym_named_type] = STATE(163),
    [sym__expression] = STATE(34),
    [sym_unary_op] = STATE(34),
    [sym_binary_op] = STATE(34),
    [sym_array_op] = STATE(34),
    [sym_func_call] = STATE(34),
    [sym_field_access] = STATE(34),
    [sym_parenthesis_expression] = STATE(34),
    [aux_sym__linebreak] = STATE(33),
    [sym_global_identifier] = STATE(39),
    [aux_sym_write_modifiers_repeat1] = STATE(67),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_reg] = ACTIONS(19),
    [anon_sym_initial] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_block] = STATE(167),
    [sym_interface_statement] = STATE(167),
    [sym_decl_assign_statement] = STATE(167),
    [sym_assign_left_side] = STATE(155),
    [sym_assign_to] = STATE(94),
    [sym_write_modifiers] = STATE(32),
    [sym_if_statement] = STATE(167),
    [sym_for_statement] = STATE(167),
    [sym_declaration] = STATE(124),
    [sym__type] = STATE(163),
    [sym_array_type] = STATE(163),
    [sym_named_type] = STATE(163),
    [sym__expression] = STATE(34),
    [sym_unary_op] = STATE(34),
    [sym_binary_op] = STATE(34),
    [sym_array_op] = STATE(34),
    [sym_func_call] = STATE(34),
    [sym_field_access] = STATE(34),
    [sym_parenthesis_expression] = STATE(34),
    [aux_sym__linebreak] = STATE(33),
    [sym_global_identifier] = STATE(39),
    [aux_sym_write_modifiers_repeat1] = STATE(67),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_reg] = ACTIONS(19),
    [anon_sym_initial] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_block] = STATE(114),
    [sym_interface_statement] = STATE(114),
    [sym_decl_assign_statement] = STATE(114),
    [sym_assign_left_side] = STATE(102),
    [sym_assign_to] = STATE(94),
    [sym_write_modifiers] = STATE(32),
    [sym_if_statement] = STATE(114),
    [sym_for_statement] = STATE(114),
    [sym_declaration] = STATE(124),
    [sym__type] = STATE(163),
    [sym_array_type] = STATE(163),
    [sym_named_type] = STATE(163),
    [sym__expression] = STATE(34),
    [sym_unary_op] = STATE(34),
    [sym_binary_op] = STATE(34),
    [sym_array_op] = STATE(34),
    [sym_func_call] = STATE(34),
    [sym_field_access] = STATE(34),
    [sym_parenthesis_expression] = STATE(34),
    [aux_sym__linebreak] = STATE(33),
    [sym_global_identifier] = STATE(39),
    [aux_sym_write_modifiers_repeat1] = STATE(67),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_reg] = ACTIONS(19),
    [anon_sym_initial] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_block] = STATE(122),
    [sym_interface_statement] = STATE(122),
    [sym_decl_assign_statement] = STATE(122),
    [sym_assign_left_side] = STATE(97),
    [sym_assign_to] = STATE(94),
    [sym_write_modifiers] = STATE(32),
    [sym_if_statement] = STATE(122),
    [sym_for_statement] = STATE(122),
    [sym_declaration] = STATE(124),
    [sym__type] = STATE(163),
    [sym_array_type] = STATE(163),
    [sym_named_type] = STATE(163),
    [sym__expression] = STATE(34),
    [sym_unary_op] = STATE(34),
    [sym_binary_op] = STATE(34),
    [sym_array_op] = STATE(34),
    [sym_func_call] = STATE(34),
    [sym_field_access] = STATE(34),
    [sym_parenthesis_expression] = STATE(34),
    [aux_sym__linebreak] = STATE(7),
    [sym_global_identifier] = STATE(39),
    [aux_sym_write_modifiers_repeat1] = STATE(67),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_reg] = ACTIONS(19),
    [anon_sym_initial] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(51),
    [sym_number] = ACTIONS(37),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_block] = STATE(167),
    [sym_interface_statement] = STATE(167),
    [sym_decl_assign_statement] = STATE(167),
    [sym_assign_left_side] = STATE(155),
    [sym_assign_to] = STATE(94),
    [sym_write_modifiers] = STATE(32),
    [sym_if_statement] = STATE(167),
    [sym_for_statement] = STATE(167),
    [sym_declaration] = STATE(124),
    [sym__type] = STATE(163),
    [sym_array_type] = STATE(163),
    [sym_named_type] = STATE(163),
    [sym__expression] = STATE(34),
    [sym_unary_op] = STATE(34),
    [sym_binary_op] = STATE(34),
    [sym_array_op] = STATE(34),
    [sym_func_call] = STATE(34),
    [sym_field_access] = STATE(34),
    [sym_parenthesis_expression] = STATE(34),
    [aux_sym__linebreak] = STATE(33),
    [sym_global_identifier] = STATE(39),
    [aux_sym_write_modifiers_repeat1] = STATE(67),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_reg] = ACTIONS(19),
    [anon_sym_initial] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_output] = ACTIONS(27),
    [anon_sym_state] = ACTIONS(29),
    [anon_sym_gen] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LF] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym_single_line_comment] = ACTIONS(3),
    [sym_multi_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(19), 1,
      anon_sym_reg,
    ACTIONS(21), 1,
      anon_sym_initial,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 1,
      sym_number,
    STATE(32), 1,
      sym_write_modifiers,
    STATE(33), 1,
      aux_sym__linebreak,
    STATE(39), 1,
      sym_global_identifier,
    STATE(67), 1,
      aux_sym_write_modifiers_repeat1,
    STATE(94), 1,
      sym_assign_to,
    STATE(124), 1,
      sym_declaration,
    STATE(155), 1,
      sym_assign_left_side,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
    STATE(167), 5,
      sym_block,
      sym_interface_statement,
      sym_decl_assign_statement,
      sym_if_statement,
      sym_for_statement,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(34), 7,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
  [94] = 16,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_reg,
    ACTIONS(21), 1,
      anon_sym_initial,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_number,
    STATE(32), 1,
      sym_write_modifiers,
    STATE(39), 1,
      sym_global_identifier,
    STATE(67), 1,
      aux_sym_write_modifiers_repeat1,
    STATE(124), 1,
      sym_declaration,
    STATE(137), 1,
      sym_assign_to,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(34), 7,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
  [160] = 5,
    ACTIONS(59), 1,
      anon_sym_COLON_COLON,
    STATE(14), 1,
      aux_sym_global_identifier_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(55), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym_identifier,
    ACTIONS(57), 20,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [203] = 5,
    ACTIONS(59), 1,
      anon_sym_COLON_COLON,
    STATE(12), 1,
      aux_sym_global_identifier_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(61), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym_identifier,
    ACTIONS(63), 20,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [246] = 5,
    ACTIONS(69), 1,
      anon_sym_COLON_COLON,
    STATE(14), 1,
      aux_sym_global_identifier_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(65), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym_identifier,
    ACTIONS(67), 20,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [289] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(72), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym_identifier,
    ACTIONS(74), 21,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_COLON_COLON,
  [327] = 13,
    ACTIONS(80), 1,
      anon_sym_PLUS,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(78), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(76), 15,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [385] = 8,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(78), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(76), 19,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [433] = 10,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(78), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
    ACTIONS(76), 17,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [485] = 15,
    ACTIONS(80), 1,
      anon_sym_PLUS,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(78), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(76), 13,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [547] = 14,
    ACTIONS(80), 1,
      anon_sym_PLUS,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(78), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(76), 14,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [607] = 12,
    ACTIONS(80), 1,
      anon_sym_PLUS,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(78), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(76), 16,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [663] = 8,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(102), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(100), 19,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [711] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(104), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      sym_identifier,
    ACTIONS(106), 20,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [748] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(110), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(108), 21,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [784] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(114), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(112), 21,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [820] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(118), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(116), 21,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [856] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(122), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(120), 21,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [892] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(126), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(124), 21,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [928] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(130), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(128), 21,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [964] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(134), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
    ACTIONS(132), 21,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LF,
  [1000] = 17,
    ACTIONS(80), 1,
      anon_sym_PLUS,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(136), 6,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [1063] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      sym_number,
    STATE(39), 1,
      sym_global_identifier,
    STATE(126), 1,
      sym_declaration,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(38), 7,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
  [1114] = 5,
    ACTIONS(152), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym__linebreak,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(148), 11,
      anon_sym_interface,
      anon_sym_reg,
      anon_sym_initial,
      anon_sym_if,
      anon_sym_for,
      anon_sym_input,
      anon_sym_output,
      anon_sym_state,
      anon_sym_gen,
      anon_sym_DASH,
      sym_identifier,
    ACTIONS(150), 11,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_number,
  [1151] = 16,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_EQ,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LF,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1209] = 18,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    STATE(55), 1,
      sym__comma,
    STATE(138), 1,
      aux_sym_parenthesis_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1271] = 9,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_number,
    STATE(53), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(119), 2,
      sym_template_type,
      sym_template_generative_expression,
    STATE(118), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(47), 7,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
  [1315] = 9,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_number,
    STATE(53), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(172), 2,
      sym_template_type,
      sym_template_generative_expression,
    STATE(118), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(47), 7,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
  [1359] = 16,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_EQ,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LF,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1417] = 6,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(176), 3,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_SLASH,
    ACTIONS(178), 16,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_LF,
  [1454] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    STATE(180), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1510] = 15,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1564] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    STATE(165), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1620] = 15,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1674] = 15,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1727] = 15,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1780] = 15,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(191), 1,
      anon_sym_DOT_DOT,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1833] = 15,
    ACTIONS(86), 1,
      anon_sym_CARET,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(144), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_array_bracket_expression,
    STATE(28), 1,
      sym_parenthesis_expression_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(80), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(84), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1886] = 7,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(35), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [1922] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(199), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(18), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [1955] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(201), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(17), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [1988] = 5,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(66), 1,
      aux_sym__linebreak,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(203), 7,
      anon_sym_reg,
      anon_sym_initial,
      anon_sym_input,
      anon_sym_output,
      anon_sym_state,
      anon_sym_gen,
      sym_identifier,
    ACTIONS(205), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_number,
  [2019] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(209), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(19), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2052] = 6,
    ACTIONS(173), 1,
      anon_sym_LT,
    ACTIONS(176), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(180), 2,
      anon_sym_LBRACK,
      anon_sym_COMMA,
    ACTIONS(178), 13,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [2085] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(16), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2118] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(216), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(41), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2151] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(218), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(45), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2184] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(22), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2217] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(222), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(20), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2250] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(46), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2283] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(226), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(43), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2316] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(42), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2349] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(21), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2382] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(31), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2415] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(40), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2448] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(31), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
    STATE(44), 8,
      sym__expression,
      sym_unary_op,
      sym_binary_op,
      sym_array_op,
      sym_func_call,
      sym_field_access,
      sym_parenthesis_expression,
      sym_global_identifier,
  [2481] = 5,
    ACTIONS(35), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym__linebreak,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(238), 7,
      anon_sym_reg,
      anon_sym_initial,
      anon_sym_input,
      anon_sym_output,
      anon_sym_state,
      anon_sym_gen,
      sym_identifier,
    ACTIONS(240), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_number,
  [2512] = 5,
    ACTIONS(19), 1,
      anon_sym_reg,
    STATE(68), 1,
      aux_sym_write_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(242), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_state,
      anon_sym_gen,
      sym_identifier,
    ACTIONS(244), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_number,
  [2541] = 5,
    ACTIONS(248), 1,
      anon_sym_reg,
    STATE(68), 1,
      aux_sym_write_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(246), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_state,
      anon_sym_gen,
      sym_identifier,
    ACTIONS(251), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_number,
  [2570] = 12,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(253), 1,
      anon_sym_DASH_GT,
    STATE(33), 1,
      aux_sym__linebreak,
    STATE(90), 1,
      sym_declaration,
    STATE(100), 1,
      sym_declaration_list,
    STATE(154), 1,
      sym__interface_ports_output,
    STATE(157), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [2612] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(255), 6,
      anon_sym_reg,
      anon_sym_input,
      anon_sym_output,
      anon_sym_state,
      anon_sym_gen,
      sym_identifier,
    ACTIONS(257), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_number,
  [2636] = 12,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_DASH_GT,
    ACTIONS(259), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym__linebreak,
    STATE(90), 1,
      sym_declaration,
    STATE(99), 1,
      sym_declaration_list,
    STATE(157), 1,
      sym_global_identifier,
    STATE(162), 1,
      sym__interface_ports_output,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [2678] = 3,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(261), 5,
      anon_sym_input,
      anon_sym_output,
      anon_sym_state,
      anon_sym_gen,
      sym_identifier,
    ACTIONS(263), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_number,
  [2701] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LF,
    STATE(74), 1,
      aux_sym__linebreak,
    STATE(90), 1,
      sym_declaration,
    STATE(157), 1,
      sym_global_identifier,
    STATE(158), 1,
      sym_declaration_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [2737] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym__linebreak,
    STATE(90), 1,
      sym_declaration,
    STATE(157), 1,
      sym_global_identifier,
    STATE(166), 1,
      sym_declaration_list,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [2773] = 7,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(157), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(110), 2,
      sym_template_declaration_type,
      sym_declaration,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [2801] = 7,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(157), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(174), 2,
      sym_template_declaration_type,
      sym_declaration,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [2829] = 4,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      sym_latency_specifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(269), 8,
      anon_sym_DASH_GT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [2850] = 4,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      sym_latency_specifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(273), 8,
      anon_sym_DASH_GT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [2871] = 4,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      sym_latency_specifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(275), 8,
      anon_sym_DASH_GT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [2892] = 7,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(104), 1,
      sym_declaration,
    STATE(157), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [2919] = 7,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(157), 1,
      sym_global_identifier,
    STATE(182), 1,
      sym_declaration,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(27), 2,
      anon_sym_input,
      anon_sym_output,
    ACTIONS(29), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(163), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [2946] = 4,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_latency_specifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(277), 8,
      anon_sym_DASH_GT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [2967] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(279), 8,
      anon_sym_DASH_GT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [2982] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(281), 8,
      anon_sym_DASH_GT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [2997] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(283), 8,
      anon_sym_DASH_GT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [3012] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(285), 8,
      anon_sym_DASH_GT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_in,
      anon_sym_COMMA,
      anon_sym_LF,
  [3027] = 5,
    ACTIONS(59), 1,
      anon_sym_COLON_COLON,
    STATE(12), 1,
      aux_sym_global_identifier_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(287), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_LBRACK,
      sym_identifier,
  [3047] = 5,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym__comma,
    STATE(88), 1,
      aux_sym_declaration_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(289), 4,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [3067] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(157), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(294), 2,
      anon_sym_state,
      anon_sym_gen,
    STATE(160), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [3087] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym__comma,
    STATE(91), 1,
      aux_sym_declaration_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(296), 4,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [3107] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym__comma,
    STATE(88), 1,
      aux_sym_declaration_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(298), 4,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [3127] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym__comma,
    STATE(95), 1,
      aux_sym_assign_left_side_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(300), 3,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LF,
  [3146] = 7,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(304), 1,
      anon_sym_LT,
    STATE(144), 1,
      sym_template_declaration_arguments,
    STATE(178), 1,
      sym_block,
    STATE(179), 1,
      sym_interface_ports,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3169] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym__comma,
    STATE(92), 1,
      aux_sym_assign_left_side_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(306), 3,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LF,
  [3188] = 5,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      sym__comma,
    STATE(95), 1,
      aux_sym_assign_left_side_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(308), 3,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LF,
  [3207] = 6,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym__linebreak,
    STATE(169), 1,
      sym_module,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3227] = 6,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      anon_sym_EQ,
    ACTIONS(321), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym__linebreak,
    STATE(127), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3247] = 6,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      aux_sym__linebreak,
    STATE(151), 1,
      sym_module,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3267] = 4,
    ACTIONS(253), 1,
      anon_sym_DASH_GT,
    STATE(156), 1,
      sym__interface_ports_output,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(325), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [3283] = 4,
    ACTIONS(253), 1,
      anon_sym_DASH_GT,
    STATE(164), 1,
      sym__interface_ports_output,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(327), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [3299] = 6,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      aux_sym__linebreak,
    STATE(169), 1,
      sym_module,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3319] = 6,
    ACTIONS(319), 1,
      anon_sym_EQ,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym__linebreak,
    STATE(149), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3339] = 6,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      aux_sym__linebreak,
    STATE(169), 1,
      sym_module,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3359] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(337), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LF,
  [3371] = 4,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(157), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(161), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [3387] = 4,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(157), 1,
      sym_global_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(159), 3,
      sym__type,
      sym_array_type,
      sym_named_type,
  [3403] = 6,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(315), 1,
      anon_sym_LF,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      aux_sym__linebreak,
    STATE(169), 1,
      sym_module,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3423] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(341), 4,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3434] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(343), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3445] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_GT,
    STATE(76), 1,
      sym__comma,
    STATE(141), 1,
      aux_sym_template_declaration_arguments_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3462] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(347), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3473] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(347), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3484] = 5,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym__comma,
    STATE(113), 1,
      aux_sym_parenthesis_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3501] = 5,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      anon_sym_LF,
    STATE(6), 1,
      aux_sym__linebreak,
    STATE(148), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3518] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(354), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3529] = 5,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      anon_sym_LF,
    STATE(101), 1,
      aux_sym__linebreak,
    STATE(143), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3546] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(360), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3557] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_array_bracket_expression,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(362), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [3572] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_GT,
    STATE(37), 1,
      sym__comma,
    STATE(153), 1,
      aux_sym_named_type_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3589] = 5,
    ACTIONS(366), 1,
      anon_sym_GT,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      sym__comma,
    STATE(120), 1,
      aux_sym_named_type_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3606] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(371), 4,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3617] = 5,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym__linebreak,
    STATE(132), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3634] = 5,
    ACTIONS(373), 1,
      anon_sym_GT,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym__comma,
    STATE(123), 1,
      aux_sym_template_declaration_arguments_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3651] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(155), 4,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LF,
  [3662] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(378), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3673] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(167), 4,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LF,
  [3684] = 5,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    ACTIONS(382), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym__linebreak,
    STATE(133), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3701] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(384), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3712] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(378), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3723] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(386), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3734] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(388), 1,
      anon_sym_if,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    STATE(175), 2,
      sym_block,
      sym_if_statement,
  [3749] = 5,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym__linebreak,
    STATE(133), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3766] = 5,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(396), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym__linebreak,
    STATE(133), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3783] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(399), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3794] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(343), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3805] = 5,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym__linebreak,
    STATE(140), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3822] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(405), 4,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LF,
  [3833] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym__comma,
    STATE(113), 1,
      aux_sym_parenthesis_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3850] = 4,
    ACTIONS(302), 1,
      anon_sym_COLON,
    STATE(171), 1,
      sym_interface_ports,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(409), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
  [3865] = 5,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 1,
      anon_sym_LF,
    STATE(140), 1,
      aux_sym_source_file_repeat1,
    STATE(146), 1,
      aux_sym__linebreak,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3882] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_GT,
    STATE(76), 1,
      sym__comma,
    STATE(123), 1,
      aux_sym_template_declaration_arguments_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3899] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(418), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3910] = 5,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym__linebreak,
    STATE(140), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3927] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_interface_ports,
    STATE(176), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3944] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(418), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3955] = 5,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym__linebreak,
    STATE(169), 1,
      sym_module,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [3972] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(424), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_LF,
  [3983] = 5,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym__linebreak,
    STATE(133), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4000] = 5,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    ACTIONS(432), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym__linebreak,
    STATE(133), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4017] = 4,
    ACTIONS(434), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym__linebreak,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_module,
  [4032] = 5,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    ACTIONS(439), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym__linebreak,
    STATE(136), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4049] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(441), 4,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4060] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_GT,
    STATE(37), 1,
      sym__comma,
    STATE(120), 1,
      aux_sym_named_type_repeat1,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4077] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(445), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4087] = 3,
    ACTIONS(319), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(447), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4099] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(449), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4109] = 3,
    ACTIONS(451), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(171), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [4121] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(453), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4131] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(108), 1,
      sym_array_bracket_expression,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4145] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(108), 1,
      sym_array_bracket_expression,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4159] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(108), 1,
      sym_array_bracket_expression,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4173] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(461), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4183] = 4,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(108), 1,
      sym_array_bracket_expression,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4197] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(465), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4207] = 3,
    ACTIONS(469), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(467), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4219] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(471), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4229] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(447), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4238] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4249] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4258] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4267] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(477), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4276] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(366), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [4285] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(479), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4294] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(373), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [4303] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(481), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4312] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4321] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4330] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(487), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [4339] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4350] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(489), 2,
      anon_sym_RBRACE,
      anon_sym_LF,
  [4359] = 2,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
    ACTIONS(491), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4368] = 2,
    ACTIONS(493), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4376] = 2,
    ACTIONS(495), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4384] = 2,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4392] = 2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4400] = 2,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
  [4408] = 2,
    ACTIONS(503), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_single_line_comment,
      sym_multi_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 94,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 289,
  [SMALL_STATE(16)] = 327,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 433,
  [SMALL_STATE(19)] = 485,
  [SMALL_STATE(20)] = 547,
  [SMALL_STATE(21)] = 607,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 711,
  [SMALL_STATE(24)] = 748,
  [SMALL_STATE(25)] = 784,
  [SMALL_STATE(26)] = 820,
  [SMALL_STATE(27)] = 856,
  [SMALL_STATE(28)] = 892,
  [SMALL_STATE(29)] = 928,
  [SMALL_STATE(30)] = 964,
  [SMALL_STATE(31)] = 1000,
  [SMALL_STATE(32)] = 1063,
  [SMALL_STATE(33)] = 1114,
  [SMALL_STATE(34)] = 1151,
  [SMALL_STATE(35)] = 1209,
  [SMALL_STATE(36)] = 1271,
  [SMALL_STATE(37)] = 1315,
  [SMALL_STATE(38)] = 1359,
  [SMALL_STATE(39)] = 1417,
  [SMALL_STATE(40)] = 1454,
  [SMALL_STATE(41)] = 1510,
  [SMALL_STATE(42)] = 1564,
  [SMALL_STATE(43)] = 1620,
  [SMALL_STATE(44)] = 1674,
  [SMALL_STATE(45)] = 1727,
  [SMALL_STATE(46)] = 1780,
  [SMALL_STATE(47)] = 1833,
  [SMALL_STATE(48)] = 1886,
  [SMALL_STATE(49)] = 1922,
  [SMALL_STATE(50)] = 1955,
  [SMALL_STATE(51)] = 1988,
  [SMALL_STATE(52)] = 2019,
  [SMALL_STATE(53)] = 2052,
  [SMALL_STATE(54)] = 2085,
  [SMALL_STATE(55)] = 2118,
  [SMALL_STATE(56)] = 2151,
  [SMALL_STATE(57)] = 2184,
  [SMALL_STATE(58)] = 2217,
  [SMALL_STATE(59)] = 2250,
  [SMALL_STATE(60)] = 2283,
  [SMALL_STATE(61)] = 2316,
  [SMALL_STATE(62)] = 2349,
  [SMALL_STATE(63)] = 2382,
  [SMALL_STATE(64)] = 2415,
  [SMALL_STATE(65)] = 2448,
  [SMALL_STATE(66)] = 2481,
  [SMALL_STATE(67)] = 2512,
  [SMALL_STATE(68)] = 2541,
  [SMALL_STATE(69)] = 2570,
  [SMALL_STATE(70)] = 2612,
  [SMALL_STATE(71)] = 2636,
  [SMALL_STATE(72)] = 2678,
  [SMALL_STATE(73)] = 2701,
  [SMALL_STATE(74)] = 2737,
  [SMALL_STATE(75)] = 2773,
  [SMALL_STATE(76)] = 2801,
  [SMALL_STATE(77)] = 2829,
  [SMALL_STATE(78)] = 2850,
  [SMALL_STATE(79)] = 2871,
  [SMALL_STATE(80)] = 2892,
  [SMALL_STATE(81)] = 2919,
  [SMALL_STATE(82)] = 2946,
  [SMALL_STATE(83)] = 2967,
  [SMALL_STATE(84)] = 2982,
  [SMALL_STATE(85)] = 2997,
  [SMALL_STATE(86)] = 3012,
  [SMALL_STATE(87)] = 3027,
  [SMALL_STATE(88)] = 3047,
  [SMALL_STATE(89)] = 3067,
  [SMALL_STATE(90)] = 3087,
  [SMALL_STATE(91)] = 3107,
  [SMALL_STATE(92)] = 3127,
  [SMALL_STATE(93)] = 3146,
  [SMALL_STATE(94)] = 3169,
  [SMALL_STATE(95)] = 3188,
  [SMALL_STATE(96)] = 3207,
  [SMALL_STATE(97)] = 3227,
  [SMALL_STATE(98)] = 3247,
  [SMALL_STATE(99)] = 3267,
  [SMALL_STATE(100)] = 3283,
  [SMALL_STATE(101)] = 3299,
  [SMALL_STATE(102)] = 3319,
  [SMALL_STATE(103)] = 3339,
  [SMALL_STATE(104)] = 3359,
  [SMALL_STATE(105)] = 3371,
  [SMALL_STATE(106)] = 3387,
  [SMALL_STATE(107)] = 3403,
  [SMALL_STATE(108)] = 3423,
  [SMALL_STATE(109)] = 3434,
  [SMALL_STATE(110)] = 3445,
  [SMALL_STATE(111)] = 3462,
  [SMALL_STATE(112)] = 3473,
  [SMALL_STATE(113)] = 3484,
  [SMALL_STATE(114)] = 3501,
  [SMALL_STATE(115)] = 3518,
  [SMALL_STATE(116)] = 3529,
  [SMALL_STATE(117)] = 3546,
  [SMALL_STATE(118)] = 3557,
  [SMALL_STATE(119)] = 3572,
  [SMALL_STATE(120)] = 3589,
  [SMALL_STATE(121)] = 3606,
  [SMALL_STATE(122)] = 3617,
  [SMALL_STATE(123)] = 3634,
  [SMALL_STATE(124)] = 3651,
  [SMALL_STATE(125)] = 3662,
  [SMALL_STATE(126)] = 3673,
  [SMALL_STATE(127)] = 3684,
  [SMALL_STATE(128)] = 3701,
  [SMALL_STATE(129)] = 3712,
  [SMALL_STATE(130)] = 3723,
  [SMALL_STATE(131)] = 3734,
  [SMALL_STATE(132)] = 3749,
  [SMALL_STATE(133)] = 3766,
  [SMALL_STATE(134)] = 3783,
  [SMALL_STATE(135)] = 3794,
  [SMALL_STATE(136)] = 3805,
  [SMALL_STATE(137)] = 3822,
  [SMALL_STATE(138)] = 3833,
  [SMALL_STATE(139)] = 3850,
  [SMALL_STATE(140)] = 3865,
  [SMALL_STATE(141)] = 3882,
  [SMALL_STATE(142)] = 3899,
  [SMALL_STATE(143)] = 3910,
  [SMALL_STATE(144)] = 3927,
  [SMALL_STATE(145)] = 3944,
  [SMALL_STATE(146)] = 3955,
  [SMALL_STATE(147)] = 3972,
  [SMALL_STATE(148)] = 3983,
  [SMALL_STATE(149)] = 4000,
  [SMALL_STATE(150)] = 4017,
  [SMALL_STATE(151)] = 4032,
  [SMALL_STATE(152)] = 4049,
  [SMALL_STATE(153)] = 4060,
  [SMALL_STATE(154)] = 4077,
  [SMALL_STATE(155)] = 4087,
  [SMALL_STATE(156)] = 4099,
  [SMALL_STATE(157)] = 4109,
  [SMALL_STATE(158)] = 4121,
  [SMALL_STATE(159)] = 4131,
  [SMALL_STATE(160)] = 4145,
  [SMALL_STATE(161)] = 4159,
  [SMALL_STATE(162)] = 4173,
  [SMALL_STATE(163)] = 4183,
  [SMALL_STATE(164)] = 4197,
  [SMALL_STATE(165)] = 4207,
  [SMALL_STATE(166)] = 4219,
  [SMALL_STATE(167)] = 4229,
  [SMALL_STATE(168)] = 4238,
  [SMALL_STATE(169)] = 4249,
  [SMALL_STATE(170)] = 4258,
  [SMALL_STATE(171)] = 4267,
  [SMALL_STATE(172)] = 4276,
  [SMALL_STATE(173)] = 4285,
  [SMALL_STATE(174)] = 4294,
  [SMALL_STATE(175)] = 4303,
  [SMALL_STATE(176)] = 4312,
  [SMALL_STATE(177)] = 4321,
  [SMALL_STATE(178)] = 4330,
  [SMALL_STATE(179)] = 4339,
  [SMALL_STATE(180)] = 4350,
  [SMALL_STATE(181)] = 4359,
  [SMALL_STATE(182)] = 4368,
  [SMALL_STATE(183)] = 4376,
  [SMALL_STATE(184)] = 4384,
  [SMALL_STATE(185)] = 4392,
  [SMALL_STATE(186)] = 4400,
  [SMALL_STATE(187)] = 4408,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_identifier, 2, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_identifier, 2, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_identifier, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_identifier, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_identifier_repeat1, 2, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_identifier_repeat1, 2, .production_id = 5),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_identifier_repeat1, 2, .production_id = 5), SHIFT_REPEAT(183),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_global_identifier_repeat1, 2, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_identifier_repeat1, 2, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 34),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 34),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 21),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2, .production_id = 21),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_bracket_expression, 3, .production_id = 32),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_bracket_expression, 3, .production_id = 32),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis_expression, 3, .production_id = 32),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis_expression, 3, .production_id = 32),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, .production_id = 35),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, .production_id = 35),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis_expression_list, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis_expression_list, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_op, 2, .production_id = 17),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_op, 2, .production_id = 17),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 2, .production_id = 23),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 2, .production_id = 23),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis_expression_list, 3, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis_expression_list, 3, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis_expression_list, 4, .production_id = 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis_expression_list, 4, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latency_specifier, 2, .production_id = 32),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latency_specifier, 2, .production_id = 32),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__linebreak, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__linebreak, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__linebreak, 2), SHIFT_REPEAT(33),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_to, 1, .production_id = 10),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_to, 1, .production_id = 10),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_to, 2, .production_id = 22),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_to, 2, .production_id = 22),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 1, .production_id = 9),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1), SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_named_type, 1, .production_id = 9), REDUCE(sym__expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_list_repeat1, 2, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_assign_statement, 3, .production_id = 33),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_generative_expression, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_named_type, 1, .production_id = 9), REDUCE(sym__expression, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comma, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_write_modifiers, 1, .production_id = 11),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write_modifiers, 1, .production_id = 11),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_write_modifiers_repeat1, 2, .production_id = 5),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_write_modifiers_repeat1, 2, .production_id = 5), SHIFT_REPEAT(70),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_write_modifiers_repeat1, 2, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_write_modifiers_repeat1, 1, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_write_modifiers_repeat1, 1, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_write_modifiers, 1, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write_modifiers, 1, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 27),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, .production_id = 16),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 26),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 37),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 38),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 28),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 39),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 42),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_declaration_type, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_list_repeat1, 2, .production_id = 5),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(51),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_list, 1, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_list, 2, .production_id = 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_left_side, 2, .production_id = 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_left_side, 1, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assign_left_side_repeat1, 2, .production_id = 5),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assign_left_side_repeat1, 2, .production_id = 5), SHIFT_REPEAT(51),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_ports, 2, .production_id = 8),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_ports, 3, .production_id = 19),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, .production_id = 6),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_list_repeat1, 2, .production_id = 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 17),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 6, .production_id = 41),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_list_repeat1, 2, .production_id = 5),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_list_repeat1, 2, .production_id = 5), SHIFT_REPEAT(51),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_type, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_type_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_type_repeat1, 2), SHIFT_REPEAT(51),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 5, .production_id = 43),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_declaration_arguments_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_declaration_arguments_repeat1, 2), SHIFT_REPEAT(51),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 41),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 36),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 5),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 5), SHIFT_REPEAT(10),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 6),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assign_left_side_repeat1, 2, .production_id = 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 2, .production_id = 20),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 5),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 5), SHIFT_REPEAT(146),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 6),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 36),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__linebreak, 2), SHIFT_REPEAT(150),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_type, 4, .production_id = 40),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_ports, 3, .production_id = 18),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, .production_id = 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_ports, 3, .production_id = 15),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interface_ports_output, 2, .production_id = 14),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_ports, 2, .production_id = 7),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_ports, 4, .production_id = 29),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 31),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interface_ports_output, 3, .production_id = 25),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 12),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_statement, 3, .production_id = 30),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_declaration_arguments, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 44),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 13),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 24),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, .production_id = 45),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_declaration_arguments, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [503] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_sus() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
