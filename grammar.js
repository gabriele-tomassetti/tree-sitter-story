/**
 * @file A language to tell stories
 * @author Gabriele Tomassetti <gabriele@strumenta.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "story",

  word: $ => $.identifier,
  supertypes: $ => [],

  rules: {
    source_file: $ => seq(
      $.title,
      optional($.characters),
      optional($.inputs),
      optional($.constraints),
      optional($.text),
      optional($.question)
    ),

    title: $ => seq(
      'title', ':', $.string
    ),

    characters: $ => seq(
      'characters', ':', field("people", $._list)
    ),

    _list: $ => seq(
      $.identifier,
        repeat(seq(",", $.identifier))
    ),

    inputs: $ => seq(
      'inputs', ':', $._list
    ),

    constraints: $ => seq(
      'constraints', ':', $._expression
    ),

    text: $ => seq(
        'story', ':', $.string
    ),

    interpolation: $ => seq(
      '{', $.identifier, '}'
    ),

    _inner: $ => choice(
      field("text", token(/[ \r\n\.\,\?a-zA-Z]+/)),
      field("vars", $.interpolation)
    ),

    spaces: $ => /[ \r\n\.\,\?a-zA-Z]+/,

    string: $ => seq(
      '"', repeat1(
        $._inner
      ) , '"'
    ),

    _expression: $ => choice(
      prec(1, seq('(', $._expression, ')')),
      $.identifier,
      $.number,
      $.binary_expression
    ),

    binary_expression: $ =>
      choice(
        prec.left(2, seq($._expression, ">", $._expression)),
        prec.left(2, seq($._expression, "<", $._expression)),
        prec.left(3, seq($._expression, "/", $._expression)),
        prec.left(3, seq($._expression, "*", $._expression)),
        prec.left(4, seq($._expression, "+", $._expression)),
        prec.left(4, seq($._expression, "-", $._expression)),
      ),

    question: $ => seq(
      'question', ':', $.string,
      ':', $._expression
    ),

    identifier: $ => /[a-zA-Z]+/,

    number: $ => /\d+/
  }  
});

