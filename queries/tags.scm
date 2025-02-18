; Variable definition

(characters
    people: [
        (identifier) @name
    ]
) @definition.module

; Calls

(text 
    (string
         (interpolation
             (identifier) @name
         )
)) @reference.call