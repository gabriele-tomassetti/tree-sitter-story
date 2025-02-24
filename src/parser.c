#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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

enum ts_field_identifiers {
  field_people = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_people] = "people",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_people, 2},
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
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
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_spaces);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
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

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
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
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_title] = STATE(2),
    [anon_sym_title] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_characters,
    ACTIONS(9), 1,
      anon_sym_inputs,
    ACTIONS(11), 1,
      anon_sym_constraints,
    ACTIONS(13), 1,
      anon_sym_story,
    ACTIONS(15), 1,
      anon_sym_question,
    STATE(7), 1,
      sym_characters,
    STATE(11), 1,
      sym_inputs,
    STATE(28), 1,
      sym_constraints,
    STATE(34), 1,
      sym_text,
    STATE(47), 1,
      sym_question,
  [34] = 2,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_question,
  [49] = 1,
    ACTIONS(17), 10,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_question,
  [62] = 3,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_question,
  [79] = 1,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_question,
  [92] = 9,
    ACTIONS(9), 1,
      anon_sym_inputs,
    ACTIONS(11), 1,
      anon_sym_constraints,
    ACTIONS(13), 1,
      anon_sym_story,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_inputs,
    STATE(26), 1,
      sym_constraints,
    STATE(37), 1,
      sym_text,
    STATE(44), 1,
      sym_question,
  [120] = 4,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_story,
      anon_sym_question,
  [138] = 3,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym__list_repeat1,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_inputs,
      anon_sym_constraints,
      anon_sym_story,
      anon_sym_question,
  [152] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
  [168] = 7,
    ACTIONS(11), 1,
      anon_sym_constraints,
    ACTIONS(13), 1,
      anon_sym_story,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_constraints,
    STATE(37), 1,
      sym_text,
    STATE(44), 1,
      sym_question,
  [190] = 4,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(21), 2,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
  [206] = 3,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym__list_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_inputs,
      anon_sym_constraints,
      anon_sym_story,
      anon_sym_question,
  [220] = 1,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_characters,
      anon_sym_inputs,
      anon_sym_constraints,
      anon_sym_story,
      anon_sym_question,
  [230] = 3,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym__list_repeat1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_inputs,
      anon_sym_constraints,
      anon_sym_story,
      anon_sym_question,
  [244] = 7,
    ACTIONS(11), 1,
      anon_sym_constraints,
    ACTIONS(13), 1,
      anon_sym_story,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_constraints,
    STATE(35), 1,
      sym_text,
    STATE(57), 1,
      sym_question,
  [266] = 4,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      sym_spaces,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    STATE(19), 3,
      sym_interpolation,
      sym__inner,
      aux_sym_string_repeat1,
  [281] = 1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_inputs,
      anon_sym_constraints,
      anon_sym_story,
      anon_sym_question,
  [290] = 4,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      sym_spaces,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    STATE(19), 3,
      sym_interpolation,
      sym__inner,
      aux_sym_string_repeat1,
  [305] = 1,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_characters,
      anon_sym_inputs,
      anon_sym_constraints,
      anon_sym_story,
      anon_sym_question,
  [314] = 3,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 2,
      sym_identifier,
      sym_number,
    STATE(5), 2,
      sym__expression,
      sym_binary_expression,
  [326] = 5,
    ACTIONS(13), 1,
      anon_sym_story,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_text,
    STATE(50), 1,
      sym_question,
  [342] = 3,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 2,
      sym_identifier,
      sym_number,
    STATE(8), 2,
      sym__expression,
      sym_binary_expression,
  [354] = 3,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 2,
      sym_identifier,
      sym_number,
    STATE(10), 2,
      sym__expression,
      sym_binary_expression,
  [366] = 3,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 2,
      sym_identifier,
      sym_number,
    STATE(4), 2,
      sym__expression,
      sym_binary_expression,
  [378] = 5,
    ACTIONS(13), 1,
      anon_sym_story,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_text,
    STATE(57), 1,
      sym_question,
  [394] = 3,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 2,
      sym_identifier,
      sym_number,
    STATE(3), 2,
      sym__expression,
      sym_binary_expression,
  [406] = 5,
    ACTIONS(13), 1,
      anon_sym_story,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_text,
    STATE(44), 1,
      sym_question,
  [422] = 3,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      sym_spaces,
    STATE(17), 3,
      sym_interpolation,
      sym__inner,
      aux_sym_string_repeat1,
  [434] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_inputs,
      anon_sym_constraints,
      anon_sym_story,
      anon_sym_question,
  [442] = 3,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 2,
      sym_identifier,
      sym_number,
    STATE(12), 2,
      sym__expression,
      sym_binary_expression,
  [454] = 1,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_constraints,
      anon_sym_story,
      anon_sym_question,
  [461] = 3,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_question,
  [471] = 3,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_question,
  [481] = 3,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_question,
  [491] = 2,
    ACTIONS(92), 1,
      sym_spaces,
    ACTIONS(90), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [499] = 3,
    ACTIONS(15), 1,
      anon_sym_question,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_question,
  [509] = 2,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_string,
  [516] = 2,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_string,
  [523] = 2,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(32), 1,
      sym__list,
  [530] = 2,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(30), 1,
      sym__list,
  [537] = 2,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_string,
  [544] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_question,
  [549] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [553] = 1,
    ACTIONS(100), 1,
      sym_identifier,
  [557] = 1,
    ACTIONS(102), 1,
      anon_sym_COLON,
  [561] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
  [565] = 1,
    ACTIONS(104), 1,
      sym_identifier,
  [569] = 1,
    ACTIONS(106), 1,
      anon_sym_COLON,
  [573] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [577] = 1,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
  [581] = 1,
    ACTIONS(110), 1,
      anon_sym_COLON,
  [585] = 1,
    ACTIONS(112), 1,
      anon_sym_COLON,
  [589] = 1,
    ACTIONS(114), 1,
      anon_sym_COLON,
  [593] = 1,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [597] = 1,
    ACTIONS(118), 1,
      anon_sym_COLON,
  [601] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [605] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [609] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 168,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 206,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 290,
  [SMALL_STATE(20)] = 305,
  [SMALL_STATE(21)] = 314,
  [SMALL_STATE(22)] = 326,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 354,
  [SMALL_STATE(25)] = 366,
  [SMALL_STATE(26)] = 378,
  [SMALL_STATE(27)] = 394,
  [SMALL_STATE(28)] = 406,
  [SMALL_STATE(29)] = 422,
  [SMALL_STATE(30)] = 434,
  [SMALL_STATE(31)] = 442,
  [SMALL_STATE(32)] = 454,
  [SMALL_STATE(33)] = 461,
  [SMALL_STATE(34)] = 471,
  [SMALL_STATE(35)] = 481,
  [SMALL_STATE(36)] = 491,
  [SMALL_STATE(37)] = 499,
  [SMALL_STATE(38)] = 509,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 523,
  [SMALL_STATE(41)] = 530,
  [SMALL_STATE(42)] = 537,
  [SMALL_STATE(43)] = 544,
  [SMALL_STATE(44)] = 549,
  [SMALL_STATE(45)] = 553,
  [SMALL_STATE(46)] = 557,
  [SMALL_STATE(47)] = 561,
  [SMALL_STATE(48)] = 565,
  [SMALL_STATE(49)] = 569,
  [SMALL_STATE(50)] = 573,
  [SMALL_STATE(51)] = 577,
  [SMALL_STATE(52)] = 581,
  [SMALL_STATE(53)] = 585,
  [SMALL_STATE(54)] = 589,
  [SMALL_STATE(55)] = 593,
  [SMALL_STATE(56)] = 597,
  [SMALL_STATE(57)] = 601,
  [SMALL_STATE(58)] = 605,
  [SMALL_STATE(59)] = 609,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_question, 5, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_characters, 3, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inputs, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
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
