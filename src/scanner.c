#pragma once

#include <tree_sitter/parser.h>

enum TokenType {
    PURE_NOTE,
};

void *tree_sitter_ledger_external_scanner_create() {
    return NULL;
}

void tree_sitter_ledger_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_ledger_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_ledger_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_ledger_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (!valid_symbols[PURE_NOTE]) {
        return false;
    }

    while (lexer->lookahead != (int32_t)'\n' && lexer->lookahead != 0) {
        lexer->advance(lexer, false);
    }
    lexer->result_symbol = PURE_NOTE;
    return true;
}
