/*
 * grammar.js
 * Copyright (C) 2020 Stephan Seitz <stephan.seitz@fau.de>
 *
 * Distributed under terms of the GPLv3 license.
 */



    //{% ... %} for Statements

    //{{ ... }} for Expressions to print to the template output

    //{# ... #} for Comments not included in the template output

//valid:

//{%- if foo -%}...{% endif %}

//invalid:

//{% - if foo - %}...{% endif %}

module.exports = grammar ({
  name: 'jinja2',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($._node),

    _text: $ => choice(/[^{#%}]+/, $._not),
    _not: $ => choice(/[{]([^{#%]|)/, /([^}#%]|)[}]/, /([^{]|)#([^}]|)/, /([^{]|)%([^}]|)/),

    _node: $ => choice($.statement, $.expression, $.comment, $._text),

    statement: $ => seq($.statement_begin, $.keyword, optional($._inner_text), $.statement_end),
    statement_begin: $ => seq('{%', optional($.white_space_control)),
    statement_end: $ => seq(optional($.white_space_control), '%}'),

    expression: $ => seq('{{', /[^}]*/, '}}'),

    comment: $ => seq('{#', /[^#]*/, '#}'),

    keyword: $ => choice('for', 'in', 'endfor', 'if', 'and', 'or', 'endif', 'else', 'elif', 'raw', 'endraw', 'macro', 'endmacro', 'extends', 'block', 'endblock', 'call', 'endcall', 'filter', 'endfilter', 'set', 'endset', 'include', 'import', 'from', 'autoescape', 'endautoescape', 'trans', 'endtrans', 'pluralize', 'with', 'endwith', 'debug', 'do'),
    white_space_control: $ => /[-+]/,
    _white_space: $ => /\s+/,

    _inner_text: $ => repeat1(choice($.keyword, $.identifier, $._white_space, $.operator, $.string)),

    identifier: $ => /[\w_]+/,
    operator: $ => /[^\w_{#%}'"]+/,
    string: $ => /['"][^'"]*['"]/,
  }
});
