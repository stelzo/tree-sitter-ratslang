/**
 * @file Configuration language for Robots
 * @author Christopher Sieh <stelzo@steado.de>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: 'ratslang',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    conflicts: $ => [
        [$.internal_variable, $.variable_path],
        [$.identifier, $.variable_path],
        [$.variable_path]
    ],

    rules: {
        source_file: $ => repeat($.statement),

        comment: $ => /#[^\n]*/,

        string: $ => seq(
            '"',
            repeat(choice(
                /[^"\\\n]+/,
                /\\./
            )),
            '"'
        ),

        // Matches paths starting with / or ./
        path: $ => token(/\.?\/+[^\n\s]*/),

        boolean: $ => choice(
            'true',
            'false'
        ),

        // Time quantities
        time_quantity: $ => token(seq(
            /[+-]?(\d+\.\d+|\d+)/,
            choice('hours', 'hour', 'mins', 'min', 's', 'ms')
        )),

        // Length quantities
        length_quantity: $ => token(seq(
            /[+-]?(\d+\.\d+|\d+)/,
            choice('mm', 'cm', 'm')
        )),

        quantity: $ => choice(
            $.time_quantity,
            $.length_quantity
        ),

        number: $ => token(/[+-]?(\d+\.\d+|\d+)/),

        internal_variable: $ => /_[a-zA-Z_:\d]+/,

        identifier: $ => /[a-zA-Z:][a-zA-Z_:\d]*/,

        // Namespaced variable path (2+ segments): middle parts are namespace segments,
        // final part is the last segment used for assignment/access
        namespace_segment_identifier: $ => prec(2, alias($.identifier, 'namespace_segment_identifier')),
        namespace_segment_internal: $ => prec(2, alias($.internal_variable, 'namespace_segment_internal')),

        path_last_identifier: $ => prec(1, alias($.identifier, 'path_last_identifier')),
        path_last_internal: $ => prec(1, alias($.internal_variable, 'path_last_internal')),

        // Unified dotted path: handles both 2-segment and 3+ segment dotted paths
        // Examples: _topic._a (2 segments), _topic.b.a (3 segments)
        // All segments except the last are namespace segments
        variable_path: $ => prec.dynamic(2, seq(
            choice(
                alias($.identifier, $.namespace_segment_identifier),
                alias($.internal_variable, $.namespace_segment_internal)
            ),
            repeat(seq(
                '.',
                choice(
                    alias($.identifier, $.namespace_segment_identifier),
                    alias($.internal_variable, $.namespace_segment_internal)
                )
            )),
            '.',
            choice(
                alias($.identifier, $.path_last_identifier),
                alias($.internal_variable, $.path_last_internal)
            )
        )),

        // Unquoted string (identifier used as a value, not a variable reference)
        unquoted_string: $ => choice(
            $.identifier,
            seq(
                $.identifier,
                repeat1(seq('.', $.identifier))
            )
        ),

        operator: $ => choice(
            '=', '..', ','
        ),

        // Range expressions
        range: $ => choice(
            // Bounded range: value..value
            seq(
                choice($.quantity, $.number),
                '..',
                choice($.quantity, $.number)
            ),
            // Lower bounded: value..
            seq(
                choice($.quantity, $.number),
                '..'
            ),
            // Upper bounded: ..value
            seq(
                '..',
                choice($.quantity, $.number)
            ),
            // Empty range: ..
            '..'
        ),

        // Array literal with brackets
        array: $ => seq(
            '[',
            optional(seq(
                $.rhs_value,
                repeat(seq(
                    ',',
                    optional(/\n/),
                    $.rhs_value
                )),
                optional(',')
            )),
            ']'
        ),

        // Right-hand side value
        rhs_value: $ => choice(
            $.range,
            $.quantity,
            $.number,
            $.string,
            $.boolean,
            $.path,
            $.unquoted_string,
            $.array
        ),

        // Multiple RHS values separated by commas
        rhs_values: $ => seq(
            $.rhs_value,
            repeat(seq(',', $.rhs_value))
        ),

        // Block structure with braces
        block: $ => seq(
            '{',
            repeat($.statement),
            '}'
        ),

        // Include statement: = ./path.rl
        include: $ => seq(
            '=',
            $.path
        ),

        // Variable assignment: lhs = rhs
        assignment: $ => seq(
            choice(
                $.variable_path,
                $.identifier,
                $.internal_variable,
                // Multiple LHS: a, b, c = 1, 2, 3
                seq(
                    choice($.variable_path, $.identifier, $.internal_variable),
                    repeat1(seq(',', choice($.variable_path, $.identifier, $.internal_variable)))
                )
            ),
            '=',
            $.rhs_values
        ),

        // Namespace block: namespace { ... }
        // Unlike Minot, no dot before the block: namespace.path { ... }
        namespace_block: $ => prec(4, seq(
            choice($.variable_path, $.identifier, $.internal_variable),
            $.block
        )),

        statement: $ => choice(
            $.include,
            $.assignment,
            $.namespace_block
        )
    }
});
