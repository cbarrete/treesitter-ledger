module.exports = grammar({
    name: 'ledger',

    extras: $ => [],

    externals: $ => [
        $._pure_note,
        $.tag_name,
    ],

    inline: $ => [
        $.indented_line,
        $.spacer,
        $.whitespace,
    ],

    rules: {
        source_file: $ => repeat(choice($.journal_item, '\n')),

        journal_item: $ => choice(
            $.comment,
            $.directive,
            $.xact,
        ),

        comment: $ => seq(choice(';', '*'), /.*\n/),

        indented_line: $ => seq($.whitespace, /[^\n]+\n/),

        // ! and @ are deprecated, let's not take them into account
        directive: $ => choice(
            $.account_directive,
            $.commodity_directive,
            $.tag_directive,
            seq($.word_directive, '\n'),
            seq($.char_directive, '\n'),
        ),

        account_directive: $ => seq(
            seq('account', $.whitespace, $.account, '\n'),
            repeat($.account_subdirective),
        ),

        account_subdirective: $ => choice(
            $.alias_subdirective,
            $.default_subdirective,
            $.note_subdirective,
            $.assert_subdirective,
            $.check_subdirective,
            argumentDirective($, 'eval'),
            argumentDirective($, 'payee'),
        ),

        commodity_directive: $ => seq(
            seq('commodity', $.whitespace, $.commodity, '\n'),
            repeat($.commodity_subdirective),
        ),

        commodity_subdirective: $ => choice(
            $.alias_subdirective,
            $.default_subdirective,
            $.format_subdirective,
            $.note_subdirective,
            singleKeywordDirective($, 'nomarket'),
        ),

        tag_directive: $ => seq(
            seq('tag', $.whitespace, /\p{L}+\n/),
            repeat(choice(
                $.assert_subdirective,
                $.check_subdirective,
            )),
        ),

        word_directive: $ => choice(
            seq(
                'include',
                $.whitespace,
                $.filename,
            ),
            'end',
            seq('alias', $.whitespace, /[^=]+/, '=', /.+/),
            seq(
                'def',
                $.whitespace,
                /.+/,
            ),
            seq(
                'year',
                $.whitespace,
                /\d{4}/,
            ),
            seq(
                'bucket',
                $.whitespace,
                $.account,
            ),
        ),

        filename: $ => /.+/,

        char_directive: $ => choice(
            // timeclock.el
            $.check_in,
            $.check_out,

            seq('A', $.whitespace, $.account),
            seq('Y', $.whitespace, /\d{4}/),
            seq('N', $.whitespace, $.commodity),
            seq('D', $.whitespace, $.amount),
            seq('C', $.whitespace,
                seq($.commodity,
                    optional($.whitespace), '=',
                    optional($.whitespace),
                    $.amount)),
            seq(
                'P',
                $.whitespace,
                seq(
                    $.date,
                    $.whitespace,
                    $.commodity,
                    optional($.whitespace),
                    $.amount,
                ),
            )
        ),

        alias_subdirective: $ => argumentDirective($, 'alias'),

        default_subdirective: $ => singleKeywordDirective($, 'default'),

        format_subdirective: $ => seq(
            $.whitespace,
            'format',
            $.whitespace,
            $.amount,
        ),

        note_subdirective: $ => argumentDirective($, 'note'),

        assert_subdirective: $ => argumentDirective($, 'assert'),

        // TODO actually should be have a boolean expression in there
        check_subdirective: $ => argumentDirective($, 'check'),

        check_in: $ => seq(choice('i', 'I'),
            optional($.whitespace),
            $.date,
            optional($.whitespace),
            $.time,
            optional($.whitespace),
            $.account,
            optional(
                seq($.spacer,
                optional($.whitespace),
                $.payee),
            ),
        ),

        check_out: $ => seq(choice('o', 'O'),
            optional($.whitespace),
            $.date,
            optional($.whitespace),
            $.time),

        xact: $ => choice(
            $.plain_xact,
            $.periodic_xact,
            // TODO $.automated_xact,
        ),

        // TODO note opt
        plain_xact: $ => createXact($,
            seq($.date,
                optional(seq($.whitespace, $.status)),
                optional(seq($.whitespace, $.code)),
                optional(seq($.whitespace, $.payee)),
                '\n'),
            ),

        periodic_xact: $ => createXact($, seq('~', $.whitespace, $.interval, '\n')),

        interval: $ => {
            ci = s => new RegExp(caseInsensitive(s))
            ciNum = s => new RegExp(caseInsensitive('every') + ' \\d+ ' + caseInsensitive(s))
            return choice(
                ci('every day'),
                ci('every week'),
                ci('every month'),
                ci('every quarter'),
                ci('every year'),
                ciNum('days'),
                ciNum('weeks'),
                ciNum('months'),
                ciNum('quarters'),
                ciNum('years'),
                ci('daily'),
                ci('weekly'),
                ci('biweekly'),
                ci('monthly'),
                ci('bimonthly'),
                ci('quarterly'),
                ci('yearly'),
            )
        },

        // date, optionally with an effective date, e.g.:
        // 2020-01-01
        // 2020/01/01=2020.01-02
        date: $ => seq($._single_date, optional(seq('=', $._single_date))),

        _single_date: $ => /\d{4}[-\.\/]\d{2}[-\.\/]\d{2}/,

        time: $ => /\d{2}:\d{2}:\d{2}/,

        status: $ => choice('*', '!'),

        code: $ => seq('(', /[^)]*/, ')'),

        payee: $ => /[^(*!\n][^*!\n]*/,

        // note: $ => seq(';', /.*/),
        note: $ => seq(';', choice($.tag_name, $._pure_note)),

        posting: $ => seq(
            $.whitespace,
            optional(seq($.status, optional($.whitespace))),
            $.account,
            optional(seq(
                $.spacer,
                optional(seq(optional($.whitespace), $.amount)),
                optional(seq(optional($.whitespace), $.price)),
                optional(seq(optional($.whitespace), $.balance_assertion)),
                optional(seq(optional($.whitespace), $.note)),
            )),
            '\n'),

        account: $ => alias(choice(
            $.account_name,
            seq('(', $.account_name, ')'),
            seq('[', $.account_name, ']'),
        ), ''),

        account_name: $ => /[^ ;](\S \S|\S)*/,

        amount: $ => choice(
            seq(
                $.quantity,
                optional($.whitespace),
                $.commodity),
            seq(
                $.commodity,
                optional($.whitespace),
                $.quantity),
        ),

        quantity: $ => seq(
            optional('-'), /\d([\d., ]*\d)?/,
        ),

        commodity: $ => choice(/\p{L}+/, /\p{Sc}/, /"[^"\n]*"/),

        price: $ => seq(
            choice('@', '@@'),
            optional($.whitespace),
            $.amount,
        ),

        balance_assertion: $ => seq(
            '=',
            optional($.whitespace),
            choice($.amount),
        ),

        whitespace: $ => repeat1(choice(' ', '\t')),

        spacer: $ => choice('  ', '\t', ' \t'),
    }
})

function createXact($, first_line) {
    return seq(
        first_line,
        repeat1(
            choice(
                $.posting,
                seq($.whitespace, $.note, '\n'))),
    );
}

function caseInsensitive(input) {
    return input
        .split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
}

function argumentDirective($, argument) {
    return seq(
            $.whitespace,
            argument,
            $.whitespace,
            /.+\n/,
    )
}

function singleKeywordDirective($, keyword) {
    return seq(
            $.whitespace,
            keyword,
            '\n',
    )
}
