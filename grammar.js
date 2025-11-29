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

        // Namespace identifier (used for namespace parts in dotted notation)
        namespace_identifier: $ => alias($.identifier, 'namespace_identifier'),

        // Variable name (the final identifier in a path)
        variable_name: $ => alias($.identifier, 'variable_name'),

        // Namespaced variable path (e.g., my.super.long.prefix.var or _internal)
        variable_path: $ => choice(
            $.internal_variable,
            // Single identifier
            $.identifier,
            // Dotted path with 2+ parts: first parts are namespace, last is variable
            seq(
                $.namespace_identifier,
                repeat(seq('.', $.namespace_identifier)),
                '.',
                choice($.variable_name, $.internal_variable)
            )
        ),

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
                // Multiple LHS: a, b, c = 1, 2, 3
                seq(
                    $.variable_path,
                    repeat1(seq(',', $.variable_path))
                )
            ),
            '=',
            $.rhs_values
        ),

        // Namespace block: namespace { ... }
        namespace_block: $ => seq(
            $.variable_path,
            $.block
        ),

        statement: $ => choice(
            $.include,
            $.assignment,
            $.namespace_block
        )
    }
});
