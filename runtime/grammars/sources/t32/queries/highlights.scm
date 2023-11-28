; Operators in command and conditional HLL expressions
(hll_comma_expression
  "," @operator)

(hll_conditional_expression
  [
   "?"
   ":"
] @conditional.ternary)


; Keywords, punctuation and operators
[
  "enum"
  "struct"
  "union"
] @keyword

"sizeof" @keyword.operator

[
  "const"
  "volatile"
] @type.qualifier

[
  "="
  "^^"
  "||"
  "&&"
  "+"
  "-"
  "*"
  "/"
  "%"
  "|"
  "^"
  "=="
  "!="
  ">"
  ">="
  "<="
  "<"
  "<<"
  ">>"
  ".."
  "--"
  "++"
  "+"
  "-"
  "~"
  "!"
  "&"
  "->"
  "*"
  "-="
  "+="
  "*="
  "/="
  "%="
  "|="
  "&="
  "^="
  ">>="
  "<<="
  "--"
  "++"
] @operator

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

[
  ","
  "."
] @punctuation.delimiter


; Strings and others literal types
(access_class) @constant.builtin

[
  (address)
  (bitmask)
  (file_handle)
  (integer)
  (hll_number_literal)
] @number

[
  (float)
  (frequency)
  (percentage)
  (time)
] @float

[
  (string)
  (hll_string_literal)
] @string

(hll_escape_sequence) @string.escape

(path) @string.special
(symbol) @string.special

[
  (character)
  (hll_char_literal)
] @character


; Types in HLL expressions
[
  (hll_type_identifier)
  (hll_type_descriptor)
] @type

(hll_type_qualifier) @type.qualifier

(hll_primitive_type) @type.builtin


; HLL call expressions
(hll_call_expression
  function: (hll_field_expression
    field: (hll_field_identifier) @function.call))

(hll_call_expression
  function: (identifier) @function.call)


; Returns
(
  (command_expression
    command: (identifier) @keyword.return)
  (#match? @keyword.return "^[eE][nN][dD]([dD][oO])?$")
)
(
  (command_expression
    command: (identifier) @keyword.return)
  (#match? @keyword.return "^[rR][eE][tT][uU][rR][nN]$")
)


; Subroutine calls
(subroutine_call_expression
  command: (identifier) @keyword
  subroutine: (identifier) @function.call)


; Subroutine blocks
(subroutine_block
  command: (identifier) @keyword.function
  subroutine: (identifier) @function)

(labeled_expression
  label: (identifier) @function
  (block))


; Parameter declarations
(parameter_declaration
  command: (identifier) @keyword
  (identifier)? @constant.builtin
  macro: (macro) @variable.parameter)


; Variables, constants and labels
(macro) @variable.builtin
(trace32_hll_variable) @variable.builtin

(
  (command_expression
    command: (identifier) @keyword
    arguments: (argument_list . (identifier) @label))
  (#match? @keyword "^[gG][oO][tT][oO]$")
)
(labeled_expression
  label: (identifier) @label)

(option_expression
  (identifier) @constant.builtin)

(format_expression
  (identifier) @constant.builtin)

(
  (argument_list (identifier) @constant.builtin)
  (#match? @constant.builtin "^[%/][a-zA-Z][a-zA-Z0-9.]*$")
)
(argument_list
  (identifier) @constant.builtin)


; Commands
(command_expression command: (identifier) @keyword)
(macro_definition command: (identifier) @keyword)

(call_expression
  function: (identifier) @function.builtin)


; Control flow
(if_block
  command: (identifier) @conditional)
(else_block
  command: (identifier) @conditional)

(while_block
  command: (identifier) @repeat)
(repeat_block
  command: (identifier) @repeat)


; HLL variables
(identifier) @variable
(hll_field_identifier) @field


(comment) @comment
