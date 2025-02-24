# Incremental Parsing Using Tree-sitter

This repository contains a very simple language meant to show the basics of creating a Tree-sitter parser.

**You should read the article associated with this example on [Incremental Parsing Using Tree-sitter]([https://tomassetti.me/getting-started-with-roslyn-transforming-c-code/](https://tomassetti.me/incremental-parsing-using-tree-sitter/))**

To generate the parser from the grammar you need to run:

```
tree-sitter generate
```

You then need to compile the generated parser (in C) into a native library with:

```
tree-sitter build
```

This will allow you to run tests or parse a file.

```
tree-sitter test
tree-sitter parse example-file.story
```

If you want to check the parser in a web editor, you need to build the WebAssembly module and run the playground.


```
tree-sitter build --wasm
tree-sitter playground
```

To build the WebAssembly module you need to have Emscripten available in your `PATH` or Docker installed. In this second case tree-sitter will download the needed image and use a Docker container with Emscripten.
