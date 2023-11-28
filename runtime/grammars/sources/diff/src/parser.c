#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_source_token1 = 1,
  anon_sym_diff = 2,
  anon_sym_DASH_DASHgit = 3,
  aux_sym_file_change_token1 = 4,
  anon_sym_file = 5,
  anon_sym_mode = 6,
  anon_sym_from = 7,
  anon_sym_to = 8,
  anon_sym_Binary = 9,
  anon_sym_files = 10,
  anon_sym_and = 11,
  anon_sym_differ = 12,
  anon_sym_index = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_similarity = 15,
  anon_sym_index2 = 16,
  aux_sym_similarity_token1 = 17,
  anon_sym_PERCENT = 18,
  anon_sym_DASH_DASH_DASH = 19,
  anon_sym_PLUS_PLUS_PLUS = 20,
  anon_sym_AT_AT = 21,
  anon_sym_AT_AT2 = 22,
  aux_sym_location_token1 = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_DASH_DASH = 26,
  sym_context = 27,
  sym_linerange = 28,
  aux_sym_filename_token1 = 29,
  sym_commit = 30,
  sym_source = 31,
  sym__line = 32,
  sym_command = 33,
  sym_file_change = 34,
  sym_binary_change = 35,
  sym_index = 36,
  sym_similarity = 37,
  sym_old_file = 38,
  sym_new_file = 39,
  sym_location = 40,
  sym_addition = 41,
  sym_deletion = 42,
  sym_filename = 43,
  sym_mode = 44,
  aux_sym_source_repeat1 = 45,
  aux_sym_filename_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_diff] = "diff",
  [anon_sym_DASH_DASHgit] = "--git",
  [aux_sym_file_change_token1] = "file_change_token1",
  [anon_sym_file] = "file",
  [anon_sym_mode] = "mode",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_Binary] = "Binary",
  [anon_sym_files] = "files",
  [anon_sym_and] = "and",
  [anon_sym_differ] = "differ",
  [anon_sym_index] = "index",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_similarity] = "similarity",
  [anon_sym_index2] = "index",
  [aux_sym_similarity_token1] = "similarity_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_AT2] = "@@",
  [aux_sym_location_token1] = "location_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [sym_context] = "context",
  [sym_linerange] = "linerange",
  [aux_sym_filename_token1] = "filename_token1",
  [sym_commit] = "commit",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_command] = "command",
  [sym_file_change] = "file_change",
  [sym_binary_change] = "binary_change",
  [sym_index] = "index",
  [sym_similarity] = "similarity",
  [sym_old_file] = "old_file",
  [sym_new_file] = "new_file",
  [sym_location] = "location",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [sym_filename] = "filename",
  [sym_mode] = "mode",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_diff] = anon_sym_diff,
  [anon_sym_DASH_DASHgit] = anon_sym_DASH_DASHgit,
  [aux_sym_file_change_token1] = aux_sym_file_change_token1,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_Binary] = anon_sym_Binary,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_differ] = anon_sym_differ,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_similarity] = anon_sym_similarity,
  [anon_sym_index2] = anon_sym_index,
  [aux_sym_similarity_token1] = aux_sym_similarity_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT_AT2] = anon_sym_AT_AT,
  [aux_sym_location_token1] = aux_sym_location_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_context] = sym_context,
  [sym_linerange] = sym_linerange,
  [aux_sym_filename_token1] = aux_sym_filename_token1,
  [sym_commit] = sym_commit,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_command] = sym_command,
  [sym_file_change] = sym_file_change,
  [sym_binary_change] = sym_binary_change,
  [sym_index] = sym_index,
  [sym_similarity] = sym_similarity,
  [sym_old_file] = sym_old_file,
  [sym_new_file] = sym_new_file,
  [sym_location] = sym_location,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [sym_filename] = sym_filename,
  [sym_mode] = sym_mode,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHgit] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_change_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_differ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_similarity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_similarity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_location_token1] = {
    .visible = false,
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
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_linerange] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filename_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_commit] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_file_change] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_change] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_similarity] = {
    .visible = true,
    .named = true,
  },
  [sym_old_file] = {
    .visible = true,
    .named = true,
  },
  [sym_new_file] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_score = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_score] = "score",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_score, 2},
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
  [12] = 6,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 5,
  [17] = 17,
  [18] = 18,
  [19] = 6,
  [20] = 5,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '+') ADVANCE(155);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(150);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(152);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(208);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(208);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 't') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 83:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 't') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 84:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(156);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == 's') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 85:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(85)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 84},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 85},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 83},
  [8] = {.lex_state = 86},
  [9] = {.lex_state = 85},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 86},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 85},
  [14] = {.lex_state = 85},
  [15] = {.lex_state = 85},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 85},
  [18] = {.lex_state = 85},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 83},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 83},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 83},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 83},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 32},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 83},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 83},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 83},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [aux_sym_file_change_token1] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_Binary] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_differ] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_similarity] = ACTIONS(1),
    [anon_sym_index2] = ACTIONS(1),
    [aux_sym_similarity_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(44),
    [sym__line] = STATE(34),
    [sym_command] = STATE(34),
    [sym_file_change] = STATE(34),
    [sym_binary_change] = STATE(34),
    [sym_index] = STATE(34),
    [sym_similarity] = STATE(34),
    [sym_old_file] = STATE(34),
    [sym_new_file] = STATE(34),
    [sym_location] = STATE(34),
    [sym_addition] = STATE(34),
    [sym_deletion] = STATE(34),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DASH_DASH] = ACTIONS(25),
    [sym_context] = ACTIONS(27),
  },
  [2] = {
    [sym__line] = STATE(38),
    [sym_command] = STATE(38),
    [sym_file_change] = STATE(38),
    [sym_binary_change] = STATE(38),
    [sym_index] = STATE(38),
    [sym_similarity] = STATE(38),
    [sym_old_file] = STATE(38),
    [sym_new_file] = STATE(38),
    [sym_location] = STATE(38),
    [sym_addition] = STATE(38),
    [sym_deletion] = STATE(38),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_source_token1] = ACTIONS(31),
    [anon_sym_diff] = ACTIONS(34),
    [aux_sym_file_change_token1] = ACTIONS(37),
    [anon_sym_Binary] = ACTIONS(40),
    [anon_sym_index] = ACTIONS(43),
    [anon_sym_similarity] = ACTIONS(46),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(49),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(52),
    [anon_sym_AT_AT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_DASH_DASH] = ACTIONS(61),
    [sym_context] = ACTIONS(64),
  },
  [3] = {
    [sym__line] = STATE(28),
    [sym_command] = STATE(28),
    [sym_file_change] = STATE(28),
    [sym_binary_change] = STATE(28),
    [sym_index] = STATE(28),
    [sym_similarity] = STATE(28),
    [sym_old_file] = STATE(28),
    [sym_new_file] = STATE(28),
    [sym_location] = STATE(28),
    [sym_addition] = STATE(28),
    [sym_deletion] = STATE(28),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym_source_token1] = ACTIONS(69),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_DASH_DASH] = ACTIONS(25),
    [sym_context] = ACTIONS(71),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(73), 5,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [19] = 4,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_source_token1,
    ACTIONS(79), 1,
      aux_sym_filename_token1,
    STATE(6), 1,
      aux_sym_filename_repeat1,
  [32] = 4,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    ACTIONS(85), 1,
      aux_sym_filename_token1,
    STATE(6), 1,
      aux_sym_filename_repeat1,
  [45] = 3,
    ACTIONS(90), 1,
      aux_sym_similarity_token1,
    STATE(29), 1,
      sym_mode,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [56] = 3,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      aux_sym_source_token1,
    ACTIONS(96), 1,
      aux_sym_location_token1,
  [66] = 3,
    ACTIONS(98), 1,
      aux_sym_filename_token1,
    STATE(5), 1,
      aux_sym_filename_repeat1,
    STATE(24), 1,
      sym_filename,
  [76] = 3,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      aux_sym_source_token1,
    ACTIONS(104), 1,
      aux_sym_location_token1,
  [86] = 3,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      aux_sym_source_token1,
    ACTIONS(110), 1,
      aux_sym_location_token1,
  [96] = 3,
    ACTIONS(83), 1,
      anon_sym_differ,
    ACTIONS(112), 1,
      aux_sym_filename_token1,
    STATE(12), 1,
      aux_sym_filename_repeat1,
  [106] = 3,
    ACTIONS(115), 1,
      aux_sym_filename_token1,
    STATE(20), 1,
      aux_sym_filename_repeat1,
    STATE(45), 1,
      sym_filename,
  [116] = 3,
    ACTIONS(98), 1,
      aux_sym_filename_token1,
    STATE(5), 1,
      aux_sym_filename_repeat1,
    STATE(23), 1,
      sym_filename,
  [126] = 3,
    ACTIONS(98), 1,
      aux_sym_filename_token1,
    STATE(5), 1,
      aux_sym_filename_repeat1,
    STATE(30), 1,
      sym_filename,
  [136] = 3,
    ACTIONS(77), 1,
      anon_sym_and,
    ACTIONS(117), 1,
      aux_sym_filename_token1,
    STATE(19), 1,
      aux_sym_filename_repeat1,
  [146] = 3,
    ACTIONS(98), 1,
      aux_sym_filename_token1,
    STATE(5), 1,
      aux_sym_filename_repeat1,
    STATE(32), 1,
      sym_filename,
  [156] = 3,
    ACTIONS(119), 1,
      aux_sym_filename_token1,
    STATE(16), 1,
      aux_sym_filename_repeat1,
    STATE(46), 1,
      sym_filename,
  [166] = 3,
    ACTIONS(83), 1,
      anon_sym_and,
    ACTIONS(121), 1,
      aux_sym_filename_token1,
    STATE(19), 1,
      aux_sym_filename_repeat1,
  [176] = 3,
    ACTIONS(77), 1,
      anon_sym_differ,
    ACTIONS(124), 1,
      aux_sym_filename_token1,
    STATE(12), 1,
      aux_sym_filename_repeat1,
  [186] = 2,
    ACTIONS(126), 1,
      anon_sym_file,
    ACTIONS(128), 2,
      anon_sym_from,
      anon_sym_to,
  [194] = 1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [199] = 1,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [204] = 1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [209] = 1,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [214] = 1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [219] = 1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [224] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      aux_sym_source_token1,
  [231] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [236] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [241] = 2,
    ACTIONS(90), 1,
      aux_sym_similarity_token1,
    STATE(35), 1,
      sym_mode,
  [248] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [253] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [258] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      aux_sym_source_token1,
  [265] = 1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [270] = 1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [275] = 1,
    ACTIONS(158), 1,
      anon_sym_AT_AT2,
  [279] = 1,
    ACTIONS(144), 1,
      aux_sym_source_token1,
  [283] = 1,
    ACTIONS(160), 1,
      sym_linerange,
  [287] = 1,
    ACTIONS(162), 1,
      anon_sym_DOT_DOT,
  [291] = 1,
    ACTIONS(164), 1,
      anon_sym_mode,
  [295] = 1,
    ACTIONS(166), 1,
      anon_sym_PERCENT,
  [299] = 1,
    ACTIONS(168), 1,
      sym_commit,
  [303] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [307] = 1,
    ACTIONS(172), 1,
      anon_sym_differ,
  [311] = 1,
    ACTIONS(174), 1,
      anon_sym_and,
  [315] = 1,
    ACTIONS(176), 1,
      aux_sym_similarity_token1,
  [319] = 1,
    ACTIONS(178), 1,
      anon_sym_DASH_DASHgit,
  [323] = 1,
    ACTIONS(180), 1,
      sym_linerange,
  [327] = 1,
    ACTIONS(182), 1,
      anon_sym_index2,
  [331] = 1,
    ACTIONS(184), 1,
      sym_commit,
  [335] = 1,
    ACTIONS(186), 1,
      anon_sym_files,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 76,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 126,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 146,
  [SMALL_STATE(18)] = 156,
  [SMALL_STATE(19)] = 166,
  [SMALL_STATE(20)] = 176,
  [SMALL_STATE(21)] = 186,
  [SMALL_STATE(22)] = 194,
  [SMALL_STATE(23)] = 199,
  [SMALL_STATE(24)] = 204,
  [SMALL_STATE(25)] = 209,
  [SMALL_STATE(26)] = 214,
  [SMALL_STATE(27)] = 219,
  [SMALL_STATE(28)] = 224,
  [SMALL_STATE(29)] = 231,
  [SMALL_STATE(30)] = 236,
  [SMALL_STATE(31)] = 241,
  [SMALL_STATE(32)] = 248,
  [SMALL_STATE(33)] = 253,
  [SMALL_STATE(34)] = 258,
  [SMALL_STATE(35)] = 265,
  [SMALL_STATE(36)] = 270,
  [SMALL_STATE(37)] = 275,
  [SMALL_STATE(38)] = 279,
  [SMALL_STATE(39)] = 283,
  [SMALL_STATE(40)] = 287,
  [SMALL_STATE(41)] = 291,
  [SMALL_STATE(42)] = 295,
  [SMALL_STATE(43)] = 299,
  [SMALL_STATE(44)] = 303,
  [SMALL_STATE(45)] = 307,
  [SMALL_STATE(46)] = 311,
  [SMALL_STATE(47)] = 315,
  [SMALL_STATE(48)] = 319,
  [SMALL_STATE(49)] = 323,
  [SMALL_STATE(50)] = 327,
  [SMALL_STATE(51)] = 331,
  [SMALL_STATE(52)] = 335,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(51),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(50),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(49),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(19),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_diff(void) {
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
