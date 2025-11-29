#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 2
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

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
  sym_namespace_identifier = 26,
  sym_variable_name = 27,
  sym_variable_path = 28,
  sym_unquoted_string = 29,
  sym_range = 30,
  sym_array = 31,
  sym_rhs_value = 32,
  sym_rhs_values = 33,
  sym_block = 34,
  sym_include = 35,
  sym_assignment = 36,
  sym_namespace_block = 37,
  sym_statement = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_string_repeat1 = 40,
  aux_sym_variable_path_repeat1 = 41,
  aux_sym_unquoted_string_repeat1 = 42,
  aux_sym_array_repeat1 = 43,
  aux_sym_rhs_values_repeat1 = 44,
  aux_sym_assignment_repeat1 = 45,
  anon_alias_sym_namespace_identifier = 46,
  anon_alias_sym_variable_name = 47,
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
  [sym_namespace_identifier] = "namespace_identifier",
  [sym_variable_name] = "variable_name",
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
  [anon_alias_sym_namespace_identifier] = "namespace_identifier",
  [anon_alias_sym_variable_name] = "variable_name",
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
  [sym_namespace_identifier] = sym_namespace_identifier,
  [sym_variable_name] = sym_variable_name,
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
  [anon_alias_sym_namespace_identifier] = anon_alias_sym_namespace_identifier,
  [anon_alias_sym_variable_name] = anon_alias_sym_variable_name,
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
  [sym_namespace_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
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
  [anon_alias_sym_namespace_identifier] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_variable_name] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_namespace_identifier,
  },
  [2] = {
    [0] = anon_alias_sym_variable_name,
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
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 1},
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
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 15},
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
    [sym_source_file] = STATE(69),
    [sym_namespace_identifier] = STATE(61),
    [sym_variable_path] = STATE(36),
    [sym_include] = STATE(39),
    [sym_assignment] = STATE(39),
    [sym_namespace_block] = STATE(39),
    [sym_statement] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
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
    STATE(65), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    STATE(24), 5,
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
    STATE(65), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    STATE(24), 5,
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
    STATE(26), 1,
      sym_rhs_value,
    STATE(42), 1,
      sym_rhs_values,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
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
    STATE(52), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [194] = 14,
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
    STATE(26), 1,
      sym_rhs_value,
    STATE(43), 1,
      sym_rhs_values,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [242] = 13,
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
    STATE(65), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 2,
      sym_time_quantity,
      sym_length_quantity,
    STATE(24), 5,
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
    STATE(35), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
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
    STATE(64), 1,
      sym_rhs_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [378] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_internal_variable,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_variable_path,
    STATE(61), 1,
      sym_namespace_identifier,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(39), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [410] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym_variable_path,
    STATE(61), 1,
      sym_namespace_identifier,
    STATE(14), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(39), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [441] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_variable_path,
    STATE(61), 1,
      sym_namespace_identifier,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(39), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(66), 1,
      sym_number,
    STATE(28), 1,
      sym_quantity,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [497] = 9,
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
    STATE(36), 1,
      sym_variable_path,
    STATE(61), 1,
      sym_namespace_identifier,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(39), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_length_quantity,
    ACTIONS(41), 1,
      sym_time_quantity,
    ACTIONS(72), 1,
      sym_number,
    STATE(31), 1,
      sym_quantity,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [572] = 4,
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
  [591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [610] = 2,
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
  [624] = 3,
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
  [640] = 2,
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
  [654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [680] = 2,
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
  [693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [706] = 4,
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
  [723] = 2,
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
  [736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 7,
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
    ACTIONS(99), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [766] = 2,
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
  [779] = 2,
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
  [792] = 2,
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
  [805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [847] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
    STATE(56), 1,
      aux_sym_assignment_repeat1,
  [866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [943] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_string_repeat1,
    ACTIONS(140), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_internal_variable,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(59), 1,
      sym_variable_name,
    STATE(71), 1,
      sym_namespace_identifier,
  [973] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(148), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [987] = 4,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(153), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(61), 1,
      sym_namespace_identifier,
    STATE(66), 1,
      sym_variable_path,
  [1029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(161), 1,
      sym_internal_variable,
    STATE(55), 1,
      sym_variable_name,
    STATE(71), 1,
      sym_namespace_identifier,
  [1057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_array_repeat1,
  [1070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_assignment_repeat1,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_EQ,
    STATE(53), 1,
      aux_sym_assignment_repeat1,
  [1114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_repeat1,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_array_repeat1,
  [1140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_variable_path_repeat1,
  [1159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_variable_path_repeat1,
  [1169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_variable_path_repeat1,
  [1179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(71), 1,
      sym_namespace_identifier,
  [1189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_path,
  [1227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 410,
  [SMALL_STATE(12)] = 441,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 497,
  [SMALL_STATE(15)] = 528,
  [SMALL_STATE(16)] = 553,
  [SMALL_STATE(17)] = 572,
  [SMALL_STATE(18)] = 591,
  [SMALL_STATE(19)] = 610,
  [SMALL_STATE(20)] = 624,
  [SMALL_STATE(21)] = 640,
  [SMALL_STATE(22)] = 654,
  [SMALL_STATE(23)] = 667,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 693,
  [SMALL_STATE(26)] = 706,
  [SMALL_STATE(27)] = 723,
  [SMALL_STATE(28)] = 736,
  [SMALL_STATE(29)] = 749,
  [SMALL_STATE(30)] = 766,
  [SMALL_STATE(31)] = 779,
  [SMALL_STATE(32)] = 792,
  [SMALL_STATE(33)] = 805,
  [SMALL_STATE(34)] = 822,
  [SMALL_STATE(35)] = 835,
  [SMALL_STATE(36)] = 847,
  [SMALL_STATE(37)] = 866,
  [SMALL_STATE(38)] = 877,
  [SMALL_STATE(39)] = 888,
  [SMALL_STATE(40)] = 899,
  [SMALL_STATE(41)] = 910,
  [SMALL_STATE(42)] = 921,
  [SMALL_STATE(43)] = 932,
  [SMALL_STATE(44)] = 943,
  [SMALL_STATE(45)] = 957,
  [SMALL_STATE(46)] = 973,
  [SMALL_STATE(47)] = 987,
  [SMALL_STATE(48)] = 1001,
  [SMALL_STATE(49)] = 1013,
  [SMALL_STATE(50)] = 1029,
  [SMALL_STATE(51)] = 1041,
  [SMALL_STATE(52)] = 1057,
  [SMALL_STATE(53)] = 1070,
  [SMALL_STATE(54)] = 1083,
  [SMALL_STATE(55)] = 1092,
  [SMALL_STATE(56)] = 1101,
  [SMALL_STATE(57)] = 1114,
  [SMALL_STATE(58)] = 1127,
  [SMALL_STATE(59)] = 1140,
  [SMALL_STATE(60)] = 1149,
  [SMALL_STATE(61)] = 1159,
  [SMALL_STATE(62)] = 1169,
  [SMALL_STATE(63)] = 1179,
  [SMALL_STATE(64)] = 1189,
  [SMALL_STATE(65)] = 1197,
  [SMALL_STATE(66)] = 1205,
  [SMALL_STATE(67)] = 1213,
  [SMALL_STATE(68)] = 1220,
  [SMALL_STATE(69)] = 1227,
  [SMALL_STATE(70)] = 1234,
  [SMALL_STATE(71)] = 1241,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_value, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_values, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_values, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rhs_values_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rhs_values_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_block, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_identifier, 1, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1, 0, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 0),
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
