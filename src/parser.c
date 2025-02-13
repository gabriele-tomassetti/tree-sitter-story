/* Automatically generated by tree-sitter v0.25.1 (f5afe475deb7c0bae6407fb776c76824f717bb61) */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 1
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_title = 2,
  anon_sym_COLON = 3,
  anon_sym_characters = 4,
  anon_sym_COMMA = 5,
  anon_sym_inputs = 6,
  anon_sym_constraints = 7,
  anon_sym_story = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_spaces = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_GT = 15,
  anon_sym_LT = 16,
  anon_sym_SLASH = 17,
  anon_sym_STAR = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_question = 21,
  sym_number = 22,
  sym_source_file = 23,
  sym_title = 24,
  sym_characters = 25,
  sym__list = 26,
  sym_inputs = 27,
  sym_constraints = 28,
  sym_text = 29,
  sym_interpolation = 30,
  sym__inner = 31,
  sym_string = 32,
  sym__expression = 33,
  sym_binary_expression = 34,
  sym_question = 35,
  aux_sym__list_repeat1 = 36,
  aux_sym_string_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_title] = "title",
  [anon_sym_COLON] = ":",
  [anon_sym_characters] = "characters",
  [anon_sym_COMMA] = ",",
  [anon_sym_inputs] = "inputs",
  [anon_sym_constraints] = "constraints",
  [anon_sym_story] = "story",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_spaces] = "spaces",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_question] = "question",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_title] = "title",
  [sym_characters] = "characters",
  [sym__list] = "_list",
  [sym_inputs] = "inputs",
  [sym_constraints] = "constraints",
  [sym_text] = "text",
  [sym_interpolation] = "interpolation",
  [sym__inner] = "_inner",
  [sym_string] = "string",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_question] = "question",
  [aux_sym__list_repeat1] = "_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_characters] = anon_sym_characters,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_inputs] = anon_sym_inputs,
  [anon_sym_constraints] = anon_sym_constraints,
  [anon_sym_story] = anon_sym_story,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_spaces] = sym_spaces,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_question] = anon_sym_question,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_title] = sym_title,
  [sym_characters] = sym_characters,
  [sym__list] = sym__list,
  [sym_inputs] = sym_inputs,
  [sym_constraints] = sym_constraints,
  [sym_text] = sym_text,
  [sym_interpolation] = sym_interpolation,
  [sym__inner] = sym__inner,
  [sym_string] = sym_string,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_question] = sym_question,
  [aux_sym__list_repeat1] = aux_sym__list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_characters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inputs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_story] = {
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
  [sym_spaces] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_question] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_characters] = {
    .visible = true,
    .named = true,
  },
  [sym__list] = {
    .visible = false,
    .named = true,
  },
  [sym_inputs] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__inner] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_question] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      ADVANCE_MAP(
        '"', 9,
        '(', 10,
        ')', 11,
        '*', 15,
        '+', 16,
        ',', 4,
        '-', 17,
        '/', 14,
        ':', 3,
        '<', 13,
        '>', 12,
        '{', 5,
        '}', 6,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      if (('\n' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '?' ||
          lookahead == ']') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_spaces);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '?' ||
          lookahead == ']') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_spaces);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '?' ||
          lookahead == ']') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
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
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'q') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_story);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_inputs);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_question);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_characters);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_constraints);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_characters] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_inputs] = ACTIONS(1),
    [anon_sym_constraints] = ACTIONS(1),
    [anon_sym_story] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_question] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_source_file] = STATE(45),
    [sym_title] = STATE(24),
    [anon_sym_title] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 9,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12] = 1,
    ACTIONS(7), 9,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [24] = 2,
    ACTIONS(9), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(7), 7,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [38] = 3,
    ACTIONS(9), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(7), 5,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [54] = 4,
    ACTIONS(13), 1,
      anon_sym_story,
    ACTIONS(9), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [70] = 5,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(20), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_spaces,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    STATE(7), 3,
      sym_interpolation,
      sym__inner,
      aux_sym_string_repeat1,
  [88] = 5,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      sym_spaces,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    STATE(7), 3,
      sym_interpolation,
      sym__inner,
      aux_sym_string_repeat1,
  [106] = 4,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [122] = 4,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(15), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [138] = 4,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(42), 1,
      sym_spaces,
    STATE(8), 3,
      sym_interpolation,
      sym__inner,
      aux_sym_string_repeat1,
  [153] = 3,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 2,
      sym_identifier,
      sym_number,
    STATE(6), 2,
      sym__expression,
      sym_binary_expression,
  [165] = 3,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 2,
      sym_identifier,
      sym_number,
    STATE(9), 2,
      sym__expression,
      sym_binary_expression,
  [177] = 3,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 2,
      sym_identifier,
      sym_number,
    STATE(4), 2,
      sym__expression,
      sym_binary_expression,
  [189] = 3,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 2,
      sym_identifier,
      sym_number,
    STATE(5), 2,
      sym__expression,
      sym_binary_expression,
  [201] = 3,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 2,
      sym_identifier,
      sym_number,
    STATE(10), 2,
      sym__expression,
      sym_binary_expression,
  [213] = 3,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 2,
      sym_identifier,
      sym_number,
    STATE(3), 2,
      sym__expression,
      sym_binary_expression,
  [225] = 3,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym__list_repeat1,
    ACTIONS(60), 2,
      anon_sym_inputs,
      anon_sym_constraints,
  [236] = 3,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym__list_repeat1,
    ACTIONS(65), 2,
      anon_sym_inputs,
      anon_sym_constraints,
  [247] = 2,
    ACTIONS(69), 1,
      sym_spaces,
    ACTIONS(67), 3,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_identifier,
  [256] = 3,
    ACTIONS(58), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym__list_repeat1,
    ACTIONS(71), 2,
      anon_sym_inputs,
      anon_sym_constraints,
  [267] = 1,
    ACTIONS(73), 3,
      anon_sym_COLON,
      anon_sym_characters,
      anon_sym_question,
  [273] = 1,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_inputs,
      anon_sym_constraints,
  [279] = 2,
    ACTIONS(75), 1,
      anon_sym_characters,
    STATE(28), 1,
      sym_characters,
  [286] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_string,
  [293] = 2,
    ACTIONS(79), 1,
      anon_sym_story,
    STATE(27), 1,
      sym_text,
  [300] = 2,
    ACTIONS(81), 1,
      anon_sym_question,
    STATE(42), 1,
      sym_question,
  [307] = 2,
    ACTIONS(83), 1,
      anon_sym_inputs,
    STATE(29), 1,
      sym_inputs,
  [314] = 2,
    ACTIONS(85), 1,
      anon_sym_constraints,
    STATE(26), 1,
      sym_constraints,
  [321] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_string,
  [328] = 2,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(47), 1,
      sym__list,
  [335] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_string,
  [342] = 2,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(34), 1,
      sym__list,
  [349] = 1,
    ACTIONS(89), 1,
      anon_sym_constraints,
  [353] = 1,
    ACTIONS(91), 1,
      anon_sym_COLON,
  [357] = 1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
  [361] = 1,
    ACTIONS(95), 1,
      anon_sym_COLON,
  [365] = 1,
    ACTIONS(97), 1,
      sym_identifier,
  [369] = 1,
    ACTIONS(99), 1,
      anon_sym_COLON,
  [373] = 1,
    ACTIONS(101), 1,
      anon_sym_characters,
  [377] = 1,
    ACTIONS(103), 1,
      anon_sym_COLON,
  [381] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [385] = 1,
    ACTIONS(107), 1,
      anon_sym_question,
  [389] = 1,
    ACTIONS(109), 1,
      sym_identifier,
  [393] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [397] = 1,
    ACTIONS(113), 1,
      anon_sym_COLON,
  [401] = 1,
    ACTIONS(115), 1,
      anon_sym_inputs,
  [405] = 1,
    ACTIONS(117), 1,
      anon_sym_COLON,
  [409] = 1,
    ACTIONS(119), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 153,
  [SMALL_STATE(13)] = 165,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 201,
  [SMALL_STATE(17)] = 213,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 247,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 279,
  [SMALL_STATE(25)] = 286,
  [SMALL_STATE(26)] = 293,
  [SMALL_STATE(27)] = 300,
  [SMALL_STATE(28)] = 307,
  [SMALL_STATE(29)] = 314,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 328,
  [SMALL_STATE(32)] = 335,
  [SMALL_STATE(33)] = 342,
  [SMALL_STATE(34)] = 349,
  [SMALL_STATE(35)] = 353,
  [SMALL_STATE(36)] = 357,
  [SMALL_STATE(37)] = 361,
  [SMALL_STATE(38)] = 365,
  [SMALL_STATE(39)] = 369,
  [SMALL_STATE(40)] = 373,
  [SMALL_STATE(41)] = 377,
  [SMALL_STATE(42)] = 381,
  [SMALL_STATE(43)] = 385,
  [SMALL_STATE(44)] = 389,
  [SMALL_STATE(45)] = 393,
  [SMALL_STATE(46)] = 397,
  [SMALL_STATE(47)] = 401,
  [SMALL_STATE(48)] = 405,
  [SMALL_STATE(49)] = 409,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_question, 5, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputs, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_characters, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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

TS_PUBLIC const TSLanguage *tree_sitter_story(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .supertype_count = SUPERTYPE_COUNT,
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
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
    .name = "story",
    .max_reserved_word_set_size = 0,
    .metadata = {
      .major_version = 0,
      .minor_version = 1,
      .patch_version = 0,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
