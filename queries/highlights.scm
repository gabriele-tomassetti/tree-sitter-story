(identifier) @variable

[
  "title"
  "characters"
  "inputs"
  "constraints"
  "story"
  "question"
] @keyword


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
  (identifier) @number
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