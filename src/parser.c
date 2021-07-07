#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 285
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_STAR = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_account = 5,
  anon_sym_eval = 6,
  aux_sym_account_subdirective_token1 = 7,
  anon_sym_payee = 8,
  anon_sym_commodity = 9,
  anon_sym_nomarket = 10,
  anon_sym_tag = 11,
  aux_sym_tag_directive_token1 = 12,
  anon_sym_include = 13,
  anon_sym_end = 14,
  anon_sym_alias = 15,
  aux_sym_word_directive_token1 = 16,
  anon_sym_EQ = 17,
  aux_sym_word_directive_token2 = 18,
  anon_sym_def = 19,
  anon_sym_year = 20,
  aux_sym_word_directive_token3 = 21,
  anon_sym_bucket = 22,
  anon_sym_A = 23,
  anon_sym_Y = 24,
  anon_sym_N = 25,
  anon_sym_D = 26,
  anon_sym_C = 27,
  anon_sym_P = 28,
  anon_sym_default = 29,
  anon_sym_format = 30,
  anon_sym_note = 31,
  anon_sym_assert = 32,
  anon_sym_check = 33,
  anon_sym_i = 34,
  anon_sym_I = 35,
  anon_sym_o = 36,
  anon_sym_O = 37,
  anon_sym_TILDE = 38,
  aux_sym_interval_token1 = 39,
  aux_sym_interval_token2 = 40,
  aux_sym_interval_token3 = 41,
  aux_sym_interval_token4 = 42,
  aux_sym_interval_token5 = 43,
  aux_sym_interval_token6 = 44,
  aux_sym_interval_token7 = 45,
  aux_sym_interval_token8 = 46,
  aux_sym_interval_token9 = 47,
  aux_sym_interval_token10 = 48,
  aux_sym_interval_token11 = 49,
  aux_sym_interval_token12 = 50,
  aux_sym_interval_token13 = 51,
  aux_sym_interval_token14 = 52,
  aux_sym_interval_token15 = 53,
  aux_sym_interval_token16 = 54,
  aux_sym_interval_token17 = 55,
  sym__single_date = 56,
  sym_time = 57,
  anon_sym_BANG = 58,
  anon_sym_LPAREN = 59,
  aux_sym_code_token1 = 60,
  anon_sym_RPAREN = 61,
  sym_payee = 62,
  anon_sym_LBRACK = 63,
  anon_sym_RBRACK = 64,
  sym_account_name = 65,
  anon_sym_DASH = 66,
  aux_sym_quantity_token1 = 67,
  aux_sym_commodity_token1 = 68,
  aux_sym_commodity_token2 = 69,
  aux_sym_commodity_token3 = 70,
  anon_sym_AT = 71,
  anon_sym_AT_AT = 72,
  anon_sym_ = 73,
  anon_sym_TAB = 74,
  anon_sym_2 = 75,
  anon_sym_TAB2 = 76,
  sym__pure_note = 77,
  sym_source_file = 78,
  sym_journal_item = 79,
  sym_comment = 80,
  sym_directive = 81,
  sym_account_directive = 82,
  sym_account_subdirective = 83,
  sym_commodity_directive = 84,
  sym_commodity_subdirective = 85,
  sym_tag_directive = 86,
  sym_word_directive = 87,
  sym_filename = 88,
  sym_char_directive = 89,
  sym_alias_subdirective = 90,
  sym_default_subdirective = 91,
  sym_format_subdirective = 92,
  sym_note_subdirective = 93,
  sym_assert_subdirective = 94,
  sym_check_subdirective = 95,
  sym_check_in = 96,
  sym_check_out = 97,
  sym_xact = 98,
  sym_plain_xact = 99,
  sym_periodic_xact = 100,
  sym_interval = 101,
  sym_date = 102,
  sym_status = 103,
  sym_code = 104,
  sym_note = 105,
  sym_posting = 106,
  sym_account = 107,
  sym_amount = 108,
  sym_quantity = 109,
  sym_commodity = 110,
  sym_price = 111,
  sym_balance_assertion = 112,
  aux_sym_source_file_repeat1 = 113,
  aux_sym_account_directive_repeat1 = 114,
  aux_sym_commodity_directive_repeat1 = 115,
  aux_sym_tag_directive_repeat1 = 116,
  aux_sym_plain_xact_repeat1 = 117,
  aux_sym_whitespace_repeat1 = 118,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_account] = "account",
  [anon_sym_eval] = "eval",
  [aux_sym_account_subdirective_token1] = "account_subdirective_token1",
  [anon_sym_payee] = "payee",
  [anon_sym_commodity] = "commodity",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_tag] = "tag",
  [aux_sym_tag_directive_token1] = "tag_directive_token1",
  [anon_sym_include] = "include",
  [anon_sym_end] = "end",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token1] = "word_directive_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_word_directive_token2] = "word_directive_token2",
  [anon_sym_def] = "def",
  [anon_sym_year] = "year",
  [aux_sym_word_directive_token3] = "word_directive_token3",
  [anon_sym_bucket] = "bucket",
  [anon_sym_A] = "A",
  [anon_sym_Y] = "Y",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_P] = "P",
  [anon_sym_default] = "default",
  [anon_sym_format] = "format",
  [anon_sym_note] = "note",
  [anon_sym_assert] = "assert",
  [anon_sym_check] = "check",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [anon_sym_TILDE] = "~",
  [aux_sym_interval_token1] = "interval_token1",
  [aux_sym_interval_token2] = "interval_token2",
  [aux_sym_interval_token3] = "interval_token3",
  [aux_sym_interval_token4] = "interval_token4",
  [aux_sym_interval_token5] = "interval_token5",
  [aux_sym_interval_token6] = "interval_token6",
  [aux_sym_interval_token7] = "interval_token7",
  [aux_sym_interval_token8] = "interval_token8",
  [aux_sym_interval_token9] = "interval_token9",
  [aux_sym_interval_token10] = "interval_token10",
  [aux_sym_interval_token11] = "interval_token11",
  [aux_sym_interval_token12] = "interval_token12",
  [aux_sym_interval_token13] = "interval_token13",
  [aux_sym_interval_token14] = "interval_token14",
  [aux_sym_interval_token15] = "interval_token15",
  [aux_sym_interval_token16] = "interval_token16",
  [aux_sym_interval_token17] = "interval_token17",
  [sym__single_date] = "_single_date",
  [sym_time] = "time",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RPAREN] = ")",
  [sym_payee] = "payee",
  [anon_sym_LBRACK] = "",
  [anon_sym_RBRACK] = "",
  [sym_account_name] = "",
  [anon_sym_DASH] = "-",
  [aux_sym_quantity_token1] = "quantity_token1",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [aux_sym_commodity_token3] = "commodity_token3",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym__pure_note] = "_pure_note",
  [sym_source_file] = "source_file",
  [sym_journal_item] = "journal_item",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_account_directive] = "account_directive",
  [sym_account_subdirective] = "account_subdirective",
  [sym_commodity_directive] = "commodity_directive",
  [sym_commodity_subdirective] = "commodity_subdirective",
  [sym_tag_directive] = "tag_directive",
  [sym_word_directive] = "word_directive",
  [sym_filename] = "filename",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_assert_subdirective] = "assert_subdirective",
  [sym_check_subdirective] = "check_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_periodic_xact] = "periodic_xact",
  [sym_interval] = "interval",
  [sym_date] = "date",
  [sym_status] = "status",
  [sym_code] = "code",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_commodity] = "commodity",
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_tag_directive_repeat1] = "tag_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_eval] = anon_sym_eval,
  [aux_sym_account_subdirective_token1] = aux_sym_account_subdirective_token1,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_tag] = anon_sym_tag,
  [aux_sym_tag_directive_token1] = aux_sym_tag_directive_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_year] = anon_sym_year,
  [aux_sym_word_directive_token3] = aux_sym_word_directive_token3,
  [anon_sym_bucket] = anon_sym_bucket,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_interval_token1] = aux_sym_interval_token1,
  [aux_sym_interval_token2] = aux_sym_interval_token2,
  [aux_sym_interval_token3] = aux_sym_interval_token3,
  [aux_sym_interval_token4] = aux_sym_interval_token4,
  [aux_sym_interval_token5] = aux_sym_interval_token5,
  [aux_sym_interval_token6] = aux_sym_interval_token6,
  [aux_sym_interval_token7] = aux_sym_interval_token7,
  [aux_sym_interval_token8] = aux_sym_interval_token8,
  [aux_sym_interval_token9] = aux_sym_interval_token9,
  [aux_sym_interval_token10] = aux_sym_interval_token10,
  [aux_sym_interval_token11] = aux_sym_interval_token11,
  [aux_sym_interval_token12] = aux_sym_interval_token12,
  [aux_sym_interval_token13] = aux_sym_interval_token13,
  [aux_sym_interval_token14] = aux_sym_interval_token14,
  [aux_sym_interval_token15] = aux_sym_interval_token15,
  [aux_sym_interval_token16] = aux_sym_interval_token16,
  [aux_sym_interval_token17] = aux_sym_interval_token17,
  [sym__single_date] = sym__single_date,
  [sym_time] = sym_time,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_payee] = sym_payee,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_LBRACK,
  [sym_account_name] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_quantity_token1] = aux_sym_quantity_token1,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [aux_sym_commodity_token3] = aux_sym_commodity_token3,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym__pure_note] = sym__pure_note,
  [sym_source_file] = sym_source_file,
  [sym_journal_item] = sym_journal_item,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_account_directive] = sym_account_directive,
  [sym_account_subdirective] = sym_account_subdirective,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_commodity_subdirective] = sym_commodity_subdirective,
  [sym_tag_directive] = sym_tag_directive,
  [sym_word_directive] = sym_word_directive,
  [sym_filename] = sym_filename,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_assert_subdirective] = sym_assert_subdirective,
  [sym_check_subdirective] = sym_check_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_periodic_xact] = sym_periodic_xact,
  [sym_interval] = sym_interval,
  [sym_date] = sym_date,
  [sym_status] = sym_status,
  [sym_code] = sym_code,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_commodity] = sym_commodity,
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
  [aux_sym_tag_directive_repeat1] = aux_sym_tag_directive_repeat1,
  [aux_sym_plain_xact_repeat1] = aux_sym_plain_xact_repeat1,
  [aux_sym_whitespace_repeat1] = aux_sym_whitespace_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_account_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_payee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomarket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bucket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interval_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token17] = {
    .visible = false,
    .named = false,
  },
  [sym__single_date] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_account_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quantity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB2] = {
    .visible = true,
    .named = false,
  },
  [sym__pure_note] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_journal_item] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_word_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_char_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_default_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_format_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_note_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_in] = {
    .visible = true,
    .named = true,
  },
  [sym_check_out] = {
    .visible = true,
    .named = true,
  },
  [sym_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_periodic_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_interval] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_assertion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plain_xact_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_whitespace_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_sym_LBRACK,
  },
  [2] = {
    [0] = anon_sym_LBRACK,
    [2] = anon_sym_LBRACK,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_tag_directive_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'g'
                  ? (c >= 'E' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool aux_sym_commodity_token1_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'B' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool aux_sym_commodity_token2_character_set_1(int32_t c) {
  return (c < 3647
    ? (c < 2046
      ? (c < 1423
        ? (c < 162
          ? c == '$'
          : c <= 165)
        : (c <= 1423 || c == 1547))
      : (c <= 2047 || (c < 2801
        ? (c < 2555
          ? (c >= 2546 && c <= 2547)
          : c <= 2555)
        : (c <= 2801 || c == 3065))))
    : (c <= 3647 || (c < 65129
      ? (c < 43064
        ? (c < 8352
          ? c == 6107
          : c <= 8383)
        : (c <= 43064 || c == 65020))
      : (c <= 65129 || (c < 65504
        ? c == 65284
        : (c <= 65505 || (c >= 65509 && c <= 65510)))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(213);
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '!') ADVANCE(309);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '=') ADVANCE(240);
      if (lookahead == '@') ADVANCE(430);
      if (lookahead == 'A') ADVANCE(251);
      if (lookahead == 'B') ADVANCE(397);
      if (lookahead == 'C') ADVANCE(259);
      if (lookahead == 'D') ADVANCE(257);
      if (lookahead == 'I') ADVANCE(277);
      if (lookahead == 'N') ADVANCE(255);
      if (lookahead == 'O') ADVANCE(281);
      if (lookahead == 'P') ADVANCE(261);
      if (lookahead == 'Y') ADVANCE(253);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(340);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == 'p') ADVANCE(326);
      if (lookahead == 't') ADVANCE(327);
      if (lookahead == 'y') ADVANCE(324);
      if (lookahead == '~') ADVANCE(282);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(411);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(419);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(428);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(427);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '=') ADVANCE(240);
      if (lookahead == '@') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(428);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '=') ADVANCE(240);
      if (lookahead == '@') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (aux_sym_commodity_token2_character_set_1(lookahead)) ADVANCE(428);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == 'D') ADVANCE(102);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(176);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(117);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '!') ADVANCE(310);
      if (lookahead == '(') ADVANCE(312);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '(') ADVANCE(312);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(320);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '!') ADVANCE(309);
      if (lookahead == '(') ADVANCE(311);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(315);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(443);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(18);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(14);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(19);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 'h') ADVANCE(15);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 'k') ADVANCE(272);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(22);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 's') ADVANCE(21);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 's') ADVANCE(16);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead == 't') ADVANCE(269);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(232);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(218);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 31:
      if (lookahead == 'V') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(242);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(271);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 100:
      if (lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(177);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(178);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(285);
      END_STATE();
    case 129:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 135:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(142);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(127);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 150:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 152:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 154:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 155:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 157:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 158:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 159:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 164:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      END_STATE();
    case 165:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      END_STATE();
    case 166:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      END_STATE();
    case 167:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 168:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 174:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 176:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 177:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 178:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 179:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 180:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(293);
      END_STATE();
    case 181:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 182:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(295);
      END_STATE();
    case 183:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 184:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(299);
      END_STATE();
    case 185:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(297);
      END_STATE();
    case 186:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 187:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(301);
      END_STATE();
    case 188:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(303);
      END_STATE();
    case 189:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 190:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 191:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(201);
      END_STATE();
    case 192:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(203);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 209:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(320);
      END_STATE();
    case 210:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(320);
      END_STATE();
    case 211:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 212:
      if (eof) ADVANCE(213);
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '=') ADVANCE(240);
      if (lookahead == '@') ADVANCE(430);
      if (lookahead == 'A') ADVANCE(250);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead == 'D') ADVANCE(256);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == 'N') ADVANCE(254);
      if (lookahead == 'O') ADVANCE(280);
      if (lookahead == 'P') ADVANCE(260);
      if (lookahead == 'Y') ADVANCE(252);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(52);
      if (lookahead == '~') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(319);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_eval);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_account_subdirective_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_payee);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_tag);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(385);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(427);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(201);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(388);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(427);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_default);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_format);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_note);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(232);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_assert);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(232);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(23);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_check);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(335);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__single_date);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(319);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(319);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(319);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A') ADVANCE(414);
      if (lookahead == 'a') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(427);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(323);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(245);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(387);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(427);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(350);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(427);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(357);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(427);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(373);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(427);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(372);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(427);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(377);
      if (aux_sym_tag_directive_token1_character_set_1(lookahead)) ADVANCE(427);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == 's') ADVANCE(374);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(355);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(354);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(358);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(368);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(236);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(353);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(343);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(427);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(267);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(225);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(370);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(334);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(342);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(380);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(243);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(231);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(360);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(329);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(381);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(273);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(345);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(348);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(222);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(384);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(379);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(361);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(369);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(330);
      if (lookahead == 't') ADVANCE(341);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(331);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead == 'v') ADVANCE(328);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(378);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(371);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(362);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(382);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(338);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(375);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(363);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(356);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(238);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(344);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(270);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(249);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(265);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(220);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(263);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(229);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(386);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(365);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(339);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(359);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(227);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(347);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(427);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(413);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(427);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(399);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(404);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(401);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(403);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(405);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(420);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(422);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(425);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(426);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(412);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(394);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(417);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(389);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(294);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(296);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(300);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(302);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(304);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(315);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(319);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(315);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(241);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(239);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 212},
  [2] = {.lex_state = 212},
  [3] = {.lex_state = 212},
  [4] = {.lex_state = 212},
  [5] = {.lex_state = 212},
  [6] = {.lex_state = 212},
  [7] = {.lex_state = 212},
  [8] = {.lex_state = 212},
  [9] = {.lex_state = 212},
  [10] = {.lex_state = 212},
  [11] = {.lex_state = 212},
  [12] = {.lex_state = 212},
  [13] = {.lex_state = 212},
  [14] = {.lex_state = 212},
  [15] = {.lex_state = 212},
  [16] = {.lex_state = 212},
  [17] = {.lex_state = 212},
  [18] = {.lex_state = 212},
  [19] = {.lex_state = 212},
  [20] = {.lex_state = 212},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 212},
  [23] = {.lex_state = 212},
  [24] = {.lex_state = 212},
  [25] = {.lex_state = 212},
  [26] = {.lex_state = 212},
  [27] = {.lex_state = 212},
  [28] = {.lex_state = 212},
  [29] = {.lex_state = 212},
  [30] = {.lex_state = 212},
  [31] = {.lex_state = 212},
  [32] = {.lex_state = 212},
  [33] = {.lex_state = 212},
  [34] = {.lex_state = 212},
  [35] = {.lex_state = 212},
  [36] = {.lex_state = 212},
  [37] = {.lex_state = 212},
  [38] = {.lex_state = 212},
  [39] = {.lex_state = 212},
  [40] = {.lex_state = 212},
  [41] = {.lex_state = 212},
  [42] = {.lex_state = 212},
  [43] = {.lex_state = 212},
  [44] = {.lex_state = 212},
  [45] = {.lex_state = 212},
  [46] = {.lex_state = 212},
  [47] = {.lex_state = 212},
  [48] = {.lex_state = 212},
  [49] = {.lex_state = 212},
  [50] = {.lex_state = 212},
  [51] = {.lex_state = 212},
  [52] = {.lex_state = 212},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 212},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 212},
  [145] = {.lex_state = 212},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 212},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 212},
  [156] = {.lex_state = 212},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 11},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 210},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 210},
  [249] = {.lex_state = 212},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 25},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 313},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 211},
  [282] = {.lex_state = 0, .external_lex_state = 1},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 4},
};

enum {
  ts_external_token__pure_note = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__pure_note] = sym__pure_note,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__pure_note] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token3] = ACTIONS(1),
    [anon_sym_bucket] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_interval_token11] = ACTIONS(1),
    [aux_sym_interval_token12] = ACTIONS(1),
    [aux_sym_interval_token13] = ACTIONS(1),
    [aux_sym_interval_token14] = ACTIONS(1),
    [aux_sym_interval_token15] = ACTIONS(1),
    [aux_sym_interval_token16] = ACTIONS(1),
    [aux_sym_interval_token17] = ACTIONS(1),
    [sym__single_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [aux_sym_commodity_token3] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [sym__pure_note] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(263),
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(51),
    [sym_directive] = STATE(51),
    [sym_account_directive] = STATE(49),
    [sym_commodity_directive] = STATE(49),
    [sym_tag_directive] = STATE(49),
    [sym_word_directive] = STATE(261),
    [sym_char_directive] = STATE(261),
    [sym_check_in] = STATE(260),
    [sym_check_out] = STATE(260),
    [sym_xact] = STATE(51),
    [sym_plain_xact] = STATE(52),
    [sym_periodic_xact] = STATE(52),
    [sym_date] = STATE(170),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_account] = ACTIONS(9),
    [anon_sym_commodity] = ACTIONS(11),
    [anon_sym_tag] = ACTIONS(13),
    [anon_sym_include] = ACTIONS(15),
    [anon_sym_end] = ACTIONS(17),
    [anon_sym_alias] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(21),
    [anon_sym_year] = ACTIONS(23),
    [anon_sym_bucket] = ACTIONS(25),
    [anon_sym_A] = ACTIONS(27),
    [anon_sym_Y] = ACTIONS(29),
    [anon_sym_N] = ACTIONS(31),
    [anon_sym_D] = ACTIONS(33),
    [anon_sym_C] = ACTIONS(35),
    [anon_sym_P] = ACTIONS(37),
    [anon_sym_i] = ACTIONS(39),
    [anon_sym_I] = ACTIONS(41),
    [anon_sym_o] = ACTIONS(43),
    [anon_sym_O] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [sym__single_date] = ACTIONS(47),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(9), 1,
      anon_sym_account,
    ACTIONS(11), 1,
      anon_sym_commodity,
    ACTIONS(13), 1,
      anon_sym_tag,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(17), 1,
      anon_sym_end,
    ACTIONS(19), 1,
      anon_sym_alias,
    ACTIONS(21), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_year,
    ACTIONS(25), 1,
      anon_sym_bucket,
    ACTIONS(27), 1,
      anon_sym_A,
    ACTIONS(29), 1,
      anon_sym_Y,
    ACTIONS(31), 1,
      anon_sym_N,
    ACTIONS(33), 1,
      anon_sym_D,
    ACTIONS(35), 1,
      anon_sym_C,
    ACTIONS(37), 1,
      anon_sym_P,
    ACTIONS(39), 1,
      anon_sym_i,
    ACTIONS(41), 1,
      anon_sym_I,
    ACTIONS(45), 1,
      anon_sym_TILDE,
    ACTIONS(47), 1,
      sym__single_date,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(170), 1,
      sym_date,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(43), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(52), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(260), 2,
      sym_check_in,
      sym_check_out,
    STATE(261), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(49), 3,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(51), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [101] = 30,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      anon_sym_account,
    ACTIONS(64), 1,
      anon_sym_commodity,
    ACTIONS(67), 1,
      anon_sym_tag,
    ACTIONS(70), 1,
      anon_sym_include,
    ACTIONS(73), 1,
      anon_sym_end,
    ACTIONS(76), 1,
      anon_sym_alias,
    ACTIONS(79), 1,
      anon_sym_def,
    ACTIONS(82), 1,
      anon_sym_year,
    ACTIONS(85), 1,
      anon_sym_bucket,
    ACTIONS(88), 1,
      anon_sym_A,
    ACTIONS(91), 1,
      anon_sym_Y,
    ACTIONS(94), 1,
      anon_sym_N,
    ACTIONS(97), 1,
      anon_sym_D,
    ACTIONS(100), 1,
      anon_sym_C,
    ACTIONS(103), 1,
      anon_sym_P,
    ACTIONS(106), 1,
      anon_sym_i,
    ACTIONS(109), 1,
      anon_sym_I,
    ACTIONS(115), 1,
      anon_sym_TILDE,
    ACTIONS(118), 1,
      sym__single_date,
    STATE(170), 1,
      sym_date,
    ACTIONS(58), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(112), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(52), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(260), 2,
      sym_check_in,
      sym_check_out,
    STATE(261), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(49), 3,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
    STATE(51), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [202] = 6,
    ACTIONS(123), 1,
      anon_sym_i,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(125), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(121), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [250] = 6,
    ACTIONS(129), 1,
      anon_sym_i,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(125), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(127), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [298] = 6,
    ACTIONS(133), 1,
      anon_sym_i,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(135), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(47), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(131), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [346] = 6,
    ACTIONS(140), 1,
      anon_sym_i,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(142), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(36), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(138), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [393] = 6,
    ACTIONS(146), 1,
      anon_sym_i,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(142), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(36), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(144), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [440] = 6,
    ACTIONS(150), 1,
      anon_sym_i,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(152), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(36), 4,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(148), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [487] = 5,
    ACTIONS(157), 1,
      anon_sym_i,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(155), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [529] = 5,
    ACTIONS(163), 1,
      anon_sym_i,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(165), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(161), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [571] = 5,
    ACTIONS(170), 1,
      anon_sym_i,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(11), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(168), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [613] = 5,
    ACTIONS(174), 1,
      anon_sym_i,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(172), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [654] = 5,
    ACTIONS(180), 1,
      anon_sym_i,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(182), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(178), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [695] = 5,
    ACTIONS(187), 1,
      anon_sym_i,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(185), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [736] = 5,
    ACTIONS(191), 1,
      anon_sym_i,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(189), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [777] = 5,
    ACTIONS(195), 1,
      anon_sym_i,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(193), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [818] = 5,
    ACTIONS(199), 1,
      anon_sym_i,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(197), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [859] = 2,
    ACTIONS(203), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(201), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [894] = 2,
    ACTIONS(207), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(205), 28,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [929] = 3,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(211), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(209), 26,
      anon_sym_eval,
      anon_sym_payee,
      anon_sym_nomarket,
      anon_sym_alias,
      anon_sym_default,
      anon_sym_format,
      anon_sym_note,
      anon_sym_assert,
      anon_sym_check,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [965] = 2,
    ACTIONS(216), 1,
      anon_sym_i,
    ACTIONS(214), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [997] = 2,
    ACTIONS(220), 1,
      anon_sym_i,
    ACTIONS(218), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1029] = 2,
    ACTIONS(224), 1,
      anon_sym_i,
    ACTIONS(222), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1061] = 2,
    ACTIONS(228), 1,
      anon_sym_i,
    ACTIONS(226), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1093] = 2,
    ACTIONS(232), 1,
      anon_sym_i,
    ACTIONS(230), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1125] = 2,
    ACTIONS(236), 1,
      anon_sym_i,
    ACTIONS(234), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1157] = 2,
    ACTIONS(240), 1,
      anon_sym_i,
    ACTIONS(238), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1189] = 2,
    ACTIONS(244), 1,
      anon_sym_i,
    ACTIONS(242), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1221] = 2,
    ACTIONS(248), 1,
      anon_sym_i,
    ACTIONS(246), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1253] = 2,
    ACTIONS(252), 1,
      anon_sym_i,
    ACTIONS(250), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1285] = 2,
    ACTIONS(256), 1,
      anon_sym_i,
    ACTIONS(254), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1317] = 2,
    ACTIONS(260), 1,
      anon_sym_i,
    ACTIONS(258), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1349] = 2,
    ACTIONS(264), 1,
      anon_sym_i,
    ACTIONS(262), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1381] = 2,
    ACTIONS(268), 1,
      anon_sym_i,
    ACTIONS(266), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1413] = 2,
    ACTIONS(272), 1,
      anon_sym_i,
    ACTIONS(270), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1445] = 2,
    ACTIONS(276), 1,
      anon_sym_i,
    ACTIONS(274), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1477] = 2,
    ACTIONS(280), 1,
      anon_sym_i,
    ACTIONS(278), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1509] = 2,
    ACTIONS(284), 1,
      anon_sym_i,
    ACTIONS(282), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1541] = 2,
    ACTIONS(288), 1,
      anon_sym_i,
    ACTIONS(286), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1573] = 2,
    ACTIONS(292), 1,
      anon_sym_i,
    ACTIONS(290), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1605] = 2,
    ACTIONS(296), 1,
      anon_sym_i,
    ACTIONS(294), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1637] = 2,
    ACTIONS(300), 1,
      anon_sym_i,
    ACTIONS(298), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1669] = 2,
    ACTIONS(304), 1,
      anon_sym_i,
    ACTIONS(302), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1701] = 2,
    ACTIONS(308), 1,
      anon_sym_i,
    ACTIONS(306), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1733] = 2,
    ACTIONS(312), 1,
      anon_sym_i,
    ACTIONS(310), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1765] = 2,
    ACTIONS(316), 1,
      anon_sym_i,
    ACTIONS(314), 26,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
      anon_sym_,
      anon_sym_TAB,
  [1797] = 2,
    ACTIONS(320), 1,
      anon_sym_i,
    ACTIONS(318), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [1827] = 2,
    ACTIONS(324), 1,
      anon_sym_i,
    ACTIONS(322), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [1857] = 2,
    ACTIONS(328), 1,
      anon_sym_i,
    ACTIONS(326), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [1887] = 2,
    ACTIONS(332), 1,
      anon_sym_i,
    ACTIONS(330), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [1917] = 2,
    ACTIONS(336), 1,
      anon_sym_i,
    ACTIONS(334), 24,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__single_date,
  [1947] = 4,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    STATE(268), 1,
      sym_interval,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(338), 17,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [1977] = 16,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(68), 1,
      sym_amount,
    STATE(87), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(133), 1,
      sym_commodity,
    STATE(274), 1,
      sym_note,
    ACTIONS(358), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2029] = 16,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    STATE(70), 1,
      sym_amount,
    STATE(90), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(133), 1,
      sym_commodity,
    STATE(264), 1,
      sym_note,
    ACTIONS(362), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2081] = 16,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(59), 1,
      aux_sym_whitespace_repeat1,
    STATE(75), 1,
      sym_amount,
    STATE(89), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(122), 1,
      sym_balance_assertion,
    STATE(133), 1,
      sym_commodity,
    STATE(256), 1,
      sym_note,
    ACTIONS(366), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2133] = 15,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(66), 1,
      sym_amount,
    STATE(88), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(252), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2182] = 15,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(68), 1,
      sym_amount,
    STATE(87), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(133), 1,
      sym_commodity,
    STATE(274), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2231] = 15,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(70), 1,
      sym_amount,
    STATE(90), 1,
      sym_price,
    STATE(105), 1,
      sym_quantity,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(133), 1,
      sym_commodity,
    STATE(264), 1,
      sym_note,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2280] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(370), 2,
      aux_sym_word_directive_token3,
      anon_sym_AT,
    ACTIONS(372), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym__single_date,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [2302] = 4,
    ACTIONS(370), 1,
      anon_sym_AT,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(375), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [2323] = 11,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(386), 1,
      anon_sym_,
    ACTIONS(388), 1,
      anon_sym_TAB,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(106), 1,
      sym_status,
    STATE(202), 1,
      sym_account,
    STATE(279), 1,
      sym_note,
    ACTIONS(378), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [2358] = 2,
    ACTIONS(284), 1,
      anon_sym_AT,
    ACTIONS(282), 11,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2375] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(69), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(254), 1,
      sym_amount,
    ACTIONS(390), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2403] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(30), 1,
      sym_amount,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(102), 1,
      sym_quantity,
    STATE(124), 1,
      sym_commodity,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2431] = 10,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    ACTIONS(392), 1,
      anon_sym_LF,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    STATE(93), 1,
      sym_price,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(241), 1,
      sym_note,
    ACTIONS(394), 2,
      anon_sym_,
      anon_sym_TAB,
  [2463] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(238), 1,
      sym_amount,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2491] = 10,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    ACTIONS(396), 1,
      anon_sym_LF,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    STATE(88), 1,
      sym_price,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(252), 1,
      sym_note,
    ACTIONS(398), 2,
      anon_sym_,
      anon_sym_TAB,
  [2523] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(259), 1,
      sym_amount,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2551] = 10,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(87), 1,
      sym_price,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(274), 1,
      sym_note,
    ACTIONS(400), 2,
      anon_sym_,
      anon_sym_TAB,
  [2583] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(76), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(199), 1,
      sym_amount,
    ACTIONS(402), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2611] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(233), 1,
      sym_amount,
    ACTIONS(404), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2639] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(74), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(149), 1,
      sym_amount,
    ACTIONS(406), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2667] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(138), 1,
      sym_amount,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2695] = 10,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(90), 1,
      sym_price,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(264), 1,
      sym_note,
    ACTIONS(408), 2,
      anon_sym_,
      anon_sym_TAB,
  [2727] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(194), 1,
      sym_amount,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2755] = 8,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(61), 1,
      aux_sym_whitespace_repeat1,
    STATE(105), 1,
      sym_quantity,
    STATE(133), 1,
      sym_commodity,
    STATE(254), 1,
      sym_amount,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [2783] = 2,
    ACTIONS(308), 1,
      anon_sym_AT,
    ACTIONS(306), 9,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2798] = 9,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(87), 1,
      sym_price,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(274), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [2827] = 2,
    ACTIONS(292), 1,
      anon_sym_AT,
    ACTIONS(290), 9,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2842] = 9,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(94), 1,
      sym_price,
    STATE(129), 1,
      sym_balance_assertion,
    STATE(247), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [2871] = 8,
    ACTIONS(414), 1,
      anon_sym_alias,
    ACTIONS(416), 1,
      anon_sym_default,
    ACTIONS(418), 1,
      anon_sym_note,
    ACTIONS(420), 1,
      anon_sym_assert,
    ACTIONS(422), 1,
      anon_sym_check,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(412), 2,
      anon_sym_eval,
      anon_sym_payee,
  [2898] = 9,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(88), 1,
      sym_price,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(252), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [2927] = 9,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_AT_AT,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(93), 1,
      sym_price,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(241), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [2956] = 5,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      anon_sym_,
    ACTIONS(427), 1,
      anon_sym_TAB,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(370), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [2976] = 7,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    STATE(196), 1,
      sym_status,
    STATE(197), 1,
      sym_code,
    ACTIONS(430), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [3000] = 7,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(396), 1,
      anon_sym_LF,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(252), 1,
      sym_note,
    ACTIONS(438), 2,
      anon_sym_,
      anon_sym_TAB,
  [3023] = 7,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(392), 1,
      anon_sym_LF,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(241), 1,
      sym_note,
    ACTIONS(440), 2,
      anon_sym_,
      anon_sym_TAB,
  [3046] = 7,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(264), 1,
      sym_note,
    ACTIONS(442), 2,
      anon_sym_,
      anon_sym_TAB,
  [3069] = 7,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(119), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(274), 1,
      sym_note,
    ACTIONS(444), 2,
      anon_sym_,
      anon_sym_TAB,
  [3092] = 7,
    ACTIONS(414), 1,
      anon_sym_alias,
    ACTIONS(416), 1,
      anon_sym_default,
    ACTIONS(418), 1,
      anon_sym_note,
    ACTIONS(446), 1,
      anon_sym_nomarket,
    ACTIONS(448), 1,
      anon_sym_format,
    STATE(21), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(340), 2,
      anon_sym_,
      anon_sym_TAB,
  [3115] = 4,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(370), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(450), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(209), 3,
      aux_sym_tag_directive_token1,
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [3132] = 7,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(453), 1,
      anon_sym_LF,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_balance_assertion,
    STATE(247), 1,
      sym_note,
    ACTIONS(455), 2,
      anon_sym_,
      anon_sym_TAB,
  [3155] = 7,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(253), 1,
      sym_note,
    ACTIONS(459), 2,
      anon_sym_,
      anon_sym_TAB,
  [3178] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(461), 1,
      anon_sym_,
    ACTIONS(463), 1,
      anon_sym_TAB,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_account,
  [3200] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(238), 1,
      sym_commodity,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3216] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(465), 1,
      anon_sym_,
    ACTIONS(467), 1,
      anon_sym_TAB,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(206), 1,
      sym_account,
  [3238] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(64), 1,
      sym_commodity,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3254] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(461), 1,
      anon_sym_,
    ACTIONS(463), 1,
      anon_sym_TAB,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_account,
  [3276] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(461), 1,
      anon_sym_,
    ACTIONS(463), 1,
      anon_sym_TAB,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_account,
  [3298] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(469), 1,
      anon_sym_,
    ACTIONS(471), 1,
      anon_sym_TAB,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_account,
  [3320] = 4,
    STATE(20), 1,
      sym_commodity,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(475), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(473), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3336] = 6,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(126), 1,
      sym_balance_assertion,
    STATE(274), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3356] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(461), 1,
      anon_sym_,
    ACTIONS(463), 1,
      anon_sym_TAB,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(245), 1,
      sym_account,
  [3378] = 4,
    STATE(20), 1,
      sym_commodity,
    STATE(108), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(477), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3394] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(479), 1,
      anon_sym_,
    ACTIONS(481), 1,
      anon_sym_TAB,
    STATE(116), 1,
      aux_sym_whitespace_repeat1,
    STATE(183), 1,
      sym_account,
  [3416] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(159), 1,
      sym_commodity,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3432] = 4,
    STATE(19), 1,
      sym_commodity,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3448] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(461), 1,
      anon_sym_,
    ACTIONS(463), 1,
      anon_sym_TAB,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(165), 1,
      sym_account,
  [3470] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(483), 1,
      anon_sym_,
    ACTIONS(485), 1,
      anon_sym_TAB,
    STATE(112), 1,
      aux_sym_whitespace_repeat1,
    STATE(165), 1,
      sym_account,
  [3492] = 6,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(129), 1,
      sym_balance_assertion,
    STATE(247), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3512] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(461), 1,
      anon_sym_,
    ACTIONS(463), 1,
      anon_sym_TAB,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(191), 1,
      sym_account,
  [3534] = 4,
    STATE(19), 1,
      sym_commodity,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(473), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3550] = 6,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(132), 1,
      sym_balance_assertion,
    STATE(241), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3570] = 6,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(125), 1,
      sym_balance_assertion,
    STATE(258), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3590] = 7,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_account_name,
    ACTIONS(461), 1,
      anon_sym_,
    ACTIONS(463), 1,
      anon_sym_TAB,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(169), 1,
      sym_account,
  [3612] = 4,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(244), 1,
      sym_commodity,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(352), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3628] = 4,
    ACTIONS(370), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(487), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(209), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [3644] = 6,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_balance_assertion,
    STATE(252), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3664] = 6,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(253), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3684] = 5,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_code,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [3701] = 5,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    STATE(264), 1,
      sym_note,
    ACTIONS(492), 2,
      anon_sym_,
      anon_sym_TAB,
  [3718] = 5,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(19), 1,
      sym_quantity,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
  [3735] = 5,
    ACTIONS(496), 1,
      anon_sym_DASH,
    ACTIONS(498), 1,
      aux_sym_quantity_token1,
    STATE(20), 1,
      sym_quantity,
    STATE(131), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(500), 2,
      anon_sym_,
      anon_sym_TAB,
  [3752] = 5,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(502), 1,
      anon_sym_LF,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    STATE(262), 1,
      sym_note,
    ACTIONS(504), 2,
      anon_sym_,
      anon_sym_TAB,
  [3769] = 5,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      anon_sym_LF,
    STATE(135), 1,
      aux_sym_whitespace_repeat1,
    STATE(252), 1,
      sym_note,
    ACTIONS(506), 2,
      anon_sym_,
      anon_sym_TAB,
  [3786] = 5,
    ACTIONS(342), 1,
      anon_sym_LF,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    STATE(274), 1,
      sym_note,
    ACTIONS(508), 2,
      anon_sym_,
      anon_sym_TAB,
  [3803] = 5,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(510), 1,
      anon_sym_LF,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    STATE(258), 1,
      sym_note,
    ACTIONS(512), 2,
      anon_sym_,
      anon_sym_TAB,
  [3820] = 5,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(457), 1,
      anon_sym_LF,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(253), 1,
      sym_note,
    ACTIONS(514), 2,
      anon_sym_,
      anon_sym_TAB,
  [3837] = 4,
    ACTIONS(516), 1,
      anon_sym_,
    ACTIONS(519), 1,
      anon_sym_TAB,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(370), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [3852] = 5,
    ACTIONS(496), 1,
      anon_sym_DASH,
    ACTIONS(498), 1,
      aux_sym_quantity_token1,
    STATE(19), 1,
      sym_quantity,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
  [3869] = 5,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(453), 1,
      anon_sym_LF,
    STATE(141), 1,
      aux_sym_whitespace_repeat1,
    STATE(247), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_,
      anon_sym_TAB,
  [3886] = 5,
    ACTIONS(348), 1,
      anon_sym_DASH,
    ACTIONS(350), 1,
      aux_sym_quantity_token1,
    STATE(20), 1,
      sym_quantity,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(524), 2,
      anon_sym_,
      anon_sym_TAB,
  [3903] = 5,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      anon_sym_LF,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    STATE(241), 1,
      sym_note,
    ACTIONS(526), 2,
      anon_sym_,
      anon_sym_TAB,
  [3920] = 4,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(241), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3934] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3946] = 4,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(247), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3960] = 1,
    ACTIONS(528), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [3968] = 4,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(274), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [3982] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3994] = 4,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(253), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4008] = 4,
    ACTIONS(47), 1,
      sym__single_date,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(188), 1,
      sym_date,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4022] = 4,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(252), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4036] = 4,
    ACTIONS(47), 1,
      sym__single_date,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(185), 1,
      sym_date,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4050] = 4,
    ACTIONS(47), 1,
      sym__single_date,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_date,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4064] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4076] = 4,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(258), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4090] = 4,
    ACTIONS(420), 1,
      anon_sym_assert,
    ACTIONS(422), 1,
      anon_sym_check,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
  [4104] = 1,
    ACTIONS(530), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [4112] = 4,
    ACTIONS(532), 1,
      aux_sym_word_directive_token2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_filename,
    ACTIONS(534), 2,
      anon_sym_,
      anon_sym_TAB,
  [4126] = 4,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(262), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4140] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4152] = 2,
    ACTIONS(538), 1,
      anon_sym_EQ,
    ACTIONS(536), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4162] = 4,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    STATE(265), 1,
      sym_note,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4176] = 4,
    ACTIONS(47), 1,
      sym__single_date,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    STATE(177), 1,
      sym_date,
    ACTIONS(540), 2,
      anon_sym_,
      anon_sym_TAB,
  [4190] = 4,
    ACTIONS(47), 1,
      sym__single_date,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym_date,
    ACTIONS(542), 2,
      anon_sym_,
      anon_sym_TAB,
  [4204] = 3,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(176), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [4216] = 2,
    ACTIONS(546), 1,
      anon_sym_,
    ACTIONS(544), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [4226] = 3,
    ACTIONS(548), 1,
      anon_sym_EQ,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(550), 2,
      anon_sym_,
      anon_sym_TAB,
  [4237] = 3,
    ACTIONS(552), 1,
      aux_sym_word_directive_token3,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4248] = 3,
    ACTIONS(209), 1,
      aux_sym_account_subdirective_token1,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_,
      anon_sym_TAB,
  [4259] = 3,
    ACTIONS(370), 1,
      aux_sym_word_directive_token1,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(557), 2,
      anon_sym_,
      anon_sym_TAB,
  [4270] = 3,
    ACTIONS(560), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [4281] = 3,
    ACTIONS(560), 1,
      sym_payee,
    STATE(189), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(562), 2,
      anon_sym_,
      anon_sym_TAB,
  [4292] = 2,
    ACTIONS(564), 1,
      anon_sym_LF,
    ACTIONS(566), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4301] = 3,
    ACTIONS(370), 1,
      aux_sym_word_directive_token2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(568), 2,
      anon_sym_,
      anon_sym_TAB,
  [4312] = 3,
    ACTIONS(571), 1,
      aux_sym_account_subdirective_token1,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(573), 2,
      anon_sym_,
      anon_sym_TAB,
  [4323] = 3,
    ACTIONS(575), 1,
      aux_sym_account_subdirective_token1,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(573), 2,
      anon_sym_,
      anon_sym_TAB,
  [4334] = 2,
    ACTIONS(360), 1,
      anon_sym_LF,
    ACTIONS(577), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4343] = 3,
    ACTIONS(579), 1,
      anon_sym_LF,
    STATE(86), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(581), 2,
      anon_sym_,
      anon_sym_TAB,
  [4354] = 3,
    ACTIONS(583), 1,
      aux_sym_tag_directive_token1,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
  [4365] = 3,
    ACTIONS(585), 1,
      aux_sym_word_directive_token1,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(587), 2,
      anon_sym_,
      anon_sym_TAB,
  [4376] = 3,
    ACTIONS(589), 1,
      aux_sym_word_directive_token2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(534), 2,
      anon_sym_,
      anon_sym_TAB,
  [4387] = 3,
    ACTIONS(591), 1,
      aux_sym_word_directive_token3,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4398] = 3,
    ACTIONS(593), 1,
      sym_time,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(595), 2,
      anon_sym_,
      anon_sym_TAB,
  [4409] = 3,
    ACTIONS(597), 1,
      anon_sym_LF,
    STATE(178), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(599), 2,
      anon_sym_,
      anon_sym_TAB,
  [4420] = 3,
    ACTIONS(601), 1,
      sym_time,
    STATE(187), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(603), 2,
      anon_sym_,
      anon_sym_TAB,
  [4431] = 3,
    ACTIONS(605), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [4442] = 3,
    ACTIONS(607), 1,
      aux_sym_account_subdirective_token1,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(573), 2,
      anon_sym_,
      anon_sym_TAB,
  [4453] = 3,
    ACTIONS(609), 1,
      aux_sym_account_subdirective_token1,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(573), 2,
      anon_sym_,
      anon_sym_TAB,
  [4464] = 1,
    ACTIONS(611), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4471] = 3,
    ACTIONS(613), 1,
      aux_sym_account_subdirective_token1,
    STATE(161), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(573), 2,
      anon_sym_,
      anon_sym_TAB,
  [4482] = 2,
    ACTIONS(364), 1,
      anon_sym_LF,
    ACTIONS(615), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4491] = 3,
    ACTIONS(617), 1,
      sym_time,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4502] = 3,
    ACTIONS(617), 1,
      sym_time,
    STATE(207), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(619), 2,
      anon_sym_,
      anon_sym_TAB,
  [4513] = 2,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4522] = 3,
    ACTIONS(625), 1,
      sym_time,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4533] = 3,
    ACTIONS(625), 1,
      sym_time,
    STATE(205), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(627), 2,
      anon_sym_,
      anon_sym_TAB,
  [4544] = 3,
    ACTIONS(629), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [4555] = 3,
    ACTIONS(629), 1,
      sym_payee,
    STATE(203), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(631), 2,
      anon_sym_,
      anon_sym_TAB,
  [4566] = 2,
    ACTIONS(633), 1,
      anon_sym_LF,
    ACTIONS(635), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4575] = 3,
    ACTIONS(637), 1,
      sym_payee,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(639), 2,
      anon_sym_,
      anon_sym_TAB,
  [4586] = 3,
    ACTIONS(641), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [4597] = 1,
    ACTIONS(643), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4604] = 1,
    ACTIONS(645), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4611] = 3,
    ACTIONS(647), 1,
      anon_sym_LF,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(649), 2,
      anon_sym_,
      anon_sym_TAB,
  [4622] = 3,
    ACTIONS(647), 1,
      anon_sym_LF,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(651), 2,
      anon_sym_,
      anon_sym_TAB,
  [4633] = 1,
    ACTIONS(653), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4640] = 1,
    ACTIONS(655), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4647] = 3,
    ACTIONS(490), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [4658] = 3,
    ACTIONS(657), 1,
      sym_payee,
    STATE(193), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(659), 2,
      anon_sym_,
      anon_sym_TAB,
  [4669] = 2,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(663), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4678] = 3,
    ACTIONS(657), 1,
      sym_payee,
    STATE(118), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(436), 2,
      anon_sym_,
      anon_sym_TAB,
  [4689] = 3,
    ACTIONS(665), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4700] = 3,
    ACTIONS(667), 1,
      sym_time,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4711] = 2,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(671), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4720] = 3,
    ACTIONS(673), 1,
      sym_time,
    STATE(60), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(410), 2,
      anon_sym_,
      anon_sym_TAB,
  [4731] = 1,
    ACTIONS(675), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [4737] = 2,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(677), 2,
      anon_sym_,
      anon_sym_TAB,
  [4745] = 2,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(679), 2,
      anon_sym_,
      anon_sym_TAB,
  [4753] = 2,
    STATE(171), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(681), 2,
      anon_sym_,
      anon_sym_TAB,
  [4761] = 2,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(683), 2,
      anon_sym_,
      anon_sym_TAB,
  [4769] = 2,
    STATE(65), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(685), 2,
      anon_sym_,
      anon_sym_TAB,
  [4777] = 2,
    STATE(172), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(687), 2,
      anon_sym_,
      anon_sym_TAB,
  [4785] = 2,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(689), 2,
      anon_sym_,
      anon_sym_TAB,
  [4793] = 2,
    STATE(160), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(691), 2,
      anon_sym_,
      anon_sym_TAB,
  [4801] = 2,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(693), 2,
      anon_sym_,
      anon_sym_TAB,
  [4809] = 2,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(695), 2,
      anon_sym_,
      anon_sym_TAB,
  [4817] = 2,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(697), 2,
      anon_sym_,
      anon_sym_TAB,
  [4825] = 2,
    STATE(95), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(699), 2,
      anon_sym_,
      anon_sym_TAB,
  [4833] = 2,
    STATE(174), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(701), 2,
      anon_sym_,
      anon_sym_TAB,
  [4841] = 1,
    ACTIONS(546), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [4847] = 2,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(703), 2,
      anon_sym_,
      anon_sym_TAB,
  [4855] = 2,
    STATE(67), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(705), 2,
      anon_sym_,
      anon_sym_TAB,
  [4863] = 2,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(707), 2,
      anon_sym_,
      anon_sym_TAB,
  [4871] = 2,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(709), 2,
      anon_sym_,
      anon_sym_TAB,
  [4879] = 2,
    STATE(53), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(711), 2,
      anon_sym_,
      anon_sym_TAB,
  [4887] = 2,
    STATE(182), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(713), 2,
      anon_sym_,
      anon_sym_TAB,
  [4895] = 2,
    STATE(180), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(715), 2,
      anon_sym_,
      anon_sym_TAB,
  [4903] = 2,
    STATE(179), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(717), 2,
      anon_sym_,
      anon_sym_TAB,
  [4911] = 2,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(719), 2,
      anon_sym_,
      anon_sym_TAB,
  [4919] = 1,
    ACTIONS(721), 1,
      anon_sym_LF,
  [4923] = 1,
    ACTIONS(723), 1,
      anon_sym_LF,
  [4927] = 1,
    ACTIONS(725), 1,
      anon_sym_LF,
  [4931] = 1,
    ACTIONS(727), 1,
      anon_sym_LF,
  [4935] = 1,
    ACTIONS(729), 1,
      anon_sym_LF,
  [4939] = 1,
    ACTIONS(731), 1,
      aux_sym_quantity_token1,
  [4943] = 1,
    ACTIONS(733), 1,
      anon_sym_LF,
  [4947] = 1,
    ACTIONS(735), 1,
      anon_sym_LF,
  [4951] = 1,
    ACTIONS(737), 1,
      anon_sym_EQ,
  [4955] = 1,
    ACTIONS(453), 1,
      anon_sym_LF,
  [4959] = 1,
    ACTIONS(739), 1,
      anon_sym_LF,
  [4963] = 1,
    ACTIONS(741), 1,
      anon_sym_LF,
  [4967] = 1,
    ACTIONS(743), 1,
      anon_sym_LF,
  [4971] = 1,
    ACTIONS(745), 1,
      anon_sym_LF,
  [4975] = 1,
    ACTIONS(747), 1,
      sym_account_name,
  [4979] = 1,
    ACTIONS(457), 1,
      anon_sym_LF,
  [4983] = 1,
    ACTIONS(749), 1,
      sym_account_name,
  [4987] = 1,
    ACTIONS(751), 1,
      sym__single_date,
  [4991] = 1,
    ACTIONS(597), 1,
      anon_sym_LF,
  [4995] = 1,
    ACTIONS(753), 1,
      anon_sym_LF,
  [4999] = 1,
    ACTIONS(392), 1,
      anon_sym_LF,
  [5003] = 1,
    ACTIONS(510), 1,
      anon_sym_LF,
  [5007] = 1,
    ACTIONS(755), 1,
      anon_sym_LF,
  [5011] = 1,
    ACTIONS(757), 1,
      anon_sym_LF,
  [5015] = 1,
    ACTIONS(360), 1,
      anon_sym_LF,
  [5019] = 1,
    ACTIONS(633), 1,
      anon_sym_LF,
  [5023] = 1,
    ACTIONS(502), 1,
      anon_sym_LF,
  [5027] = 1,
    ACTIONS(759), 1,
      anon_sym_LF,
  [5031] = 1,
    ACTIONS(761), 1,
      anon_sym_LF,
  [5035] = 1,
    ACTIONS(763), 1,
      anon_sym_LF,
  [5039] = 1,
    ACTIONS(765), 1,
      anon_sym_LF,
  [5043] = 1,
    ACTIONS(767), 1,
      ts_builtin_sym_end,
  [5047] = 1,
    ACTIONS(342), 1,
      anon_sym_LF,
  [5051] = 1,
    ACTIONS(769), 1,
      anon_sym_LF,
  [5055] = 1,
    ACTIONS(771), 1,
      anon_sym_LF,
  [5059] = 1,
    ACTIONS(773), 1,
      anon_sym_LF,
  [5063] = 1,
    ACTIONS(775), 1,
      anon_sym_LF,
  [5067] = 1,
    ACTIONS(777), 1,
      aux_sym_comment_token1,
  [5071] = 1,
    ACTIONS(779), 1,
      anon_sym_LF,
  [5075] = 1,
    ACTIONS(781), 1,
      aux_sym_code_token1,
  [5079] = 1,
    ACTIONS(647), 1,
      anon_sym_LF,
  [5083] = 1,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
  [5087] = 1,
    ACTIONS(396), 1,
      anon_sym_LF,
  [5091] = 1,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
  [5095] = 1,
    ACTIONS(785), 1,
      anon_sym_LF,
  [5099] = 1,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
  [5103] = 1,
    ACTIONS(564), 1,
      anon_sym_LF,
  [5107] = 1,
    ACTIONS(789), 1,
      anon_sym_LF,
  [5111] = 1,
    ACTIONS(791), 1,
      anon_sym_LF,
  [5115] = 1,
    ACTIONS(793), 1,
      aux_sym_word_directive_token2,
  [5119] = 1,
    ACTIONS(795), 1,
      sym__pure_note,
  [5123] = 1,
    ACTIONS(797), 1,
      anon_sym_LF,
  [5127] = 1,
    ACTIONS(799), 1,
      aux_sym_quantity_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 101,
  [SMALL_STATE(4)] = 202,
  [SMALL_STATE(5)] = 250,
  [SMALL_STATE(6)] = 298,
  [SMALL_STATE(7)] = 346,
  [SMALL_STATE(8)] = 393,
  [SMALL_STATE(9)] = 440,
  [SMALL_STATE(10)] = 487,
  [SMALL_STATE(11)] = 529,
  [SMALL_STATE(12)] = 571,
  [SMALL_STATE(13)] = 613,
  [SMALL_STATE(14)] = 654,
  [SMALL_STATE(15)] = 695,
  [SMALL_STATE(16)] = 736,
  [SMALL_STATE(17)] = 777,
  [SMALL_STATE(18)] = 818,
  [SMALL_STATE(19)] = 859,
  [SMALL_STATE(20)] = 894,
  [SMALL_STATE(21)] = 929,
  [SMALL_STATE(22)] = 965,
  [SMALL_STATE(23)] = 997,
  [SMALL_STATE(24)] = 1029,
  [SMALL_STATE(25)] = 1061,
  [SMALL_STATE(26)] = 1093,
  [SMALL_STATE(27)] = 1125,
  [SMALL_STATE(28)] = 1157,
  [SMALL_STATE(29)] = 1189,
  [SMALL_STATE(30)] = 1221,
  [SMALL_STATE(31)] = 1253,
  [SMALL_STATE(32)] = 1285,
  [SMALL_STATE(33)] = 1317,
  [SMALL_STATE(34)] = 1349,
  [SMALL_STATE(35)] = 1381,
  [SMALL_STATE(36)] = 1413,
  [SMALL_STATE(37)] = 1445,
  [SMALL_STATE(38)] = 1477,
  [SMALL_STATE(39)] = 1509,
  [SMALL_STATE(40)] = 1541,
  [SMALL_STATE(41)] = 1573,
  [SMALL_STATE(42)] = 1605,
  [SMALL_STATE(43)] = 1637,
  [SMALL_STATE(44)] = 1669,
  [SMALL_STATE(45)] = 1701,
  [SMALL_STATE(46)] = 1733,
  [SMALL_STATE(47)] = 1765,
  [SMALL_STATE(48)] = 1797,
  [SMALL_STATE(49)] = 1827,
  [SMALL_STATE(50)] = 1857,
  [SMALL_STATE(51)] = 1887,
  [SMALL_STATE(52)] = 1917,
  [SMALL_STATE(53)] = 1947,
  [SMALL_STATE(54)] = 1977,
  [SMALL_STATE(55)] = 2029,
  [SMALL_STATE(56)] = 2081,
  [SMALL_STATE(57)] = 2133,
  [SMALL_STATE(58)] = 2182,
  [SMALL_STATE(59)] = 2231,
  [SMALL_STATE(60)] = 2280,
  [SMALL_STATE(61)] = 2302,
  [SMALL_STATE(62)] = 2323,
  [SMALL_STATE(63)] = 2358,
  [SMALL_STATE(64)] = 2375,
  [SMALL_STATE(65)] = 2403,
  [SMALL_STATE(66)] = 2431,
  [SMALL_STATE(67)] = 2463,
  [SMALL_STATE(68)] = 2491,
  [SMALL_STATE(69)] = 2523,
  [SMALL_STATE(70)] = 2551,
  [SMALL_STATE(71)] = 2583,
  [SMALL_STATE(72)] = 2611,
  [SMALL_STATE(73)] = 2639,
  [SMALL_STATE(74)] = 2667,
  [SMALL_STATE(75)] = 2695,
  [SMALL_STATE(76)] = 2727,
  [SMALL_STATE(77)] = 2755,
  [SMALL_STATE(78)] = 2783,
  [SMALL_STATE(79)] = 2798,
  [SMALL_STATE(80)] = 2827,
  [SMALL_STATE(81)] = 2842,
  [SMALL_STATE(82)] = 2871,
  [SMALL_STATE(83)] = 2898,
  [SMALL_STATE(84)] = 2927,
  [SMALL_STATE(85)] = 2956,
  [SMALL_STATE(86)] = 2976,
  [SMALL_STATE(87)] = 3000,
  [SMALL_STATE(88)] = 3023,
  [SMALL_STATE(89)] = 3046,
  [SMALL_STATE(90)] = 3069,
  [SMALL_STATE(91)] = 3092,
  [SMALL_STATE(92)] = 3115,
  [SMALL_STATE(93)] = 3132,
  [SMALL_STATE(94)] = 3155,
  [SMALL_STATE(95)] = 3178,
  [SMALL_STATE(96)] = 3200,
  [SMALL_STATE(97)] = 3216,
  [SMALL_STATE(98)] = 3238,
  [SMALL_STATE(99)] = 3254,
  [SMALL_STATE(100)] = 3276,
  [SMALL_STATE(101)] = 3298,
  [SMALL_STATE(102)] = 3320,
  [SMALL_STATE(103)] = 3336,
  [SMALL_STATE(104)] = 3356,
  [SMALL_STATE(105)] = 3378,
  [SMALL_STATE(106)] = 3394,
  [SMALL_STATE(107)] = 3416,
  [SMALL_STATE(108)] = 3432,
  [SMALL_STATE(109)] = 3448,
  [SMALL_STATE(110)] = 3470,
  [SMALL_STATE(111)] = 3492,
  [SMALL_STATE(112)] = 3512,
  [SMALL_STATE(113)] = 3534,
  [SMALL_STATE(114)] = 3550,
  [SMALL_STATE(115)] = 3570,
  [SMALL_STATE(116)] = 3590,
  [SMALL_STATE(117)] = 3612,
  [SMALL_STATE(118)] = 3628,
  [SMALL_STATE(119)] = 3644,
  [SMALL_STATE(120)] = 3664,
  [SMALL_STATE(121)] = 3684,
  [SMALL_STATE(122)] = 3701,
  [SMALL_STATE(123)] = 3718,
  [SMALL_STATE(124)] = 3735,
  [SMALL_STATE(125)] = 3752,
  [SMALL_STATE(126)] = 3769,
  [SMALL_STATE(127)] = 3786,
  [SMALL_STATE(128)] = 3803,
  [SMALL_STATE(129)] = 3820,
  [SMALL_STATE(130)] = 3837,
  [SMALL_STATE(131)] = 3852,
  [SMALL_STATE(132)] = 3869,
  [SMALL_STATE(133)] = 3886,
  [SMALL_STATE(134)] = 3903,
  [SMALL_STATE(135)] = 3920,
  [SMALL_STATE(136)] = 3934,
  [SMALL_STATE(137)] = 3946,
  [SMALL_STATE(138)] = 3960,
  [SMALL_STATE(139)] = 3968,
  [SMALL_STATE(140)] = 3982,
  [SMALL_STATE(141)] = 3994,
  [SMALL_STATE(142)] = 4008,
  [SMALL_STATE(143)] = 4022,
  [SMALL_STATE(144)] = 4036,
  [SMALL_STATE(145)] = 4050,
  [SMALL_STATE(146)] = 4064,
  [SMALL_STATE(147)] = 4076,
  [SMALL_STATE(148)] = 4090,
  [SMALL_STATE(149)] = 4104,
  [SMALL_STATE(150)] = 4112,
  [SMALL_STATE(151)] = 4126,
  [SMALL_STATE(152)] = 4140,
  [SMALL_STATE(153)] = 4152,
  [SMALL_STATE(154)] = 4162,
  [SMALL_STATE(155)] = 4176,
  [SMALL_STATE(156)] = 4190,
  [SMALL_STATE(157)] = 4204,
  [SMALL_STATE(158)] = 4216,
  [SMALL_STATE(159)] = 4226,
  [SMALL_STATE(160)] = 4237,
  [SMALL_STATE(161)] = 4248,
  [SMALL_STATE(162)] = 4259,
  [SMALL_STATE(163)] = 4270,
  [SMALL_STATE(164)] = 4281,
  [SMALL_STATE(165)] = 4292,
  [SMALL_STATE(166)] = 4301,
  [SMALL_STATE(167)] = 4312,
  [SMALL_STATE(168)] = 4323,
  [SMALL_STATE(169)] = 4334,
  [SMALL_STATE(170)] = 4343,
  [SMALL_STATE(171)] = 4354,
  [SMALL_STATE(172)] = 4365,
  [SMALL_STATE(173)] = 4376,
  [SMALL_STATE(174)] = 4387,
  [SMALL_STATE(175)] = 4398,
  [SMALL_STATE(176)] = 4409,
  [SMALL_STATE(177)] = 4420,
  [SMALL_STATE(178)] = 4431,
  [SMALL_STATE(179)] = 4442,
  [SMALL_STATE(180)] = 4453,
  [SMALL_STATE(181)] = 4464,
  [SMALL_STATE(182)] = 4471,
  [SMALL_STATE(183)] = 4482,
  [SMALL_STATE(184)] = 4491,
  [SMALL_STATE(185)] = 4502,
  [SMALL_STATE(186)] = 4513,
  [SMALL_STATE(187)] = 4522,
  [SMALL_STATE(188)] = 4533,
  [SMALL_STATE(189)] = 4544,
  [SMALL_STATE(190)] = 4555,
  [SMALL_STATE(191)] = 4566,
  [SMALL_STATE(192)] = 4575,
  [SMALL_STATE(193)] = 4586,
  [SMALL_STATE(194)] = 4597,
  [SMALL_STATE(195)] = 4604,
  [SMALL_STATE(196)] = 4611,
  [SMALL_STATE(197)] = 4622,
  [SMALL_STATE(198)] = 4633,
  [SMALL_STATE(199)] = 4640,
  [SMALL_STATE(200)] = 4647,
  [SMALL_STATE(201)] = 4658,
  [SMALL_STATE(202)] = 4669,
  [SMALL_STATE(203)] = 4678,
  [SMALL_STATE(204)] = 4689,
  [SMALL_STATE(205)] = 4700,
  [SMALL_STATE(206)] = 4711,
  [SMALL_STATE(207)] = 4720,
  [SMALL_STATE(208)] = 4731,
  [SMALL_STATE(209)] = 4737,
  [SMALL_STATE(210)] = 4745,
  [SMALL_STATE(211)] = 4753,
  [SMALL_STATE(212)] = 4761,
  [SMALL_STATE(213)] = 4769,
  [SMALL_STATE(214)] = 4777,
  [SMALL_STATE(215)] = 4785,
  [SMALL_STATE(216)] = 4793,
  [SMALL_STATE(217)] = 4801,
  [SMALL_STATE(218)] = 4809,
  [SMALL_STATE(219)] = 4817,
  [SMALL_STATE(220)] = 4825,
  [SMALL_STATE(221)] = 4833,
  [SMALL_STATE(222)] = 4841,
  [SMALL_STATE(223)] = 4847,
  [SMALL_STATE(224)] = 4855,
  [SMALL_STATE(225)] = 4863,
  [SMALL_STATE(226)] = 4871,
  [SMALL_STATE(227)] = 4879,
  [SMALL_STATE(228)] = 4887,
  [SMALL_STATE(229)] = 4895,
  [SMALL_STATE(230)] = 4903,
  [SMALL_STATE(231)] = 4911,
  [SMALL_STATE(232)] = 4919,
  [SMALL_STATE(233)] = 4923,
  [SMALL_STATE(234)] = 4927,
  [SMALL_STATE(235)] = 4931,
  [SMALL_STATE(236)] = 4935,
  [SMALL_STATE(237)] = 4939,
  [SMALL_STATE(238)] = 4943,
  [SMALL_STATE(239)] = 4947,
  [SMALL_STATE(240)] = 4951,
  [SMALL_STATE(241)] = 4955,
  [SMALL_STATE(242)] = 4959,
  [SMALL_STATE(243)] = 4963,
  [SMALL_STATE(244)] = 4967,
  [SMALL_STATE(245)] = 4971,
  [SMALL_STATE(246)] = 4975,
  [SMALL_STATE(247)] = 4979,
  [SMALL_STATE(248)] = 4983,
  [SMALL_STATE(249)] = 4987,
  [SMALL_STATE(250)] = 4991,
  [SMALL_STATE(251)] = 4995,
  [SMALL_STATE(252)] = 4999,
  [SMALL_STATE(253)] = 5003,
  [SMALL_STATE(254)] = 5007,
  [SMALL_STATE(255)] = 5011,
  [SMALL_STATE(256)] = 5015,
  [SMALL_STATE(257)] = 5019,
  [SMALL_STATE(258)] = 5023,
  [SMALL_STATE(259)] = 5027,
  [SMALL_STATE(260)] = 5031,
  [SMALL_STATE(261)] = 5035,
  [SMALL_STATE(262)] = 5039,
  [SMALL_STATE(263)] = 5043,
  [SMALL_STATE(264)] = 5047,
  [SMALL_STATE(265)] = 5051,
  [SMALL_STATE(266)] = 5055,
  [SMALL_STATE(267)] = 5059,
  [SMALL_STATE(268)] = 5063,
  [SMALL_STATE(269)] = 5067,
  [SMALL_STATE(270)] = 5071,
  [SMALL_STATE(271)] = 5075,
  [SMALL_STATE(272)] = 5079,
  [SMALL_STATE(273)] = 5083,
  [SMALL_STATE(274)] = 5087,
  [SMALL_STATE(275)] = 5091,
  [SMALL_STATE(276)] = 5095,
  [SMALL_STATE(277)] = 5099,
  [SMALL_STATE(278)] = 5103,
  [SMALL_STATE(279)] = 5107,
  [SMALL_STATE(280)] = 5111,
  [SMALL_STATE(281)] = 5115,
  [SMALL_STATE(282)] = 5119,
  [SMALL_STATE(283)] = 5123,
  [SMALL_STATE(284)] = 5127,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(269),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(82),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(91),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2), SHIFT_REPEAT(148),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(62),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(21),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(60),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(61),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(85),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(85),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(92),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(118),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(130),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(130),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(161),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(162),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(166),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, .production_id = 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, .production_id = 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [767] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ledger_external_scanner_create(void);
void tree_sitter_ledger_external_scanner_destroy(void *);
bool tree_sitter_ledger_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ledger_external_scanner_serialize(void *, char *);
void tree_sitter_ledger_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ledger(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_ledger_external_scanner_create,
      tree_sitter_ledger_external_scanner_destroy,
      tree_sitter_ledger_external_scanner_scan,
      tree_sitter_ledger_external_scanner_serialize,
      tree_sitter_ledger_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
