# ReScript grammar for Tree-sitter

This reposity is a fork of https://github.com/nkrkv/tree-sitter-rescript. That repo doesn't commit the generated tree-sitter code, which some projects need. This repo should be the same as the original, only with that generated code committed.

## About


This repository contains a parser definition of the [ReScript](https://rescript-lang.org/) language for the [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) parser generator tool.

Athough Tree-sitter has many applications, the main intent of this parser is powering the [`nvim-treesitter-rescript`](https://github.com/nkrkv/nvim-tree-sitter-rescript/) NeoVim plugin which may be used to improve development experience in the NeoVim + ReScript combo.

Queries for text objects are also included which help you to navigate, select, and modify ReScript code syntactically. For NeoVim, the [`nvim-treesitter-textobjects`](https://github.com/nvim-treesitter/nvim-treesitter-textobjects) plugin is required to use Tree-sitter text objects.

## Installation

- If you want ReScript Tree-sitter in NeoVim, refer to [`nvim-treesitter-rescript`](https://github.com/nkrkv/nvim-tree-sitter-rescript/) installation notes;
- If you want it for other purposes, you probably know what to do.

## Contributing

Contributions are welcome. Here’s how you can help:

🙂 Provide a minimal ReScript snippet which produces an `(ERROR)` node or otherwise incorrect syntax tree. Open a new issue providing this snippet and the resulting syntax tree. You can use the following command to see the syntax tree:

```bash
yarn tree-sitter parse /path/to/your/snippet.res
```

🤩 Add a failing test case for a snippet which is valid ReScript but produces an incorrect syntax tree. Fix the `grammar.js`. Make sure nothing is broken: `make test test_wild` shows 100% test success. Open a pull request.
