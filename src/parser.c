#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

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
  aux_sym_array_repeat1 = 40,
  aux_sym_rhs_values_repeat1 = 41,
  aux_sym_assignment_repeat1 = 42,
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
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_rhs_values_repeat1] = "rhs_values_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
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
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_rhs_values_repeat1] = aux_sym_rhs_values_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
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
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
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
        '_', 13,
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
        '_', 13,
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
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
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
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
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
    [sym_source_file] = STATE(59),
    [sym_variable_path] = STATE(43),
    [sym_include] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_namespace_block] = STATE(44),
    [sym_statement] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_internal_variable] = ACTIONS(7),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(9),
  },
  [2] = {
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_quantity] = STATE(21),
    [sym_variable_path] = STATE(22),
    [sym_unquoted_string] = STATE(25),
    [sym_range] = STATE(25),
    [sym_array] = STATE(25),
    [sym_rhs_value] = STATE(56),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_path] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_time_quantity] = ACTIONS(19),
    [sym_length_quantity] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_internal_variable] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [aux_sym_array_token1] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(31),
  },
  [3] = {
    [sym_string] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_quantity] = STATE(21),
    [sym_variable_path] = STATE(22),
    [sym_unquoted_string] = STATE(25),
    [sym_range] = STATE(25),
    [sym_array] = STATE(25),
    [sym_rhs_value] = STATE(56),
    [sym_comment] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_path] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [sym_time_quantity] = ACTIONS(19),
    [sym_length_quantity] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_internal_variable] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [aux_sym_array_token1] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(19), 1,
      sym_length_quantity,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_time_quantity,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym_quantity,
    STATE(22), 1,
      sym_variable_path,
    STATE(49), 1,
      sym_rhs_value,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [54] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(19), 1,
      sym_length_quantity,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_time_quantity,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_quantity,
    STATE(22), 1,
      sym_variable_path,
    STATE(23), 1,
      sym_rhs_value,
    STATE(37), 1,
      sym_rhs_values,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [108] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(19), 1,
      sym_length_quantity,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_time_quantity,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_quantity,
    STATE(22), 1,
      sym_variable_path,
    STATE(23), 1,
      sym_rhs_value,
    STATE(40), 1,
      sym_rhs_values,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [162] = 14,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_path,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(25), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      aux_sym_array_token1,
    STATE(21), 1,
      sym_quantity,
    STATE(22), 1,
      sym_variable_path,
    STATE(56), 1,
      sym_rhs_value,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 2,
      sym_time_quantity,
      sym_length_quantity,
    ACTIONS(23), 2,
      sym_internal_variable,
      sym_identifier,
    STATE(25), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [212] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(19), 1,
      sym_length_quantity,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_time_quantity,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_quantity,
    STATE(22), 1,
      sym_variable_path,
    STATE(36), 1,
      sym_rhs_value,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [263] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_internal_variable,
    ACTIONS(19), 1,
      sym_length_quantity,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_path,
    ACTIONS(39), 1,
      sym_time_quantity,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_quantity,
    STATE(22), 1,
      sym_variable_path,
    STATE(57), 1,
      sym_rhs_value,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym_string,
      sym_boolean,
      sym_unquoted_string,
      sym_range,
      sym_array,
  [314] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_length_quantity,
    ACTIONS(39), 1,
      sym_time_quantity,
    ACTIONS(49), 1,
      sym_number,
    STATE(29), 1,
      sym_quantity,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [339] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_length_quantity,
    ACTIONS(39), 1,
      sym_time_quantity,
    ACTIONS(53), 1,
      sym_number,
    STATE(26), 1,
      sym_quantity,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_variable_path,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(57), 2,
      sym_internal_variable,
      sym_identifier,
    STATE(12), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(44), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [411] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_variable_path,
    ACTIONS(7), 2,
      sym_internal_variable,
      sym_identifier,
    STATE(12), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(44), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [437] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_variable_path,
    ACTIONS(7), 2,
      sym_internal_variable,
      sym_identifier,
    STATE(12), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(44), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [503] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_EQ,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_variable_path,
    ACTIONS(7), 2,
      sym_internal_variable,
      sym_identifier,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(44), 3,
      sym_include,
      sym_assignment,
      sym_namespace_block,
  [529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_DOT_DOT,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_rhs_values_repeat1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [729] = 2,
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
  [742] = 2,
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
  [755] = 2,
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
  [768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
    STATE(48), 1,
      aux_sym_assignment_repeat1,
  [865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      sym_internal_variable,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [876] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(137), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [890] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_string_repeat1,
    ACTIONS(142), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [904] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(146), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_EQ,
    STATE(51), 1,
      aux_sym_assignment_repeat1,
  [931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_array_repeat1,
  [944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_array_repeat1,
  [957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_EQ,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_assignment_repeat1,
  [970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_array_repeat1,
  [983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(55), 1,
      sym_variable_path,
    ACTIONS(7), 2,
      sym_internal_variable,
      sym_identifier,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_internal_variable,
      sym_identifier,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_path,
  [1033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 314,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 364,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 411,
  [SMALL_STATE(15)] = 437,
  [SMALL_STATE(16)] = 463,
  [SMALL_STATE(17)] = 483,
  [SMALL_STATE(18)] = 503,
  [SMALL_STATE(19)] = 529,
  [SMALL_STATE(20)] = 544,
  [SMALL_STATE(21)] = 558,
  [SMALL_STATE(22)] = 574,
  [SMALL_STATE(23)] = 587,
  [SMALL_STATE(24)] = 604,
  [SMALL_STATE(25)] = 617,
  [SMALL_STATE(26)] = 630,
  [SMALL_STATE(27)] = 643,
  [SMALL_STATE(28)] = 656,
  [SMALL_STATE(29)] = 669,
  [SMALL_STATE(30)] = 682,
  [SMALL_STATE(31)] = 699,
  [SMALL_STATE(32)] = 712,
  [SMALL_STATE(33)] = 729,
  [SMALL_STATE(34)] = 742,
  [SMALL_STATE(35)] = 755,
  [SMALL_STATE(36)] = 768,
  [SMALL_STATE(37)] = 780,
  [SMALL_STATE(38)] = 791,
  [SMALL_STATE(39)] = 802,
  [SMALL_STATE(40)] = 813,
  [SMALL_STATE(41)] = 824,
  [SMALL_STATE(42)] = 835,
  [SMALL_STATE(43)] = 846,
  [SMALL_STATE(44)] = 865,
  [SMALL_STATE(45)] = 876,
  [SMALL_STATE(46)] = 890,
  [SMALL_STATE(47)] = 904,
  [SMALL_STATE(48)] = 918,
  [SMALL_STATE(49)] = 931,
  [SMALL_STATE(50)] = 944,
  [SMALL_STATE(51)] = 957,
  [SMALL_STATE(52)] = 970,
  [SMALL_STATE(53)] = 983,
  [SMALL_STATE(54)] = 994,
  [SMALL_STATE(55)] = 1002,
  [SMALL_STATE(56)] = 1010,
  [SMALL_STATE(57)] = 1018,
  [SMALL_STATE(58)] = 1026,
  [SMALL_STATE(59)] = 1033,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_value, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_values, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhs_values, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rhs_values_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rhs_values_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_block, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
