; Block textobjects
(block) @class.around

; Namespace block textobjects
(namespace_block) @function.around
(namespace_block
  (block) @function.inside)

; Assignment textobjects
(assignment) @class.around

; Array textobjects
(array) @parameter.around

; String textobjects
(string) @parameter.inside
