#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__part_token1 = 1,
  sym_head_1_mark = 2,
  sym_head_2_mark = 3,
  sym_head_3_mark = 4,
  aux_sym_pre_start_token1 = 5,
  aux_sym__pre_line_token1 = 6,
  aux_sym__pre_line_token2 = 7,
  aux_sym__pre_line_token3 = 8,
  anon_sym_STAR = 9,
  aux_sym_item_token1 = 10,
  anon_sym_GT = 11,
  aux_sym_link_token1 = 12,
  aux_sym_url_intern_token1 = 13,
  aux_sym_url_intern_token2 = 14,
  sym_url_extern = 15,
  anon_sym_mailto_COLON = 16,
  aux_sym_url_foreign_token1 = 17,
  aux_sym__date_token1 = 18,
  sym_date = 19,
  aux_sym_description_token1 = 20,
  sym__text = 21,
  sym_source_file = 22,
  sym__part = 23,
  sym_head_1 = 24,
  sym_head_1_text = 25,
  sym_head_2 = 26,
  sym_head_2_text = 27,
  sym_head_3 = 28,
  sym_head_3_text = 29,
  sym_pre = 30,
  sym_pre_body = 31,
  sym_pre_start = 32,
  sym_pre_end = 33,
  sym__pre_line = 34,
  sym_item = 35,
  sym_quote = 36,
  sym_link = 37,
  sym__url = 38,
  sym_url_intern = 39,
  sym_url_foreign = 40,
  sym__date = 41,
  sym__description = 42,
  sym_description = 43,
  sym_text = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_pre_body_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__part_token1] = "_part_token1",
  [sym_head_1_mark] = "head_1_mark",
  [sym_head_2_mark] = "head_2_mark",
  [sym_head_3_mark] = "head_3_mark",
  [aux_sym_pre_start_token1] = "pre_start_token1",
  [aux_sym__pre_line_token1] = "_pre_line_token1",
  [aux_sym__pre_line_token2] = "_pre_line_token2",
  [aux_sym__pre_line_token3] = "_pre_line_token3",
  [anon_sym_STAR] = "* ",
  [aux_sym_item_token1] = "item_token1",
  [anon_sym_GT] = "> ",
  [aux_sym_link_token1] = "link_token1",
  [aux_sym_url_intern_token1] = "url_intern_token1",
  [aux_sym_url_intern_token2] = "url_intern_token2",
  [sym_url_extern] = "url_extern",
  [anon_sym_mailto_COLON] = "mailto:",
  [aux_sym_url_foreign_token1] = "url_foreign_token1",
  [aux_sym__date_token1] = "_date_token1",
  [sym_date] = "date",
  [aux_sym_description_token1] = "description_token1",
  [sym__text] = "_text",
  [sym_source_file] = "source_file",
  [sym__part] = "_part",
  [sym_head_1] = "head_1",
  [sym_head_1_text] = "head_1_text",
  [sym_head_2] = "head_2",
  [sym_head_2_text] = "head_2_text",
  [sym_head_3] = "head_3",
  [sym_head_3_text] = "head_3_text",
  [sym_pre] = "pre",
  [sym_pre_body] = "pre_body",
  [sym_pre_start] = "pre_start",
  [sym_pre_end] = "pre_end",
  [sym__pre_line] = "_pre_line",
  [sym_item] = "item",
  [sym_quote] = "quote",
  [sym_link] = "link",
  [sym__url] = "_url",
  [sym_url_intern] = "url_intern",
  [sym_url_foreign] = "url_foreign",
  [sym__date] = "_date",
  [sym__description] = "_description",
  [sym_description] = "description",
  [sym_text] = "text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_pre_body_repeat1] = "pre_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__part_token1] = aux_sym__part_token1,
  [sym_head_1_mark] = sym_head_1_mark,
  [sym_head_2_mark] = sym_head_2_mark,
  [sym_head_3_mark] = sym_head_3_mark,
  [aux_sym_pre_start_token1] = aux_sym_pre_start_token1,
  [aux_sym__pre_line_token1] = aux_sym__pre_line_token1,
  [aux_sym__pre_line_token2] = aux_sym__pre_line_token2,
  [aux_sym__pre_line_token3] = aux_sym__pre_line_token3,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_item_token1] = aux_sym_item_token1,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [aux_sym_url_intern_token1] = aux_sym_url_intern_token1,
  [aux_sym_url_intern_token2] = aux_sym_url_intern_token2,
  [sym_url_extern] = sym_url_extern,
  [anon_sym_mailto_COLON] = anon_sym_mailto_COLON,
  [aux_sym_url_foreign_token1] = aux_sym_url_foreign_token1,
  [aux_sym__date_token1] = aux_sym__date_token1,
  [sym_date] = sym_date,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [sym__text] = sym__text,
  [sym_source_file] = sym_source_file,
  [sym__part] = sym__part,
  [sym_head_1] = sym_head_1,
  [sym_head_1_text] = sym_head_1_text,
  [sym_head_2] = sym_head_2,
  [sym_head_2_text] = sym_head_2_text,
  [sym_head_3] = sym_head_3,
  [sym_head_3_text] = sym_head_3_text,
  [sym_pre] = sym_pre,
  [sym_pre_body] = sym_pre_body,
  [sym_pre_start] = sym_pre_start,
  [sym_pre_end] = sym_pre_end,
  [sym__pre_line] = sym__pre_line,
  [sym_item] = sym_item,
  [sym_quote] = sym_quote,
  [sym_link] = sym_link,
  [sym__url] = sym__url,
  [sym_url_intern] = sym_url_intern,
  [sym_url_foreign] = sym_url_foreign,
  [sym__date] = sym__date,
  [sym__description] = sym__description,
  [sym_description] = sym_description,
  [sym_text] = sym_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_pre_body_repeat1] = aux_sym_pre_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__part_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_head_1_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_head_2_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_head_3_mark] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pre_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pre_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pre_line_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pre_line_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_intern_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_intern_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_url_extern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mailto_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_url_foreign_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__date_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_description_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__part] = {
    .visible = false,
    .named = true,
  },
  [sym_head_1] = {
    .visible = true,
    .named = true,
  },
  [sym_head_1_text] = {
    .visible = true,
    .named = true,
  },
  [sym_head_2] = {
    .visible = true,
    .named = true,
  },
  [sym_head_2_text] = {
    .visible = true,
    .named = true,
  },
  [sym_head_3] = {
    .visible = true,
    .named = true,
  },
  [sym_head_3_text] = {
    .visible = true,
    .named = true,
  },
  [sym_pre] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_body] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_start] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_end] = {
    .visible = true,
    .named = true,
  },
  [sym__pre_line] = {
    .visible = false,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym__url] = {
    .visible = false,
    .named = true,
  },
  [sym_url_intern] = {
    .visible = true,
    .named = true,
  },
  [sym_url_foreign] = {
    .visible = true,
    .named = true,
  },
  [sym__date] = {
    .visible = false,
    .named = true,
  },
  [sym__description] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pre_body_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '`') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '`') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '`') ADVANCE(52);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 't') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == '`') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '`') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == '`') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__part_token1);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__part_token1);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_head_1_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_head_2_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_head_3_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_pre_start_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_pre_start_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__pre_line_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__pre_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(6);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__pre_line_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__pre_line_token3);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(19);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_url_intern_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_url_extern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_mailto_COLON);
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_url_foreign_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__date_token1);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '`') ADVANCE(31);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 44},
  [2] = {.lex_state = 44},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 44},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 44},
  [20] = {.lex_state = 44},
  [21] = {.lex_state = 44},
  [22] = {.lex_state = 44},
  [23] = {.lex_state = 44},
  [24] = {.lex_state = 44},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 59},
  [38] = {.lex_state = 59},
  [39] = {.lex_state = 59},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_url_intern_token1] = ACTIONS(1),
    [sym_url_extern] = ACTIONS(1),
    [anon_sym_mailto_COLON] = ACTIONS(1),
    [aux_sym_url_foreign_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym__part] = STATE(2),
    [sym_head_1] = STATE(2),
    [sym_head_2] = STATE(2),
    [sym_head_3] = STATE(2),
    [sym_pre] = STATE(2),
    [sym_pre_start] = STATE(25),
    [sym_item] = STATE(2),
    [sym_quote] = STATE(2),
    [sym_link] = STATE(2),
    [sym_text] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__part_token1] = ACTIONS(5),
    [sym_head_1_mark] = ACTIONS(7),
    [sym_head_2_mark] = ACTIONS(9),
    [sym_head_3_mark] = ACTIONS(11),
    [aux_sym_pre_start_token1] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [aux_sym_link_token1] = ACTIONS(19),
    [aux_sym_description_token1] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      sym_head_1_mark,
    ACTIONS(9), 1,
      sym_head_2_mark,
    ACTIONS(11), 1,
      sym_head_3_mark,
    ACTIONS(13), 1,
      aux_sym_pre_start_token1,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_GT,
    ACTIONS(19), 1,
      aux_sym_link_token1,
    ACTIONS(21), 1,
      aux_sym_description_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym__part_token1,
    STATE(25), 1,
      sym_pre_start,
    STATE(3), 10,
      sym__part,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_pre,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
      aux_sym_source_file_repeat1,
  [46] = 12,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym__part_token1,
    ACTIONS(32), 1,
      sym_head_1_mark,
    ACTIONS(35), 1,
      sym_head_2_mark,
    ACTIONS(38), 1,
      sym_head_3_mark,
    ACTIONS(41), 1,
      aux_sym_pre_start_token1,
    ACTIONS(44), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_GT,
    ACTIONS(50), 1,
      aux_sym_link_token1,
    ACTIONS(53), 1,
      aux_sym_description_token1,
    STATE(25), 1,
      sym_pre_start,
    STATE(3), 10,
      sym__part,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_pre,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
      aux_sym_source_file_repeat1,
  [92] = 5,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym__date_token1,
    STATE(5), 1,
      sym__date,
    STATE(10), 1,
      sym__description,
    ACTIONS(58), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [116] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      aux_sym__date_token1,
    STATE(12), 1,
      sym__description,
    ACTIONS(64), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [137] = 2,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 10,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym__date_token1,
      aux_sym_description_token1,
  [153] = 2,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 10,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym__date_token1,
      aux_sym_description_token1,
  [169] = 2,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 10,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym__date_token1,
      aux_sym_description_token1,
  [185] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [200] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [215] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [230] = 2,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [245] = 2,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [260] = 2,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [275] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [290] = 2,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [305] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [320] = 2,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [335] = 2,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [350] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [365] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [380] = 2,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [395] = 2,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [410] = 2,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 9,
      aux_sym__part_token1,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      anon_sym_STAR,
      anon_sym_GT,
      aux_sym_link_token1,
      aux_sym_description_token1,
  [425] = 6,
    ACTIONS(140), 1,
      aux_sym_pre_start_token1,
    ACTIONS(142), 1,
      aux_sym__pre_line_token1,
    STATE(22), 1,
      sym_pre_end,
    STATE(31), 1,
      sym_pre_body,
    ACTIONS(144), 2,
      aux_sym__pre_line_token2,
      aux_sym__pre_line_token3,
    STATE(27), 2,
      sym__pre_line,
      aux_sym_pre_body_repeat1,
  [446] = 4,
    ACTIONS(146), 1,
      aux_sym_url_intern_token1,
    ACTIONS(148), 1,
      sym_url_extern,
    ACTIONS(150), 2,
      anon_sym_mailto_COLON,
      aux_sym_url_foreign_token1,
    STATE(4), 3,
      sym__url,
      sym_url_intern,
      sym_url_foreign,
  [462] = 4,
    ACTIONS(152), 1,
      aux_sym_pre_start_token1,
    ACTIONS(154), 1,
      aux_sym__pre_line_token1,
    ACTIONS(156), 2,
      aux_sym__pre_line_token2,
      aux_sym__pre_line_token3,
    STATE(28), 2,
      sym__pre_line,
      aux_sym_pre_body_repeat1,
  [477] = 4,
    ACTIONS(158), 1,
      aux_sym_pre_start_token1,
    ACTIONS(160), 1,
      aux_sym__pre_line_token1,
    ACTIONS(163), 2,
      aux_sym__pre_line_token2,
      aux_sym__pre_line_token3,
    STATE(28), 2,
      sym__pre_line,
      aux_sym_pre_body_repeat1,
  [492] = 2,
    ACTIONS(168), 1,
      aux_sym__pre_line_token1,
    ACTIONS(166), 3,
      aux_sym_pre_start_token1,
      aux_sym__pre_line_token2,
      aux_sym__pre_line_token3,
  [501] = 3,
    ACTIONS(170), 1,
      sym_date,
    ACTIONS(172), 1,
      aux_sym_description_token1,
    STATE(20), 1,
      sym_description,
  [511] = 2,
    ACTIONS(174), 1,
      aux_sym_pre_start_token1,
    STATE(21), 1,
      sym_pre_end,
  [518] = 2,
    ACTIONS(176), 1,
      sym__text,
    STATE(18), 1,
      sym_head_3_text,
  [525] = 2,
    ACTIONS(178), 1,
      sym__text,
    STATE(16), 1,
      sym_head_2_text,
  [532] = 2,
    ACTIONS(180), 1,
      sym__text,
    STATE(14), 1,
      sym_head_1_text,
  [539] = 2,
    ACTIONS(182), 1,
      aux_sym_description_token1,
    STATE(20), 1,
      sym_description,
  [546] = 1,
    ACTIONS(184), 1,
      aux_sym_url_intern_token2,
  [550] = 1,
    ACTIONS(186), 1,
      aux_sym_item_token1,
  [554] = 1,
    ACTIONS(188), 1,
      aux_sym_item_token1,
  [558] = 1,
    ACTIONS(190), 1,
      aux_sym_item_token1,
  [562] = 1,
    ACTIONS(192), 1,
      aux_sym_url_intern_token2,
  [566] = 1,
    ACTIONS(194), 1,
      aux_sym_item_token1,
  [570] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 169,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 200,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 275,
  [SMALL_STATE(16)] = 290,
  [SMALL_STATE(17)] = 305,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 335,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 365,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 425,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 462,
  [SMALL_STATE(28)] = 477,
  [SMALL_STATE(29)] = 492,
  [SMALL_STATE(30)] = 501,
  [SMALL_STATE(31)] = 511,
  [SMALL_STATE(32)] = 518,
  [SMALL_STATE(33)] = 525,
  [SMALL_STATE(34)] = 532,
  [SMALL_STATE(35)] = 539,
  [SMALL_STATE(36)] = 546,
  [SMALL_STATE(37)] = 550,
  [SMALL_STATE(38)] = 554,
  [SMALL_STATE(39)] = 558,
  [SMALL_STATE(40)] = 562,
  [SMALL_STATE(41)] = 566,
  [SMALL_STATE(42)] = 570,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_foreign, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_foreign, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_intern, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_intern, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_1_text, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_head_1_text, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_head_1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_2_text, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_head_2_text, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_2, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_head_2, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_3_text, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_head_3_text, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_3, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_head_3, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__description, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__description, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_end, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_end, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_body, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pre_body_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pre_body_repeat1, 2), SHIFT_REPEAT(28),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pre_body_repeat1, 2), SHIFT_REPEAT(28),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_start, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_start, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gemtext(void) {
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
