#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_head_1_mark = 1,
  aux_sym_head_1_text_token1 = 2,
  sym_head_2_mark = 3,
  sym_head_3_mark = 4,
  aux_sym_pre_start_token1 = 5,
  aux_sym_pre_body_token1 = 6,
  aux_sym_pre_body_token2 = 7,
  aux_sym_pre_body_token3 = 8,
  aux_sym_pre_body_token4 = 9,
  sym_item_mark = 10,
  sym_quote_mark = 11,
  aux_sym_link_token1 = 12,
  aux_sym_url_intern_token1 = 13,
  aux_sym_url_intern_token2 = 14,
  sym_url_extern = 15,
  aux_sym_url_foreign_token1 = 16,
  aux_sym_url_foreign_token2 = 17,
  aux_sym_url_foreign_token3 = 18,
  sym_link_date = 19,
  aux_sym_link_text_token1 = 20,
  sym__space = 21,
  aux_sym__blank_token1 = 22,
  sym_source_file = 23,
  sym__part = 24,
  sym_head_1 = 25,
  sym_head_1_text = 26,
  sym_head_2 = 27,
  sym_head_2_text = 28,
  sym_head_3 = 29,
  sym_head_3_text = 30,
  sym_pre = 31,
  sym_pre_start = 32,
  sym_pre_end = 33,
  sym_pre_body = 34,
  sym_item = 35,
  sym_item_text = 36,
  sym_quote = 37,
  sym_quote_text = 38,
  sym_link = 39,
  sym_url = 40,
  sym_url_intern = 41,
  sym_url_foreign = 42,
  sym_link_text = 43,
  sym_text = 44,
  aux_sym__blank = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_pre_body_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_head_1_mark] = "head_1_mark",
  [aux_sym_head_1_text_token1] = "head_1_text_token1",
  [sym_head_2_mark] = "head_2_mark",
  [sym_head_3_mark] = "head_3_mark",
  [aux_sym_pre_start_token1] = "pre_start_token1",
  [aux_sym_pre_body_token1] = "pre_body_token1",
  [aux_sym_pre_body_token2] = "pre_body_token2",
  [aux_sym_pre_body_token3] = "pre_body_token3",
  [aux_sym_pre_body_token4] = "pre_body_token4",
  [sym_item_mark] = "item_mark",
  [sym_quote_mark] = "quote_mark",
  [aux_sym_link_token1] = "link_token1",
  [aux_sym_url_intern_token1] = "url_intern_token1",
  [aux_sym_url_intern_token2] = "url_intern_token2",
  [sym_url_extern] = "url_extern",
  [aux_sym_url_foreign_token1] = "url_foreign_token1",
  [aux_sym_url_foreign_token2] = "url_foreign_token2",
  [aux_sym_url_foreign_token3] = "url_foreign_token3",
  [sym_link_date] = "link_date",
  [aux_sym_link_text_token1] = "link_text_token1",
  [sym__space] = "_space",
  [aux_sym__blank_token1] = "_blank_token1",
  [sym_source_file] = "source_file",
  [sym__part] = "_part",
  [sym_head_1] = "head_1",
  [sym_head_1_text] = "head_1_text",
  [sym_head_2] = "head_2",
  [sym_head_2_text] = "head_2_text",
  [sym_head_3] = "head_3",
  [sym_head_3_text] = "head_3_text",
  [sym_pre] = "pre",
  [sym_pre_start] = "pre_start",
  [sym_pre_end] = "pre_end",
  [sym_pre_body] = "pre_body",
  [sym_item] = "item",
  [sym_item_text] = "item_text",
  [sym_quote] = "quote",
  [sym_quote_text] = "quote_text",
  [sym_link] = "link",
  [sym_url] = "url",
  [sym_url_intern] = "url_intern",
  [sym_url_foreign] = "url_foreign",
  [sym_link_text] = "link_text",
  [sym_text] = "text",
  [aux_sym__blank] = "_blank",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_pre_body_repeat1] = "pre_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_head_1_mark] = sym_head_1_mark,
  [aux_sym_head_1_text_token1] = aux_sym_head_1_text_token1,
  [sym_head_2_mark] = sym_head_2_mark,
  [sym_head_3_mark] = sym_head_3_mark,
  [aux_sym_pre_start_token1] = aux_sym_pre_start_token1,
  [aux_sym_pre_body_token1] = aux_sym_pre_body_token1,
  [aux_sym_pre_body_token2] = aux_sym_pre_body_token2,
  [aux_sym_pre_body_token3] = aux_sym_pre_body_token3,
  [aux_sym_pre_body_token4] = aux_sym_pre_body_token4,
  [sym_item_mark] = sym_item_mark,
  [sym_quote_mark] = sym_quote_mark,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [aux_sym_url_intern_token1] = aux_sym_url_intern_token1,
  [aux_sym_url_intern_token2] = aux_sym_url_intern_token2,
  [sym_url_extern] = sym_url_extern,
  [aux_sym_url_foreign_token1] = aux_sym_url_foreign_token1,
  [aux_sym_url_foreign_token2] = aux_sym_url_foreign_token2,
  [aux_sym_url_foreign_token3] = aux_sym_url_foreign_token3,
  [sym_link_date] = sym_link_date,
  [aux_sym_link_text_token1] = aux_sym_link_text_token1,
  [sym__space] = sym__space,
  [aux_sym__blank_token1] = aux_sym__blank_token1,
  [sym_source_file] = sym_source_file,
  [sym__part] = sym__part,
  [sym_head_1] = sym_head_1,
  [sym_head_1_text] = sym_head_1_text,
  [sym_head_2] = sym_head_2,
  [sym_head_2_text] = sym_head_2_text,
  [sym_head_3] = sym_head_3,
  [sym_head_3_text] = sym_head_3_text,
  [sym_pre] = sym_pre,
  [sym_pre_start] = sym_pre_start,
  [sym_pre_end] = sym_pre_end,
  [sym_pre_body] = sym_pre_body,
  [sym_item] = sym_item,
  [sym_item_text] = sym_item_text,
  [sym_quote] = sym_quote,
  [sym_quote_text] = sym_quote_text,
  [sym_link] = sym_link,
  [sym_url] = sym_url,
  [sym_url_intern] = sym_url_intern,
  [sym_url_foreign] = sym_url_foreign,
  [sym_link_text] = sym_link_text,
  [sym_text] = sym_text,
  [aux_sym__blank] = aux_sym__blank,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_pre_body_repeat1] = aux_sym_pre_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_head_1_mark] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_head_1_text_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_pre_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pre_body_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pre_body_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pre_body_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_item_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_mark] = {
    .visible = true,
    .named = true,
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
  [aux_sym_url_foreign_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_foreign_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_foreign_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_link_date] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_link_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__blank_token1] = {
    .visible = false,
    .named = false,
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
  [sym_pre_start] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_end] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_body] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_item_text] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_text] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
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
  [sym_link_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__blank] = {
    .visible = false,
    .named = false,
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
  [9] = 7,
  [10] = 7,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 't') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == '`') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_head_1_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_head_1_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_head_2_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_head_3_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_pre_start_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_pre_body_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_pre_body_token2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_pre_body_token3);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_pre_body_token4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_item_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_quote_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(15);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_url_intern_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_url_extern);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_url_foreign_token1);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_url_foreign_token2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_url_foreign_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_url_foreign_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_link_date);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '`') ADVANCE(26);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__blank_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 42},
  [41] = {.lex_state = 38},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 42},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 42},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 42},
  [53] = {.lex_state = 42},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 36},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_head_1_mark] = ACTIONS(1),
    [aux_sym_pre_body_token4] = ACTIONS(1),
    [sym_item_mark] = ACTIONS(1),
    [sym_quote_mark] = ACTIONS(1),
    [aux_sym_url_intern_token1] = ACTIONS(1),
    [sym_url_extern] = ACTIONS(1),
    [aux_sym_url_foreign_token1] = ACTIONS(1),
    [aux_sym_url_foreign_token2] = ACTIONS(1),
    [aux_sym_link_text_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [aux_sym__blank_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym__part] = STATE(16),
    [sym_head_1] = STATE(16),
    [sym_head_2] = STATE(16),
    [sym_head_3] = STATE(16),
    [sym_pre] = STATE(16),
    [sym_pre_start] = STATE(43),
    [sym_item] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_link] = STATE(16),
    [sym_text] = STATE(16),
    [aux_sym__blank] = STATE(6),
    [sym_head_1_mark] = ACTIONS(3),
    [sym_head_2_mark] = ACTIONS(5),
    [sym_head_3_mark] = ACTIONS(7),
    [aux_sym_pre_start_token1] = ACTIONS(9),
    [sym_item_mark] = ACTIONS(11),
    [sym_quote_mark] = ACTIONS(13),
    [aux_sym_link_token1] = ACTIONS(15),
    [aux_sym_link_text_token1] = ACTIONS(17),
    [aux_sym__blank_token1] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_head_1_mark,
    ACTIONS(5), 1,
      sym_head_2_mark,
    ACTIONS(7), 1,
      sym_head_3_mark,
    ACTIONS(9), 1,
      aux_sym_pre_start_token1,
    ACTIONS(11), 1,
      sym_item_mark,
    ACTIONS(13), 1,
      sym_quote_mark,
    ACTIONS(15), 1,
      aux_sym_link_token1,
    ACTIONS(17), 1,
      aux_sym_link_text_token1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym__blank_token1,
    STATE(7), 1,
      aux_sym__blank,
    STATE(43), 1,
      sym_pre_start,
    STATE(37), 9,
      sym__part,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_pre,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [48] = 13,
    ACTIONS(3), 1,
      sym_head_1_mark,
    ACTIONS(5), 1,
      sym_head_2_mark,
    ACTIONS(7), 1,
      sym_head_3_mark,
    ACTIONS(9), 1,
      aux_sym_pre_start_token1,
    ACTIONS(11), 1,
      sym_item_mark,
    ACTIONS(13), 1,
      sym_quote_mark,
    ACTIONS(15), 1,
      aux_sym_link_token1,
    ACTIONS(17), 1,
      aux_sym_link_text_token1,
    ACTIONS(23), 1,
      aux_sym__blank_token1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym__blank,
    STATE(43), 1,
      sym_pre_start,
    STATE(37), 9,
      sym__part,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_pre,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [96] = 13,
    ACTIONS(3), 1,
      sym_head_1_mark,
    ACTIONS(5), 1,
      sym_head_2_mark,
    ACTIONS(7), 1,
      sym_head_3_mark,
    ACTIONS(9), 1,
      aux_sym_pre_start_token1,
    ACTIONS(11), 1,
      sym_item_mark,
    ACTIONS(13), 1,
      sym_quote_mark,
    ACTIONS(15), 1,
      aux_sym_link_token1,
    ACTIONS(17), 1,
      aux_sym_link_text_token1,
    ACTIONS(23), 1,
      aux_sym__blank_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym__blank,
    STATE(43), 1,
      sym_pre_start,
    STATE(37), 9,
      sym__part,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_pre,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [144] = 12,
    ACTIONS(3), 1,
      sym_head_1_mark,
    ACTIONS(5), 1,
      sym_head_2_mark,
    ACTIONS(7), 1,
      sym_head_3_mark,
    ACTIONS(9), 1,
      aux_sym_pre_start_token1,
    ACTIONS(11), 1,
      sym_item_mark,
    ACTIONS(13), 1,
      sym_quote_mark,
    ACTIONS(15), 1,
      aux_sym_link_token1,
    ACTIONS(17), 1,
      aux_sym_link_text_token1,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(9), 1,
      aux_sym__blank,
    STATE(43), 1,
      sym_pre_start,
    STATE(37), 9,
      sym__part,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_pre,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [189] = 12,
    ACTIONS(3), 1,
      sym_head_1_mark,
    ACTIONS(5), 1,
      sym_head_2_mark,
    ACTIONS(7), 1,
      sym_head_3_mark,
    ACTIONS(9), 1,
      aux_sym_pre_start_token1,
    ACTIONS(11), 1,
      sym_item_mark,
    ACTIONS(13), 1,
      sym_quote_mark,
    ACTIONS(15), 1,
      aux_sym_link_token1,
    ACTIONS(17), 1,
      aux_sym_link_text_token1,
    ACTIONS(29), 1,
      aux_sym__blank_token1,
    STATE(9), 1,
      aux_sym__blank,
    STATE(43), 1,
      sym_pre_start,
    STATE(15), 9,
      sym__part,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_pre,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [234] = 4,
    ACTIONS(33), 1,
      aux_sym_link_text_token1,
    ACTIONS(35), 1,
      aux_sym__blank_token1,
    STATE(7), 1,
      aux_sym__blank,
    ACTIONS(31), 8,
      ts_builtin_sym_end,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      sym_item_mark,
      sym_quote_mark,
      aux_sym_link_token1,
  [254] = 7,
    ACTIONS(38), 1,
      aux_sym_pre_start_token1,
    ACTIONS(42), 1,
      aux_sym__blank_token1,
    STATE(10), 1,
      aux_sym__blank,
    STATE(13), 1,
      aux_sym_pre_body_repeat1,
    STATE(41), 1,
      sym_pre_end,
    STATE(42), 1,
      sym_pre_body,
    ACTIONS(40), 4,
      aux_sym_pre_body_token1,
      aux_sym_pre_body_token2,
      aux_sym_pre_body_token3,
      aux_sym_pre_body_token4,
  [279] = 4,
    ACTIONS(33), 1,
      aux_sym_link_text_token1,
    ACTIONS(44), 1,
      aux_sym__blank_token1,
    STATE(9), 1,
      aux_sym__blank,
    ACTIONS(31), 7,
      sym_head_1_mark,
      sym_head_2_mark,
      sym_head_3_mark,
      aux_sym_pre_start_token1,
      sym_item_mark,
      sym_quote_mark,
      aux_sym_link_token1,
  [298] = 3,
    ACTIONS(47), 1,
      aux_sym__blank_token1,
    STATE(10), 1,
      aux_sym__blank,
    ACTIONS(31), 5,
      aux_sym_pre_start_token1,
      aux_sym_pre_body_token1,
      aux_sym_pre_body_token2,
      aux_sym_pre_body_token3,
      aux_sym_pre_body_token4,
  [312] = 5,
    ACTIONS(50), 1,
      aux_sym_url_intern_token1,
    ACTIONS(52), 1,
      sym_url_extern,
    STATE(24), 1,
      sym_url,
    ACTIONS(54), 2,
      aux_sym_url_foreign_token1,
      aux_sym_url_foreign_token2,
    STATE(23), 2,
      sym_url_intern,
      sym_url_foreign,
  [330] = 3,
    ACTIONS(56), 1,
      aux_sym_pre_start_token1,
    STATE(12), 1,
      aux_sym_pre_body_repeat1,
    ACTIONS(58), 4,
      aux_sym_pre_body_token1,
      aux_sym_pre_body_token2,
      aux_sym_pre_body_token3,
      aux_sym_pre_body_token4,
  [343] = 3,
    ACTIONS(61), 1,
      aux_sym_pre_start_token1,
    STATE(12), 1,
      aux_sym_pre_body_repeat1,
    ACTIONS(63), 4,
      aux_sym_pre_body_token1,
      aux_sym_pre_body_token2,
      aux_sym_pre_body_token3,
      aux_sym_pre_body_token4,
  [356] = 4,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym__blank_token1,
    STATE(5), 1,
      aux_sym__blank,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
  [369] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym__blank_token1,
    STATE(4), 1,
      aux_sym__blank,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
  [382] = 4,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      aux_sym__blank_token1,
    STATE(3), 1,
      aux_sym__blank,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
  [395] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym__blank_token1,
    STATE(4), 1,
      aux_sym__blank,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
  [408] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym__blank_token1,
    STATE(2), 1,
      aux_sym__blank,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
  [421] = 2,
    ACTIONS(80), 1,
      sym__space,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [429] = 3,
    ACTIONS(82), 1,
      sym_link_date,
    ACTIONS(84), 1,
      aux_sym_link_text_token1,
    STATE(47), 1,
      sym_link_text,
  [439] = 2,
    ACTIONS(88), 1,
      sym__space,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [447] = 2,
    ACTIONS(92), 1,
      sym__space,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [455] = 2,
    ACTIONS(96), 1,
      sym__space,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [463] = 2,
    ACTIONS(100), 1,
      sym__space,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [471] = 1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [476] = 1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [481] = 2,
    ACTIONS(106), 1,
      aux_sym_head_1_text_token1,
    STATE(36), 1,
      sym_head_2_text,
  [488] = 1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [493] = 2,
    ACTIONS(110), 1,
      aux_sym_head_1_text_token1,
    STATE(39), 1,
      sym_head_1_text,
  [500] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [505] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [510] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [515] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [520] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [525] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [530] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [535] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [540] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [545] = 1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [550] = 2,
    ACTIONS(130), 1,
      aux_sym_head_1_text_token1,
    STATE(34), 1,
      sym_head_3_text,
  [557] = 1,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [562] = 2,
    ACTIONS(38), 1,
      aux_sym_pre_start_token1,
    STATE(49), 1,
      sym_pre_end,
  [569] = 2,
    ACTIONS(134), 1,
      aux_sym__blank_token1,
    STATE(8), 1,
      aux_sym__blank,
  [576] = 1,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [581] = 1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [586] = 2,
    ACTIONS(140), 1,
      aux_sym_link_text_token1,
    STATE(44), 1,
      sym_link_text,
  [593] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [598] = 2,
    ACTIONS(142), 1,
      aux_sym_head_1_text_token1,
    STATE(30), 1,
      sym_quote_text,
  [605] = 1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [610] = 2,
    ACTIONS(146), 1,
      aux_sym_head_1_text_token1,
    STATE(32), 1,
      sym_item_text,
  [617] = 1,
    ACTIONS(148), 1,
      aux_sym__blank_token1,
  [621] = 1,
    ACTIONS(150), 1,
      aux_sym_head_1_text_token1,
  [625] = 1,
    ACTIONS(152), 1,
      aux_sym_head_1_text_token1,
  [629] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [633] = 1,
    ACTIONS(156), 1,
      aux_sym_url_intern_token2,
  [637] = 1,
    ACTIONS(158), 1,
      aux_sym_url_foreign_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 189,
  [SMALL_STATE(7)] = 234,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 343,
  [SMALL_STATE(14)] = 356,
  [SMALL_STATE(15)] = 369,
  [SMALL_STATE(16)] = 382,
  [SMALL_STATE(17)] = 395,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 421,
  [SMALL_STATE(20)] = 429,
  [SMALL_STATE(21)] = 439,
  [SMALL_STATE(22)] = 447,
  [SMALL_STATE(23)] = 455,
  [SMALL_STATE(24)] = 463,
  [SMALL_STATE(25)] = 471,
  [SMALL_STATE(26)] = 476,
  [SMALL_STATE(27)] = 481,
  [SMALL_STATE(28)] = 488,
  [SMALL_STATE(29)] = 493,
  [SMALL_STATE(30)] = 500,
  [SMALL_STATE(31)] = 505,
  [SMALL_STATE(32)] = 510,
  [SMALL_STATE(33)] = 515,
  [SMALL_STATE(34)] = 520,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 530,
  [SMALL_STATE(37)] = 535,
  [SMALL_STATE(38)] = 540,
  [SMALL_STATE(39)] = 545,
  [SMALL_STATE(40)] = 550,
  [SMALL_STATE(41)] = 557,
  [SMALL_STATE(42)] = 562,
  [SMALL_STATE(43)] = 569,
  [SMALL_STATE(44)] = 576,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 586,
  [SMALL_STATE(47)] = 593,
  [SMALL_STATE(48)] = 598,
  [SMALL_STATE(49)] = 605,
  [SMALL_STATE(50)] = 610,
  [SMALL_STATE(51)] = 617,
  [SMALL_STATE(52)] = 621,
  [SMALL_STATE(53)] = 625,
  [SMALL_STATE(54)] = 629,
  [SMALL_STATE(55)] = 633,
  [SMALL_STATE(56)] = 637,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__blank, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__blank, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__blank, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__blank, 2), SHIFT_REPEAT(9),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__blank, 2), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pre_body_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pre_body_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_body, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_foreign, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_foreign, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_intern, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_intern, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_1_text, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_end, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_text, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_text, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_3, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_3_text, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_2, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_2_text, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_1, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_text, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_start, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
