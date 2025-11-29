; Comments
(comment) @comment

; Strings and paths
(string) @string
(path) @string

; Unquoted strings (identifiers used as values) - use type
(unquoted_string 
  (identifier) @type)

; Literals
(boolean) @constant.builtin.boolean
(number) @constant.numeric

; Quantities (time and length)
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

; Namespace blocks: identifier { ... }
; When used in namespace blocks, ALL segments (including the last) are namespaces
; These rules must come BEFORE the general path rules to take precedence
(namespace_block
  (identifier) @namespace)
(namespace_block
  (internal_variable) @namespace)

(namespace_block
  (variable_path
    (namespace_segment_identifier) @namespace))
(namespace_block
  (variable_path
    (namespace_segment_internal) @namespace))
(namespace_block
  (variable_path
    (path_last_identifier) @namespace))
(namespace_block
  (variable_path
    (path_last_internal) @namespace))

; Namespace highlighting for dotted paths
; Namespace segments (middle parts) are always namespaces regardless of _ prefix
(namespace_segment_identifier) @namespace
(namespace_segment_internal) @namespace

; Final segments in variable paths (only when NOT in namespace_block)
(path_last_internal) @variable.builtin
(path_last_identifier) @variable

; Internal variables are builtin when used standalone (not in a path)
(internal_variable) @variable.builtin

; Normal identifiers (fallback for non-dotted usage)
(identifier) @variable

; Keywords for includes
(include) @keyword