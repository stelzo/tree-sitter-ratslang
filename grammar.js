/**
 * @file Configuration language for Robots
 * @author stelzo <stelzo@steado.de>
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

        // Quotes delimit raw strings; backslashes have no escape semantics.
        string: $ => token(/"[^"]*"/),

        // Like the compiler, an unquoted path extends to the next space/newline.
        path: $ => token(/\.?\/+[^ \n]*/),

        boolean: $ => choice(
            'true',
            'false'
        ),

        // Keep quantity tokens aligned with the compiler lexer.
        time_quantity: $ => token(/[+-]?(?:\d+\.\d+|\d+)(?:shakes?|years?|minutes?|hours?|days?|seconds?_sidereal|days?_sidereal|hours?_sidereal|years?_sidereal|years?_tropical|ys|zs|as|fs|ps|ns|us|µs|ms|cs|ds|s|das|hs|ks|Ms|Gs|Ts|Ps|Es|Zs|Ys|min|h|d|a)/),

        length_quantity: $ => token(/[+-]?(?:\d+\.\d+|\d+)(?:astronomical_units?|nautical_miles?|light_years?|microinches?|bohr_radiuses?|ångströms?|astronomical_unit|nautical_mile|light_year|microinch|bohr_radius|ångström|angstroms?|angstrom|feet|inches|yards|miles|chains|rods|fathoms?|fermis?|fermi|microns?|micron|mils?|ym|zm|am|fm|pm|nm|um|µm|mm|cm|dm|dam|hm|km|Mm|Gm|Tm|Pm|Em|Zm|Ym|ft|in|mi|yd|ch|rd|ua|au|pc|l\.y\.|Å|µ|μm|m)/),

        mass_quantity: $ => token(/[+-]?(?:\d+\.\d+|\d+)(?:milligrams?|micrograms?|nanograms?|kilograms?|grams?|tonnes?|metric_ton|pounds?|ounces?|lb|oz|yg|zg|ag|fg|pg|ng|ug|µg|μg|mg|cg|dg|dag|hg|kg|Mg|Gg|Tg|Pg|Eg|Zg|Yg|g|t)/),

        angle_quantity: $ => token(/[+-]?(?:\d+\.\d+|\d+)(?:deg|rad|mrad|urad|µrad)/),

        frequency_quantity: $ => token(/[+-]?(?:\d+\.\d+|\d+)(?:mHz|Hz|kHz|MHz|GHz)/),

        velocity_quantity: $ => token(/[+-]?(?:\d+\.\d+|\d+)(?:m\/s|cm\/s|mm\/s|km\/h)/),

        acceleration_quantity: $ => token(/[+-]?(?:\d+\.\d+|\d+)(?:m\/s2|m\/s\^2|cm\/s2|cm\/s\^2|mm\/s2|mm\/s\^2)/),

        quantity: $ => choice(
            $.time_quantity,
            $.length_quantity,
            $.mass_quantity,
            $.angle_quantity,
            $.frequency_quantity,
            $.velocity_quantity,
            $.acceleration_quantity
        ),

        number: $ => token(/[+-]?(\d+\.\d+|\d+)/),

        internal_variable: $ => /_[a-zA-Z_:\d]*/,

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
        unquoted_string: $ => seq(
            choice($.identifier, $.internal_variable),
            repeat(seq('.', choice($.identifier, $.internal_variable)))
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
