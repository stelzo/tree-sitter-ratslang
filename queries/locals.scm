; Scopes
(namespace_block) @local.scope
(block) @local.scope

; Definitions
(assignment
  (variable_path) @local.definition)

; References
(variable_path) @local.reference
