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
      if (eof) ADVANCE(132);
      ADVANCE_MAP(
        '"', 135,
        '#', 134,
        ',', 180,
        '.', 177,
        '/', 139,
        '=', 178,
        '[', 181,
        '\\', 129,
        ']', 183,
        '_', 128,
        'f', 168,
        't', 172,
        '{', 184,
        '}', 185,
        '+', 126,
        '-', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 182,
        '"', 135,
        '#', 134,
        '.', 5,
        '/', 139,
        '[', 181,
        ']', 183,
        'f', 168,
        't', 172,
        '+', 126,
        '-', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 135,
        '#', 134,
        '.', 5,
        '/', 139,
        '[', 181,
        ']', 183,
        'f', 168,
        't', 172,
        '+', 126,
        '-', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(179);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(139);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(125);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(109);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'm' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'c' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'd' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'k') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 0xf6) ADVANCE(66);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'a' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 130:
      if (eof) ADVANCE(132);
      ADVANCE_MAP(
        '#', 134,
        ',', 180,
        '.', 176,
        '=', 178,
        ']', 183,
        '_', 128,
        '{', 184,
        '}', 185,
        '+', 126,
        '-', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 131:
      if (eof) ADVANCE(132);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == ']') ADVANCE(183);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == '}') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_time_quantity);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == '_') ADVANCE(109);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 'm' ||
          lookahead == 'u' ||
          lookahead == 0x2080) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_time_quantity);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_length_quantity);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_length_quantity);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 127,
        'E', 67,
        'G', 67,
        'M', 163,
        'P', 67,
        'T', 67,
        'Y', 67,
        'Z', 67,
        'a', 151,
        'b', 81,
        'c', 46,
        'd', 148,
        'f', 14,
        'h', 150,
        'i', 74,
        'k', 67,
        'l', 7,
        'm', 162,
        'n', 18,
        'p', 15,
        'r', 31,
        's', 149,
        'u', 105,
        'y', 19,
        'z', 67,
        0xb5, 163,
        0xc5, 155,
        0xe5, 80,
        0x3bc, 66,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        'E', 67,
        'G', 67,
        'M', 163,
        'P', 67,
        'T', 67,
        'Y', 67,
        'Z', 67,
        'a', 151,
        'b', 81,
        'c', 46,
        'd', 148,
        'f', 14,
        'h', 150,
        'i', 74,
        'k', 67,
        'l', 7,
        'm', 162,
        'n', 18,
        'p', 15,
        'r', 31,
        's', 149,
        'u', 105,
        'y', 19,
        'z', 67,
        0xb5, 163,
        0xc5, 155,
        0xe5, 80,
        0x3bc, 66,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_internal_variable);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(139);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_array_token1);
      if (lookahead == '\n') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 130},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 130},
  [11] = {.lex_state = 130},
  [12] = {.lex_state = 130},
  [13] = {.lex_state = 130},
  [14] = {.lex_state = 130},
  [15] = {.lex_state = 130},
  [16] = {.lex_state = 130},
  [17] = {.lex_state = 130},
  [18] = {.lex_state = 130},
  [19] = {.lex_state = 131},
  [20] = {.lex_state = 131},
  [21] = {.lex_state = 130},
  [22] = {.lex_state = 130},
  [23] = {.lex_state = 130},
  [24] = {.lex_state = 130},
  [25] = {.lex_state = 130},
  [26] = {.lex_state = 130},
  [27] = {.lex_state = 130},
  [28] = {.lex_state = 130},
  [29] = {.lex_state = 130},
  [30] = {.lex_state = 130},
  [31] = {.lex_state = 130},
  [32] = {.lex_state = 130},
  [33] = {.lex_state = 130},
  [34] = {.lex_state = 130},
  [35] = {.lex_state = 130},
  [36] = {.lex_state = 130},
  [37] = {.lex_state = 130},
  [38] = {.lex_state = 130},
  [39] = {.lex_state = 130},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 130},
  [42] = {.lex_state = 130},
  [43] = {.lex_state = 130},
  [44] = {.lex_state = 130},
  [45] = {.lex_state = 130},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 130},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 130},
  [50] = {.lex_state = 130},
  [51] = {.lex_state = 130},
  [52] = {.lex_state = 130},
  [53] = {.lex_state = 130},
  [54] = {.lex_state = 130},
  [55] = {.lex_state = 130},
  [56] = {.lex_state = 130},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 130},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 130},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 130},
  [66] = {.lex_state = 130},
  [67] = {.lex_state = 130},
  [68] = {.lex_state = 130},
  [69] = {.lex_state = 130},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 130},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 130},
  [75] = {.lex_state = 130},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 130},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 130},
  [80] = {.lex_state = 130},
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
  [98] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
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
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [144] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(59), 1,
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
  [190] = 13,
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
  [236] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
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
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    STATE(23), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [282] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(73), 1,
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
  [325] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_path,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_quantity,
    STATE(37), 1,
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
  [368] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_internal_variable,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_variable_path,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(38), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_number,
    STATE(32), 1,
      sym_quantity,
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_number,
    STATE(27), 1,
      sym_quantity,
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [443] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(66), 1,
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
  [471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
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
  [499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
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
  [527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DOT_DOT,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [628] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    STATE(62), 1,
      aux_sym_assignment_repeat1,
    STATE(69), 1,
      aux_sym_variable_path_repeat1,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [696] = 2,
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
  [709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [722] = 2,
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
  [735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [765] = 2,
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
  [778] = 2,
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
  [791] = 2,
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
  [804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [821] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym_block,
    STATE(62), 1,
      aux_sym_assignment_repeat1,
    STATE(71), 1,
      aux_sym_variable_path_repeat1,
  [846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    STATE(62), 1,
      aux_sym_assignment_repeat1,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [967] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(142), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(147), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [993] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym_string_repeat1,
    ACTIONS(151), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(155), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(157), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(161), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(163), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(165), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(167), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(167), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1107] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(171), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(173), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_array_repeat1,
  [1146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_internal_variable,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(72), 1,
      sym_variable_path,
  [1159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_assignment_repeat1,
  [1172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_EQ,
    STATE(61), 1,
      aux_sym_assignment_repeat1,
  [1185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_array_repeat1,
  [1198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_array_repeat1,
  [1211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_internal_variable,
    ACTIONS(199), 1,
      sym_identifier,
  [1221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_internal_variable,
    ACTIONS(203), 1,
      sym_identifier,
  [1231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_internal_variable,
    ACTIONS(207), 1,
      sym_identifier,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_internal_variable,
    ACTIONS(211), 1,
      sym_identifier,
  [1251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_variable_path_repeat1,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_variable_path_repeat1,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_internal_variable,
    ACTIONS(221), 1,
      sym_identifier,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_variable_path_repeat1,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_identifier,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_path,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DOT,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 282,
  [SMALL_STATE(9)] = 325,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 397,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 443,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 499,
  [SMALL_STATE(16)] = 527,
  [SMALL_STATE(17)] = 546,
  [SMALL_STATE(18)] = 565,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 614,
  [SMALL_STATE(22)] = 628,
  [SMALL_STATE(23)] = 653,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 683,
  [SMALL_STATE(26)] = 696,
  [SMALL_STATE(27)] = 709,
  [SMALL_STATE(28)] = 722,
  [SMALL_STATE(29)] = 735,
  [SMALL_STATE(30)] = 752,
  [SMALL_STATE(31)] = 765,
  [SMALL_STATE(32)] = 778,
  [SMALL_STATE(33)] = 791,
  [SMALL_STATE(34)] = 804,
  [SMALL_STATE(35)] = 821,
  [SMALL_STATE(36)] = 846,
  [SMALL_STATE(37)] = 859,
  [SMALL_STATE(38)] = 871,
  [SMALL_STATE(39)] = 882,
  [SMALL_STATE(40)] = 893,
  [SMALL_STATE(41)] = 912,
  [SMALL_STATE(42)] = 923,
  [SMALL_STATE(43)] = 934,
  [SMALL_STATE(44)] = 945,
  [SMALL_STATE(45)] = 956,
  [SMALL_STATE(46)] = 967,
  [SMALL_STATE(47)] = 981,
  [SMALL_STATE(48)] = 993,
  [SMALL_STATE(49)] = 1007,
  [SMALL_STATE(50)] = 1019,
  [SMALL_STATE(51)] = 1031,
  [SMALL_STATE(52)] = 1043,
  [SMALL_STATE(53)] = 1055,
  [SMALL_STATE(54)] = 1067,
  [SMALL_STATE(55)] = 1079,
  [SMALL_STATE(56)] = 1093,
  [SMALL_STATE(57)] = 1107,
  [SMALL_STATE(58)] = 1121,
  [SMALL_STATE(59)] = 1133,
  [SMALL_STATE(60)] = 1146,
  [SMALL_STATE(61)] = 1159,
  [SMALL_STATE(62)] = 1172,
  [SMALL_STATE(63)] = 1185,
  [SMALL_STATE(64)] = 1198,
  [SMALL_STATE(65)] = 1211,
  [SMALL_STATE(66)] = 1221,
  [SMALL_STATE(67)] = 1231,
  [SMALL_STATE(68)] = 1241,
  [SMALL_STATE(69)] = 1251,
  [SMALL_STATE(70)] = 1261,
  [SMALL_STATE(71)] = 1269,
  [SMALL_STATE(72)] = 1279,
  [SMALL_STATE(73)] = 1287,
  [SMALL_STATE(74)] = 1295,
  [SMALL_STATE(75)] = 1305,
  [SMALL_STATE(76)] = 1315,
  [SMALL_STATE(77)] = 1322,
  [SMALL_STATE(78)] = 1329,
  [SMALL_STATE(79)] = 1336,
  [SMALL_STATE(80)] = 1343,
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
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_value, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_values, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_values, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rhs_values_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rhs_values_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_block, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 9),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 10),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
