#pragma once

#include <tree_sitter/parser.h>

enum TokenType {
    PURE_NOTE,
    TAG_NAME,
    TAG_VALUE,
};

void *tree_sitter_ledger_external_scanner_create() {
    return NULL;
}

void tree_sitter_ledger_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_ledger_external_scanner_serialize(void *payload, char *buffer) {
    return 0;
}

void tree_sitter_ledger_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool ws(TSLexer *lexer) {
    return lexer->lookahead == ' ' || lexer->lookahead == '\t';
}

bool eol(TSLexer *lexer) {
    return lexer->lookahead == '\n' || lexer->lookahead == 0;
}

bool parse_pure_note(TSLexer *lexer) {
    while (!eol(lexer)) {
        lexer->advance(lexer, false);
    }
    lexer->result_symbol = PURE_NOTE;
    return true;
}

bool tree_sitter_ledger_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (!valid_symbols[PURE_NOTE] || !valid_symbols[TAG_NAME]) {
        puts("PLEASE REPORT: WE SHOULD EXPECT THEM IN THE SAME PLACES");
        exit(1);
    }

    while (ws(lexer)) {
        lexer->advance(lexer, true);
    }

    if (lexer->lookahead != ':') {
        return parse_pure_note(lexer);
    }

    lexer->advance(lexer, false);
    while (1) {
        if (eol(lexer)) {
            // hit the end while waiting for something: it's just text
            lexer->result_symbol = PURE_NOTE;
            return true;
        }
        if (lexer->lookahead == ' ') {
            // it's just text: keep going until the end
            return parse_pure_note(lexer);
        }
        if (lexer->lookahead == ':') {
            lexer->advance(lexer, false);
            lexer->result_symbol = TAG_NAME;
            return true;
        }
        lexer->advance(lexer, false);
    }
}
