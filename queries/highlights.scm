(identifier) @variable

((identifier) @function.method
 (#is-not? local))

[
  "title"
  "characters"
  "inputs"
  "constraints"
  "story"
  "question"
] @keyword

((identifier) @keyword
 (#match? @keyword "^(private|protected|public)$"))

; Identifiers

; Literals

[
  (string)
] @string

[
  (number)
] @number

(interpolation
  "{" @punctuation.special
  "}" @punctuation.special) @embedded

; Operators

[
  ","
  ":"
] @punctuation.delimiter

[
  "("
  ")"
] @punctuation.bracket

[
  ">"
  "<"
  "+"
  "*"
] @operator