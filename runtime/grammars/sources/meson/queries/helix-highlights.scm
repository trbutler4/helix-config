; highlights.scm
;
; Copyright 2022 Staysail Systems, Inc.
;
; Distributed under the MIT License.
; (See accompanying file LICENSE.txt or https://opensource.org/licenses/MIT)
; SPDX-License-Identifier: MIT
;
; These highlights are quite generic for the default Tree-sitter theme.
;
(comment) @comment

; these are listed first, because they override keyword queries
(function_expression (identifier) @function)

[
    (assignment_operator)
    (additive_operator)
    (multiplicative_operator)
    (equality_operator)
    ">="
    "<="
    "<"
    ">"
    "+"
    "-"
] @operator

[
    (and)
    (or)
    (not)
    (in)
] @keyword.operator

[
    "(" ")" "[" "]" "{" "}"
] @punctuation.bracket

[
    (if)
    (elif)
    (else)
    (endif)
] @keyword.control.conditional

[
    (foreach)
    (endforeach)
    (break)
    (continue)
] @keyword.control.repeat

(boolean_literal) @constant.builtin.boolean
(int_literal) @constant.numeric.integer

(keyword_argument keyword: (identifier) @variable.parameter)
(escape_sequence) @string.special
(bad_escape) @warning

[
"."
","
":"
] @punctuation.delimiter

[
    (string_literal)
    (fstring_literal)
] @string

(identifier) @variable.other

