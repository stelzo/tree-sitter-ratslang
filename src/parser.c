#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 4
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_string_token1 = 3,
  aux_sym_string_token2 = 4,
  sym_path = 5,
  anon_sym_true = 6,
  anon_sym_false = 7,
  sym_time_quantity = 8,
  sym_length_quantity = 9,
  sym_number = 10,
  sym_internal_variable = 11,
  sym_identifier = 12,
  anon_sym_DOT = 13,
  anon_sym_EQ = 14,
  anon_sym_DOT_DOT = 15,
  anon_sym_COMMA = 16,
  anon_sym_LBRACK = 17,
  aux_sym_array_token1 = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  sym_source_file = 22,
  sym_string = 23,
  sym_boolean = 24,
  sym_quantity = 25,
  sym_variable_path = 26,
  sym_unquoted_string = 27,
  sym_range = 28,
  sym_array = 29,
  sym_rhs_value = 30,
  sym_rhs_values = 31,
  sym_block = 32,
  sym_include = 33,
  sym_assignment = 34,
  sym_namespace_block = 35,
  sym_statement = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_string_repeat1 = 38,
  aux_sym_variable_path_repeat1 = 39,
  aux_sym_unquoted_string_repeat1 = 40,
  aux_sym_array_repeat1 = 41,
  aux_sym_rhs_values_repeat1 = 42,
  aux_sym_assignment_repeat1 = 43,
  alias_sym_namespace_segment_identifier = 44,
  alias_sym_namespace_segment_internal = 45,
  alias_sym_path_last_identifier = 46,
  alias_sym_path_last_internal = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_path] = "path",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_time_quantity] = "time_quantity",
  [sym_length_quantity] = "length_quantity",
  [sym_number] = "number",
  [sym_internal_variable] = "internal_variable",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [aux_sym_array_token1] = "array_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_quantity] = "quantity",
  [sym_variable_path] = "variable_path",
  [sym_unquoted_string] = "unquoted_string",
  [sym_range] = "range",
  [sym_array] = "array",
  [sym_rhs_value] = "rhs_value",
  [sym_rhs_values] = "rhs_values",
  [sym_block] = "block",
  [sym_include] = "include",
  [sym_assignment] = "assignment",
  [sym_namespace_block] = "namespace_block",
  [sym_statement] = "statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_variable_path_repeat1] = "variable_path_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_rhs_values_repeat1] = "rhs_values_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [alias_sym_namespace_segment_identifier] = "namespace_segment_identifier",
  [alias_sym_namespace_segment_internal] = "namespace_segment_internal",
  [alias_sym_path_last_identifier] = "path_last_identifier",
  [alias_sym_path_last_internal] = "path_last_internal",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_path] = sym_path,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_time_quantity] = sym_time_quantity,
  [sym_length_quantity] = sym_length_quantity,
  [sym_number] = sym_number,
  [sym_internal_variable] = sym_internal_variable,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_array_token1] = aux_sym_array_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_quantity] = sym_quantity,
  [sym_variable_path] = sym_variable_path,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_range] = sym_range,
  [sym_array] = sym_array,
  [sym_rhs_value] = sym_rhs_value,
  [sym_rhs_values] = sym_rhs_values,
  [sym_block] = sym_block,
  [sym_include] = sym_include,
  [sym_assignment] = sym_assignment,
  [sym_namespace_block] = sym_namespace_block,
  [sym_statement] = sym_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_variable_path_repeat1] = aux_sym_variable_path_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_rhs_values_repeat1] = aux_sym_rhs_values_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [alias_sym_namespace_segment_identifier] = alias_sym_namespace_segment_identifier,
  [alias_sym_namespace_segment_internal] = alias_sym_namespace_segment_internal,
  [alias_sym_path_last_identifier] = alias_sym_path_last_identifier,
  [alias_sym_path_last_internal] = alias_sym_path_last_internal,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_time_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_length_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_internal_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_array_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_path] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_rhs_value] = {
    .visible = true,
    .named = true,
  },
  [sym_rhs_values] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rhs_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_namespace_segment_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_segment_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_path_last_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_path_last_internal] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_namespace_segment_internal,
  },
  [2] = {
    [0] = alias_sym_namespace_segment_internal,
    [2] = alias_sym_path_last_internal,
  },
  [3] = {
    [1] = alias_sym_namespace_segment_identifier,
  },
  [4] = {
    [0] = alias_sym_namespace_segment_internal,
    [2] = alias_sym_path_last_identifier,
  },
  [5] = {
    [0] = alias_sym_namespace_segment_identifier,
    [2] = alias_sym_path_last_internal,
  },
  [6] = {
    [0] = alias_sym_namespace_segment_identifier,
    [2] = alias_sym_path_last_identifier,
  },
  [7] = {
    [0] = alias_sym_namespace_segment_internal,
    [3] = alias_sym_path_last_internal,
  },
  [8] = {
    [0] = alias_sym_namespace_segment_internal,
    [3] = alias_sym_path_last_identifier,
  },
  [9] = {
    [0] = alias_sym_namespace_segment_identifier,
    [3] = alias_sym_path_last_internal,
  },
  [10] = {
    [0] = alias_sym_namespace_segment_identifier,
    [3] = alias_sym_path_last_identifier,
  },
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
  [53] = 53,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 20,
        '#', 19,
        ',', 47,
        '.', 44,
        '/', 24,
        '=', 45,
        '[', 48,
        '\\', 14,
        ']', 50,
        '_', 13,
        'f', 35,
        't', 39,
        '{', 51,
        '}', 52,
        '+', 11,
        '-', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 49,
        '"', 20,
        '#', 19,
        '.', 5,
        '/', 24,
        '[', 48,
        ']', 50,
        'f', 35,
        't', 39,
        '+', 11,
        '-', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 20,
        '#', 19,
        '.', 5,
        '/', 24,
        '[', 48,
        ']', 50,
        'f', 35,
        't', 39,
        '+', 11,
        '-', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '#', 19,
        ',', 47,
        '.', 43,
        '=', 45,
        ']', 50,
        '_', 13,
        '{', 51,
        '}', 52,
        '+', 11,
        '-', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '}') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_time_quantity);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_length_quantity);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_internal_variable);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_array_token1);
      if (lookahead == '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_time_quantity] = ACTIONS(1),
    [sym_length_quantity] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_internal_variable] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_variable_path] = STATE(40),
    [sym_include] = STATE(38),
    [sym_assignment] = STATE(38),
    [sym_namespace_block] = STATE(38),
    [sym_statement] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_internal_variable] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DOT_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      aux_sym_array_token1,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(70), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [49] = 14,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DOT_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      aux_sym_array_token1,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(70), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [98] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(24), 1,
      sym_rhs_value,
    STATE(44), 1,
      sym_rhs_values,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [146] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(59), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [194] = 13,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_path,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_DOT_DOT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      aux_sym_array_token1,
    STATE(20), 1,
      sym_quantity,
    STATE(70), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [240] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(24), 1,
      sym_rhs_value,
    STATE(42), 1,
      sym_rhs_values,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [288] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(73), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [333] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(43), 1,
      anon_sym_DOT_DOT,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(37), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [378] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_internal_variable,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_variable_path,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(38), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [407] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(62), 1,
      sym_number,
    STATE(32), 1,
      sym_quantity,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [432] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(66), 1,
      sym_number,
    STATE(27), 1,
      sym_quantity,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [457] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_variable_path,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(38), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [485] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_variable_path,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(38), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [513] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_variable_path,
    STATE(13), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(38), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT_DOT,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 8,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [642] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    STATE(62), 1,
      aux_sym_assignment_repeat1,
    STATE(69), 1,
      aux_sym_variable_path_repeat1,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [835] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym_block,
    STATE(62), 1,
      aux_sym_assignment_repeat1,
    STATE(71), 1,
      aux_sym_variable_path_repeat1,
  [860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    STATE(62), 1,
      aux_sym_assignment_repeat1,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [981] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(144), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(149), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1007] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym_string_repeat1,
    ACTIONS(153), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(161), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(163), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(165), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(167), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(169), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(169), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1121] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(173), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(175), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [1160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_internal_variable,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(72), 1,
      sym_variable_path,
  [1173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_EQ,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_assignment_repeat1,
  [1186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_EQ,
    STATE(61), 1,
      aux_sym_assignment_repeat1,
  [1199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_array_repeat1,
  [1212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_array_repeat1,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_internal_variable,
    ACTIONS(201), 1,
      sym_identifier,
  [1235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_internal_variable,
    ACTIONS(205), 1,
      sym_identifier,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_internal_variable,
    ACTIONS(209), 1,
      sym_identifier,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_internal_variable,
    ACTIONS(213), 1,
      sym_identifier,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_variable_path_repeat1,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_variable_path_repeat1,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_internal_variable,
    ACTIONS(223), 1,
      sym_identifier,
  [1319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_variable_path_repeat1,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_identifier,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_path,
  [1350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
  [1357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 407,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 485,
  [SMALL_STATE(15)] = 513,
  [SMALL_STATE(16)] = 541,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 579,
  [SMALL_STATE(19)] = 598,
  [SMALL_STATE(20)] = 612,
  [SMALL_STATE(21)] = 628,
  [SMALL_STATE(22)] = 642,
  [SMALL_STATE(23)] = 667,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 697,
  [SMALL_STATE(26)] = 710,
  [SMALL_STATE(27)] = 723,
  [SMALL_STATE(28)] = 736,
  [SMALL_STATE(29)] = 749,
  [SMALL_STATE(30)] = 766,
  [SMALL_STATE(31)] = 779,
  [SMALL_STATE(32)] = 792,
  [SMALL_STATE(33)] = 805,
  [SMALL_STATE(34)] = 818,
  [SMALL_STATE(35)] = 835,
  [SMALL_STATE(36)] = 860,
  [SMALL_STATE(37)] = 873,
  [SMALL_STATE(38)] = 885,
  [SMALL_STATE(39)] = 896,
  [SMALL_STATE(40)] = 907,
  [SMALL_STATE(41)] = 926,
  [SMALL_STATE(42)] = 937,
  [SMALL_STATE(43)] = 948,
  [SMALL_STATE(44)] = 959,
  [SMALL_STATE(45)] = 970,
  [SMALL_STATE(46)] = 981,
  [SMALL_STATE(47)] = 995,
  [SMALL_STATE(48)] = 1007,
  [SMALL_STATE(49)] = 1021,
  [SMALL_STATE(50)] = 1033,
  [SMALL_STATE(51)] = 1045,
  [SMALL_STATE(52)] = 1057,
  [SMALL_STATE(53)] = 1069,
  [SMALL_STATE(54)] = 1081,
  [SMALL_STATE(55)] = 1093,
  [SMALL_STATE(56)] = 1107,
  [SMALL_STATE(57)] = 1121,
  [SMALL_STATE(58)] = 1135,
  [SMALL_STATE(59)] = 1147,
  [SMALL_STATE(60)] = 1160,
  [SMALL_STATE(61)] = 1173,
  [SMALL_STATE(62)] = 1186,
  [SMALL_STATE(63)] = 1199,
  [SMALL_STATE(64)] = 1212,
  [SMALL_STATE(65)] = 1225,
  [SMALL_STATE(66)] = 1235,
  [SMALL_STATE(67)] = 1245,
  [SMALL_STATE(68)] = 1255,
  [SMALL_STATE(69)] = 1265,
  [SMALL_STATE(70)] = 1275,
  [SMALL_STATE(71)] = 1283,
  [SMALL_STATE(72)] = 1293,
  [SMALL_STATE(73)] = 1301,
  [SMALL_STATE(74)] = 1309,
  [SMALL_STATE(75)] = 1319,
  [SMALL_STATE(76)] = 1329,
  [SMALL_STATE(77)] = 1336,
  [SMALL_STATE(78)] = 1343,
  [SMALL_STATE(79)] = 1350,
  [SMALL_STATE(80)] = 1357,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_value, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_values, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_values, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rhs_values_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rhs_values_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_block, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 9),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 10),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 8),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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

TS_PUBLIC const TSLanguage *tree_sitter_ratslang(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
