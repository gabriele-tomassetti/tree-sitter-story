/**
 * @file A language to tell stories
 * @author Gabriele Tomassetti <gabriele@strumenta.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "story",
  
  /*conflicts: $ => [
    [$.line],
  ],*/

  word: $ => $.identifier,

  rules: {
    source_file: $ => seq(
      $.title,
      $.characters,
      $.inputs,
      $.constraints,
      $.text,
      $.question
    ),

    title: $ => seq(
      'title', ':', $.string
    ),

    characters: $ => seq(
      'characters', ':', $._list
    ),

    _list: $ => seq(
      $.identifier,
      optional(seq(
        repeat(seq(",", $.identifier))
      )),
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
      //token(/[a-zA-Z]+/),
      $.identifier,
      $.spaces,
      $.interpolation
    ),

    spaces: $ => /[] \r\n\.\,\?]+/,

    string: $ => seq(
      '"', repeat1(
        $._inner
      ) , '"'
    ),

    //just_string: $ => /"[^"]"/,

    _expression: $ => choice(
      prec.left(4, seq('(', $._expression, ')')),
      $.identifier,
      $.number,
      $.binary_expression
    ),

    binary_expression: $ =>
      choice(
        prec.left(3, seq($._expression, ">", $._expression)),
        prec.left(3, seq($._expression, "<", $._expression)),
        prec.left(2, seq($._expression, "/", $._expression)),
        prec.left(2, seq($._expression, "*", $._expression)),
        prec.left(1, seq($._expression, "+", $._expression)),
        prec.left(1, seq($._expression, "-", $._expression)),
      ),

    question: $ => seq(
      'question', ':', $.string,
      ':', $._expression
    ),

    identifier: $ => /[a-zA-Z]+/,

    number: $ => /\d+/

    /*parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')'
    ),

    _type: $ => choice(
      'bool'
      // TODO: other kinds of types
    ),

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.return_statement
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

   */

  }  
});

