
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}

const PREC = {
    compare : 2,
    and: 3,
    or: 4,
    xor: 5,
    additive: 6,
    multiplicative: 7,
    unary: 8,
    namespace_path : 9
}

module.exports = grammar({
    name: 'sus',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat($.module),

        module: $ => seq(
            'module',
            $.identifier,
            ':',
            commaSep($.declaration),
            '->',
            commaSep($.declaration),
            $.block
        ),
        identifier: $ => /[\p{L}_][\p{L}_\d]*/,
        number: $ => /\d[\d_]*/,

        global_identifier: $ => prec.left(PREC.namespace_path, seq(
            optional("::"),
            $.identifier,
            repeat(seq(
                "::",
                $.identifier
            ))
        )),

        type: $ => seq(
            $.global_identifier,
            repeat(seq(
                '[',
                $._expression,
                ']'
            ))
        ),     

        assignable_expr: $ => seq(
            $.identifier,
            repeat(seq(
                '[',
                $._expression,
                ']'
            ))
        ),

        declaration: $ => seq(
            optional(choice(
                'state',
                'gen'
            )),
            $.type,
            $.identifier
        ),

        unary_op: $ => prec(PREC.unary, seq(
            choice('+', '-', '*', '!', '|', '&', '^'),
            $._expression
        )),

        binary_op: $ => {
            const TABLE = [
                [PREC.compare, choice('==', '!=', '<', '<=', '>', '>=')],
                [PREC.and, '&'],
                [PREC.or, '|'],
                [PREC.xor, '^'],
                [PREC.additive, choice('+', '-')],
                [PREC.multiplicative, choice('*', '/', '%')],
            ];

            return choice(...TABLE.map(([precedence, operator]) => prec.left(precedence, seq(
                $._expression,
                operator,
                $._expression
            ))));
        },

        func_call: $ => seq(
            choice(
                $.identifier,
                $.global_identifier
            ),
            '(',
            commaSep($._expression),
            ')'
        ),

        _expression: $ => choice(
            $.assignable_expr,
            $.global_identifier,
            $.number,
            seq('(', $._expression, ')'),
            $.unary_op,
            $.binary_op,
            $.func_call
        ),

        range: $ => seq(
            $._expression,
            '..',
            $._expression
        ),
        
        block: $ => seq(
            '{',
            repeat($._statement),
            '}'
        ),
        
        _assign_left_side: $ => commaSep1(seq(
            choice(
                repeat('reg'),
                'initial'
            ),
            choice(
                $.assignable_expr,
                $.declaration
            )
        )),
        decl_assign_statement: $ => seq(
            $._assign_left_side,
            '=',
            $._expression,
            ';'
        ),
        decl_statement: $ => seq(
            $.declaration,
            ';'
        ),
        expression_statement: $ => seq(
            $._expression,
            ';'
        ),
        if_statement: $ => seq(
            'if',
            $._expression,
            $.block,
            optional(seq(
                'else',
                choice(
                    $.block,
                    $.if_statement
                )
            ))
        ),
        for_statement: $ => seq(
            'for',
            $.declaration,
            'in',
            $.range,
            $.block
        ),
        _statement: $ => choice(
            $.block,
            $.decl_assign_statement,
            $.decl_statement,
            $.expression_statement,
            $.if_statement,
            $.for_statement
        ),


        single_line_comment: $ => /\/\/[^\n]*\n/,
        multi_line_comment: $ => /\/\*[^\*]*\*+([^\/\*][^\*]*\*+)*\//,
    },

    extras: $ => [
        /\s+/,
        $.single_line_comment,
        $.multi_line_comment
    ]
});
