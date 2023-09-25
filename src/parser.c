#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  aux_sym_link_text_token2 = 21,
  sym__space = 22,
  aux_sym__blank_token1 = 23,
  sym_source_file = 24,
  sym_wrap = 25,
  sym_nowrap = 26,
  sym_head_1 = 27,
  sym_head_1_text = 28,
  sym_head_2 = 29,
  sym_head_2_text = 30,
  sym_head_3 = 31,
  sym_head_3_text = 32,
  sym_pre = 33,
  sym_pre_start = 34,
  sym_pre_end = 35,
  sym_pre_body = 36,
  sym_item = 37,
  sym_item_text = 38,
  sym_quote = 39,
  sym_quote_text = 40,
  sym_link = 41,
  sym_url = 42,
  sym_url_intern = 43,
  sym_url_foreign = 44,
  sym_link_text = 45,
  sym_text = 46,
  aux_sym__blank = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_pre_body_repeat1 = 49,
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
  [aux_sym_link_text_token2] = "link_text_token2",
  [sym__space] = "_space",
  [aux_sym__blank_token1] = "_blank_token1",
  [sym_source_file] = "source_file",
  [sym_wrap] = "wrap",
  [sym_nowrap] = "nowrap",
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
  [aux_sym_link_text_token2] = aux_sym_link_text_token2,
  [sym__space] = sym__space,
  [aux_sym__blank_token1] = aux_sym__blank_token1,
  [sym_source_file] = sym_source_file,
  [sym_wrap] = sym_wrap,
  [sym_nowrap] = sym_nowrap,
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
  [aux_sym_link_text_token2] = {
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
  [sym_wrap] = {
    .visible = true,
    .named = true,
  },
  [sym_nowrap] = {
    .visible = true,
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
  [57] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '`') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 't') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == '`') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(37);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(38);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(72);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_head_1_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_head_1_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_head_2_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_head_3_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_pre_start_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_pre_body_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_pre_body_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_pre_body_token3);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_pre_body_token4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_item_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_quote_mark);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(17);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == ':') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_url_intern_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
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
      ACCEPT_TOKEN(aux_sym_url_foreign_token1);
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_url_foreign_token2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_url_foreign_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_url_foreign_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_link_date);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (lookahead == '`') ADVANCE(28);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_link_text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_link_text_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__blank_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 44},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 51},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 47},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 47},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 51},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 51},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 51},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 46},
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
    [sym_source_file] = STATE(53),
    [sym_wrap] = STATE(17),
    [sym_nowrap] = STATE(17),
    [sym_head_1] = STATE(47),
    [sym_head_2] = STATE(47),
    [sym_head_3] = STATE(47),
    [sym_pre] = STATE(27),
    [sym_pre_start] = STATE(46),
    [sym_item] = STATE(47),
    [sym_quote] = STATE(47),
    [sym_link] = STATE(47),
    [sym_text] = STATE(47),
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
  [0] = 15,
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
    STATE(27), 1,
      sym_pre,
    STATE(46), 1,
      sym_pre_start,
    STATE(39), 2,
      sym_wrap,
      sym_nowrap,
    STATE(47), 7,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [53] = 15,
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
    STATE(27), 1,
      sym_pre,
    STATE(46), 1,
      sym_pre_start,
    STATE(39), 2,
      sym_wrap,
      sym_nowrap,
    STATE(47), 7,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [106] = 15,
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
    STATE(27), 1,
      sym_pre,
    STATE(46), 1,
      sym_pre_start,
    STATE(39), 2,
      sym_wrap,
      sym_nowrap,
    STATE(47), 7,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [159] = 14,
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
    STATE(27), 1,
      sym_pre,
    STATE(46), 1,
      sym_pre_start,
    STATE(39), 2,
      sym_wrap,
      sym_nowrap,
    STATE(47), 7,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [209] = 14,
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
    STATE(27), 1,
      sym_pre,
    STATE(46), 1,
      sym_pre_start,
    STATE(18), 2,
      sym_wrap,
      sym_nowrap,
    STATE(47), 7,
      sym_head_1,
      sym_head_2,
      sym_head_3,
      sym_item,
      sym_quote,
      sym_link,
      sym_text,
  [259] = 4,
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
  [279] = 7,
    ACTIONS(38), 1,
      aux_sym_pre_start_token1,
    ACTIONS(42), 1,
      aux_sym__blank_token1,
    STATE(10), 1,
      aux_sym__blank,
    STATE(12), 1,
      aux_sym_pre_body_repeat1,
    STATE(43), 1,
      sym_pre_end,
    STATE(44), 1,
      sym_pre_body,
    ACTIONS(40), 4,
      aux_sym_pre_body_token1,
      aux_sym_pre_body_token2,
      aux_sym_pre_body_token3,
      aux_sym_pre_body_token4,
  [304] = 4,
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
  [323] = 3,
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
  [337] = 5,
    ACTIONS(50), 1,
      aux_sym_url_intern_token1,
    ACTIONS(52), 1,
      sym_url_extern,
    STATE(26), 1,
      sym_url,
    ACTIONS(54), 2,
      aux_sym_url_foreign_token1,
      aux_sym_url_foreign_token2,
    STATE(21), 2,
      sym_url_intern,
      sym_url_foreign,
  [355] = 3,
    ACTIONS(56), 1,
      aux_sym_pre_start_token1,
    STATE(13), 1,
      aux_sym_pre_body_repeat1,
    ACTIONS(58), 4,
      aux_sym_pre_body_token1,
      aux_sym_pre_body_token2,
      aux_sym_pre_body_token3,
      aux_sym_pre_body_token4,
  [368] = 3,
    ACTIONS(60), 1,
      aux_sym_pre_start_token1,
    STATE(13), 1,
      aux_sym_pre_body_repeat1,
    ACTIONS(62), 4,
      aux_sym_pre_body_token1,
      aux_sym_pre_body_token2,
      aux_sym_pre_body_token3,
      aux_sym_pre_body_token4,
  [381] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym__blank_token1,
    STATE(3), 1,
      aux_sym__blank,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [394] = 4,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      aux_sym__blank_token1,
    STATE(5), 1,
      aux_sym__blank,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [407] = 4,
    ACTIONS(72), 1,
      sym_link_date,
    ACTIONS(74), 1,
      aux_sym_link_text_token1,
    ACTIONS(76), 1,
      aux_sym_link_text_token2,
    STATE(24), 1,
      sym_link_text,
  [420] = 4,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      aux_sym__blank_token1,
    STATE(2), 1,
      aux_sym__blank,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
  [433] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      aux_sym__blank_token1,
    STATE(4), 1,
      aux_sym__blank,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
  [446] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      aux_sym__blank_token1,
    STATE(4), 1,
      aux_sym__blank,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [459] = 2,
    ACTIONS(86), 1,
      sym__space,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [467] = 2,
    ACTIONS(90), 1,
      sym__space,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [475] = 2,
    ACTIONS(94), 1,
      sym__space,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [483] = 2,
    ACTIONS(98), 1,
      sym__space,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [491] = 2,
    ACTIONS(102), 1,
      sym__space,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [499] = 3,
    ACTIONS(74), 1,
      aux_sym_link_text_token1,
    ACTIONS(76), 1,
      aux_sym_link_text_token2,
    STATE(48), 1,
      sym_link_text,
  [509] = 2,
    ACTIONS(106), 1,
      sym__space,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [517] = 1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [522] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [527] = 2,
    ACTIONS(112), 1,
      aux_sym_head_1_text_token1,
    STATE(38), 1,
      sym_head_2_text,
  [534] = 1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [539] = 2,
    ACTIONS(116), 1,
      aux_sym_head_1_text_token1,
    STATE(41), 1,
      sym_head_1_text,
  [546] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [551] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [556] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [561] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [566] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [571] = 1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [576] = 1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [581] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [586] = 1,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [591] = 1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [596] = 2,
    ACTIONS(136), 1,
      aux_sym_head_1_text_token1,
    STATE(36), 1,
      sym_head_3_text,
  [603] = 1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [608] = 2,
    ACTIONS(38), 1,
      aux_sym_pre_start_token1,
    STATE(50), 1,
      sym_pre_end,
  [615] = 1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [620] = 2,
    ACTIONS(142), 1,
      aux_sym__blank_token1,
    STATE(8), 1,
      aux_sym__blank,
  [627] = 1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [632] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [637] = 2,
    ACTIONS(148), 1,
      aux_sym_head_1_text_token1,
    STATE(34), 1,
      sym_item_text,
  [644] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym__blank_token1,
  [649] = 2,
    ACTIONS(152), 1,
      aux_sym_head_1_text_token1,
    STATE(32), 1,
      sym_quote_text,
  [656] = 1,
    ACTIONS(154), 1,
      aux_sym_head_1_text_token1,
  [660] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [664] = 1,
    ACTIONS(158), 1,
      aux_sym__blank_token1,
  [668] = 1,
    ACTIONS(160), 1,
      aux_sym_head_1_text_token1,
  [672] = 1,
    ACTIONS(162), 1,
      aux_sym_url_intern_token2,
  [676] = 1,
    ACTIONS(164), 1,
      aux_sym_url_foreign_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 209,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 279,
  [SMALL_STATE(9)] = 304,
  [SMALL_STATE(10)] = 323,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 368,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 394,
  [SMALL_STATE(16)] = 407,
  [SMALL_STATE(17)] = 420,
  [SMALL_STATE(18)] = 433,
  [SMALL_STATE(19)] = 446,
  [SMALL_STATE(20)] = 459,
  [SMALL_STATE(21)] = 467,
  [SMALL_STATE(22)] = 475,
  [SMALL_STATE(23)] = 483,
  [SMALL_STATE(24)] = 491,
  [SMALL_STATE(25)] = 499,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 517,
  [SMALL_STATE(28)] = 522,
  [SMALL_STATE(29)] = 527,
  [SMALL_STATE(30)] = 534,
  [SMALL_STATE(31)] = 539,
  [SMALL_STATE(32)] = 546,
  [SMALL_STATE(33)] = 551,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 561,
  [SMALL_STATE(36)] = 566,
  [SMALL_STATE(37)] = 571,
  [SMALL_STATE(38)] = 576,
  [SMALL_STATE(39)] = 581,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 591,
  [SMALL_STATE(42)] = 596,
  [SMALL_STATE(43)] = 603,
  [SMALL_STATE(44)] = 608,
  [SMALL_STATE(45)] = 615,
  [SMALL_STATE(46)] = 620,
  [SMALL_STATE(47)] = 627,
  [SMALL_STATE(48)] = 632,
  [SMALL_STATE(49)] = 637,
  [SMALL_STATE(50)] = 644,
  [SMALL_STATE(51)] = 649,
  [SMALL_STATE(52)] = 656,
  [SMALL_STATE(53)] = 660,
  [SMALL_STATE(54)] = 664,
  [SMALL_STATE(55)] = 668,
  [SMALL_STATE(56)] = 672,
  [SMALL_STATE(57)] = 676,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__blank, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__blank, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__blank, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__blank, 2), SHIFT_REPEAT(9),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__blank, 2), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_body, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pre_body_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pre_body_repeat1, 2), SHIFT_REPEAT(13),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_text, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_text, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_foreign, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_foreign, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_intern, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_intern, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nowrap, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_end, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_text, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_text, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_3, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_3_text, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_2, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_2_text, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_head_1_text, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wrap, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_start, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
