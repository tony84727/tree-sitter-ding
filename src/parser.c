#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_DOLLAR = 5,
  anon_sym_STAR = 6,
  sym_something = 7,
  sym_number = 8,
  sym__product_name = 9,
  sym_source_file = 10,
  sym_order_list = 11,
  sym_order = 12,
  sym_buyer_list = 13,
  sym_buyer_and_quantity = 14,
  sym_price = 15,
  sym_quantity = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_order_list_repeat1 = 18,
  aux_sym_buyer_list_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_STAR] = "*",
  [sym_something] = "something",
  [sym_number] = "number",
  [sym__product_name] = "_product_name",
  [sym_source_file] = "source_file",
  [sym_order_list] = "order_list",
  [sym_order] = "order",
  [sym_buyer_list] = "buyer_list",
  [sym_buyer_and_quantity] = "buyer_and_quantity",
  [sym_price] = "price",
  [sym_quantity] = "quantity",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_order_list_repeat1] = "order_list_repeat1",
  [aux_sym_buyer_list_repeat1] = "buyer_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_something] = sym_something,
  [sym_number] = sym_number,
  [sym__product_name] = sym__product_name,
  [sym_source_file] = sym_source_file,
  [sym_order_list] = sym_order_list,
  [sym_order] = sym_order,
  [sym_buyer_list] = sym_buyer_list,
  [sym_buyer_and_quantity] = sym_buyer_and_quantity,
  [sym_price] = sym_price,
  [sym_quantity] = sym_quantity,
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
  [anon_sym_COMMA] = {
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
  [sym__product_name] = {
    .visible = false,
    .named = true,
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
  field_description = 1,
  field_product = 2,
  field_total_quanltity = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_description] = "description",
  [field_product] = "product",
  [field_total_quanltity] = "total_quanltity",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_description, 0},
  [1] =
    {field_product, 1},
    {field_total_quanltity, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(17);
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
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_something);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_something);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_something);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__product_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__product_name);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(17);
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
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [sym_something] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      sym_price,
    STATE(2), 2,
      sym_order,
      aux_sym_order_list_repeat1,
  [14] = 4,
    ACTIONS(12), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      sym_price,
    STATE(27), 1,
      sym_order_list,
    STATE(4), 2,
      sym_order,
      aux_sym_order_list_repeat1,
  [28] = 4,
    ACTIONS(12), 1,
      anon_sym_DOLLAR,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_price,
    STATE(2), 2,
      sym_order,
      aux_sym_order_list_repeat1,
  [42] = 4,
    ACTIONS(12), 1,
      anon_sym_DOLLAR,
    STATE(22), 1,
      sym_price,
    STATE(25), 1,
      sym_order_list,
    STATE(4), 2,
      sym_order,
      aux_sym_order_list_repeat1,
  [56] = 3,
    ACTIONS(18), 1,
      anon_sym_STAR,
    STATE(17), 1,
      sym_quantity,
    ACTIONS(16), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [67] = 3,
    ACTIONS(20), 1,
      anon_sym_COMMA,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_buyer_list_repeat1,
  [77] = 3,
    ACTIONS(25), 1,
      aux_sym_source_file_token1,
    ACTIONS(27), 1,
      sym_something,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
  [87] = 3,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_buyer_list_repeat1,
  [97] = 3,
    ACTIONS(33), 1,
      aux_sym_source_file_token1,
    ACTIONS(35), 1,
      sym_something,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
  [107] = 3,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_buyer_list_repeat1,
  [117] = 1,
    ACTIONS(40), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [123] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [128] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [133] = 2,
    ACTIONS(46), 1,
      sym_something,
    STATE(21), 1,
      sym_buyer_and_quantity,
  [140] = 2,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_buyer_list,
  [147] = 1,
    ACTIONS(50), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [152] = 2,
    ACTIONS(46), 1,
      sym_something,
    STATE(9), 1,
      sym_buyer_and_quantity,
  [159] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
  [164] = 2,
    ACTIONS(18), 1,
      anon_sym_STAR,
    STATE(16), 1,
      sym_quantity,
  [171] = 1,
    ACTIONS(23), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [176] = 1,
    ACTIONS(54), 1,
      sym__product_name,
  [180] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [184] = 1,
    ACTIONS(58), 1,
      sym_number,
  [188] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [192] = 1,
    ACTIONS(62), 1,
      sym__product_name,
  [196] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [200] = 1,
    ACTIONS(66), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 77,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 97,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 117,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 128,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 147,
  [SMALL_STATE(18)] = 152,
  [SMALL_STATE(19)] = 159,
  [SMALL_STATE(20)] = 164,
  [SMALL_STATE(21)] = 171,
  [SMALL_STATE(22)] = 176,
  [SMALL_STATE(23)] = 180,
  [SMALL_STATE(24)] = 184,
  [SMALL_STATE(25)] = 188,
  [SMALL_STATE(26)] = 192,
  [SMALL_STATE(27)] = 196,
  [SMALL_STATE(28)] = 200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_list_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_list_repeat1, 2), SHIFT_REPEAT(28),
  [12] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_list, 1),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buyer_and_quantity, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_buyer_list_repeat1, 2), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_buyer_list_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buyer_list, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buyer_list, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buyer_and_quantity, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order, 4, .production_id = 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
