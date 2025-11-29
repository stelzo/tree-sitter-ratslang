; Comments
(comment) @comment

; Strings and paths - same as Minot
(string) @string
(path) @string

; Unquoted strings (identifiers used as values) - use type like Minot's type_identifier
(unquoted_string 
  (identifier) @type)

; Literals
(boolean) @constant.builtin.boolean
(number) @constant.numeric

; Quantities (time and length) - same as Minot
(time_quantity) @constant.numeric
(length_quantity) @constant.numeric
(quantity) @constant.numeric

; Operators
"=" @operator
".." @operator
"," @operator
"." @operator

; Brackets and braces
"[" @punctuation.delimiter
"]" @punctuation.delimiter
"{" @punctuation.delimiter
"}" @punctuation.delimiter

; Variables - internal variables have priority (same as Minot)
(internal_variable) @variable.builtin

; Namespace blocks - all parts should be highlighted as namespace
(namespace_block
  (variable_path
    (namespace_identifier) @function.method))

(namespace_block
  (variable_path
    (variable_name) @function.method))

(namespace_block
  (variable_path
    (identifier) @function.method))

; Namespace parts in dotted notation (in assignments)
(namespace_identifier) @function.method

; Variable names (final part in dotted notation, in assignments)
(variable_name) @variable

; Default for other contexts (same as Minot)
(identifier) @variable

; Keywords for includes
(include) @keyword