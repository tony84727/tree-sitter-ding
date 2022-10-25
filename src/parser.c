#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_DOLLAR = 4,
  anon_sym_STAR = 5,
  sym_something = 6,
  sym_number = 7,
  sym_text = 8,
  sym__newline = 9,
  anon_sym_COMMA = 10,
  anon_sym_ = 11,
  sym_source_file = 12,
  sym_order_list = 13,
  sym_order = 14,
  sym_buyer_list = 15,
  sym_buyer_and_quantity = 16,
  sym_price = 17,
  sym_quantity = 18,
  sym__sep = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_order_list_repeat1 = 21,
  aux_sym_buyer_list_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_STAR] = "*",
  [sym_something] = "something",
  [sym_number] = "number",
  [sym_text] = "text",
  [sym__newline] = "_newline",
  [anon_sym_COMMA] = ",",
  [anon_sym_] = "、",
  [sym_source_file] = "source_file",
  [sym_order_list] = "order_list",
  [sym_order] = "order",
  [sym_buyer_list] = "buyer_list",
  [sym_buyer_and_quantity] = "buyer_and_quantity",
  [sym_price] = "price",
  [sym_quantity] = "quantity",
  [sym__sep] = "_sep",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_order_list_repeat1] = "order_list_repeat1",
  [aux_sym_buyer_list_repeat1] = "buyer_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_something] = sym_something,
  [sym_number] = sym_number,
  [sym_text] = sym_text,
  [sym__newline] = sym__newline,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_] = anon_sym_,
  [sym_source_file] = sym_source_file,
  [sym_order_list] = sym_order_list,
  [sym_order] = sym_order,
  [sym_buyer_list] = sym_buyer_list,
  [sym_buyer_and_quantity] = sym_buyer_and_quantity,
  [sym_price] = sym_price,
  [sym_quantity] = sym_quantity,
  [sym__sep] = sym__sep,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_order_list_repeat1] = aux_sym_order_list_repeat1,
  [aux_sym_buyer_list_repeat1] = aux_sym_buyer_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_something] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_order_list] = {
    .visible = true,
    .named = true,
  },
  [sym_order] = {
    .visible = true,
    .named = true,
  },
  [sym_buyer_list] = {
    .visible = true,
    .named = true,
  },
  [sym_buyer_and_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym__sep] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_buyer_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_buyer_name = 1,
  field_buyers = 2,
  field_description = 3,
  field_price = 4,
  field_product = 5,
  field_quantity = 6,
  field_total_quantity = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_buyer_name] = "buyer_name",
  [field_buyers] = "buyers",
  [field_description] = "description",
  [field_price] = "price",
  [field_product] = "product",
  [field_quantity] = "quantity",
  [field_total_quantity] = "total_quantity",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 1},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_description, 0},
  [1] =
    {field_description, 0},
    {field_description, 1},
  [3] =
    {field_buyers, 3},
    {field_price, 0},
    {field_product, 1},
    {field_total_quantity, 2},
  [7] =
    {field_buyer_name, 0},
  [8] =
    {field_buyer_name, 0},
    {field_quantity, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 12289) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(16);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_something);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_something);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_something);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_something] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_buyer_list_repeat1,
    STATE(22), 1,
      sym__sep,
    ACTIONS(7), 2,
      anon_sym_COMMA,
      anon_sym_,
  [14] = 4,
    ACTIONS(10), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_buyer_list_repeat1,
    STATE(22), 1,
      sym__sep,
    ACTIONS(12), 2,
      anon_sym_COMMA,
      anon_sym_,
  [28] = 4,
    ACTIONS(14), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_buyer_list_repeat1,
    STATE(22), 1,
      sym__sep,
    ACTIONS(12), 2,
      anon_sym_COMMA,
      anon_sym_,
  [42] = 3,
    ACTIONS(18), 1,
      anon_sym_STAR,
    STATE(11), 1,
      sym_quantity,
    ACTIONS(16), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_,
  [54] = 1,
    ACTIONS(20), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_,
  [61] = 4,
    ACTIONS(22), 1,
      anon_sym_DOLLAR,
    STATE(9), 1,
      sym_order,
    STATE(36), 1,
      sym_price,
    STATE(37), 1,
      sym_order_list,
  [74] = 4,
    ACTIONS(22), 1,
      anon_sym_DOLLAR,
    STATE(9), 1,
      sym_order,
    STATE(34), 1,
      sym_order_list,
    STATE(36), 1,
      sym_price,
  [87] = 3,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_order_list_repeat1,
  [97] = 1,
    ACTIONS(5), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_,
  [103] = 1,
    ACTIONS(28), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_,
  [109] = 3,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_order_list_repeat1,
  [119] = 3,
    ACTIONS(26), 1,
      sym__newline,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_order_list_repeat1,
  [129] = 3,
    ACTIONS(22), 1,
      anon_sym_DOLLAR,
    STATE(23), 1,
      sym_order,
    STATE(36), 1,
      sym_price,
  [139] = 2,
    ACTIONS(37), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [146] = 2,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_buyer_list,
  [153] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym__newline,
  [158] = 2,
    ACTIONS(44), 1,
      aux_sym_source_file_token1,
    ACTIONS(46), 1,
      sym_something,
  [165] = 2,
    ACTIONS(48), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [172] = 2,
    ACTIONS(50), 1,
      sym__newline,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
  [179] = 2,
    ACTIONS(18), 1,
      anon_sym_STAR,
    STATE(16), 1,
      sym_quantity,
  [186] = 2,
    ACTIONS(52), 1,
      sym_text,
    STATE(10), 1,
      sym_buyer_and_quantity,
  [193] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym__newline,
  [198] = 1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym__newline,
  [203] = 2,
    ACTIONS(46), 1,
      sym_something,
    ACTIONS(56), 1,
      aux_sym_source_file_token1,
  [210] = 1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym__newline,
  [215] = 2,
    ACTIONS(52), 1,
      sym_text,
    STATE(4), 1,
      sym_buyer_and_quantity,
  [222] = 1,
    ACTIONS(60), 1,
      sym__newline,
  [226] = 1,
    ACTIONS(62), 1,
      sym_number,
  [230] = 1,
    ACTIONS(64), 1,
      sym_number,
  [234] = 1,
    ACTIONS(66), 1,
      sym__newline,
  [238] = 1,
    ACTIONS(68), 1,
      sym__newline,
  [242] = 1,
    ACTIONS(70), 1,
      sym_something,
  [246] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [250] = 1,
    ACTIONS(74), 1,
      sym_text,
  [254] = 1,
    ACTIONS(76), 1,
      sym_text,
  [258] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [262] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 74,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 97,
  [SMALL_STATE(11)] = 103,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 139,
  [SMALL_STATE(16)] = 146,
  [SMALL_STATE(17)] = 153,
  [SMALL_STATE(18)] = 158,
  [SMALL_STATE(19)] = 165,
  [SMALL_STATE(20)] = 172,
  [SMALL_STATE(21)] = 179,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 193,
  [SMALL_STATE(24)] = 198,
  [SMALL_STATE(25)] = 203,
  [SMALL_STATE(26)] = 210,
  [SMALL_STATE(27)] = 215,
  [SMALL_STATE(28)] = 222,
  [SMALL_STATE(29)] = 226,
  [SMALL_STATE(30)] = 230,
  [SMALL_STATE(31)] = 234,
  [SMALL_STATE(32)] = 238,
  [SMALL_STATE(33)] = 242,
  [SMALL_STATE(34)] = 246,
  [SMALL_STATE(35)] = 250,
  [SMALL_STATE(36)] = 254,
  [SMALL_STATE(37)] = 258,
  [SMALL_STATE(38)] = 262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_buyer_list_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_buyer_list_repeat1, 2), SHIFT_REPEAT(22),
  [10] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buyer_and_quantity, 1, .production_id = 4),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_list, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buyer_and_quantity, 2, .production_id = 5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_list_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_list_repeat1, 2), SHIFT_REPEAT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_list, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buyer_list, 4),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buyer_list, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 4, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ding(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
