# tree-sitter-ratslang

Tree-sitter grammar and editor queries for
[Ratslang](https://codeberg.org/stelzo/ratslang).

For language syntax, units, constraints, and editor/LSP setup, see the
[Ratslang README](https://codeberg.org/stelzo/ratslang#editor-support), including
[Helix](https://codeberg.org/stelzo/ratslang#helix),
[Neovim](https://codeberg.org/stelzo/ratslang#neovim), and
[VS Code](https://codeberg.org/stelzo/ratslang#vs-code).

## Development

Use Node.js, a C compiler, Rust 1.90 or newer with Cargo, and tree-sitter-cli 0.27.1. Generate ABI 14
parsers for compatibility with Helix and Neovim:

```sh
cargo install tree-sitter-cli --version 0.27.1 --locked
tree-sitter generate --abi 14
cargo test
```

Check in `src/parser.c`, `src/grammar.json`, and `src/node-types.json` after a
grammar change. Rust tests exercise complete quantity tokens, arrays/ranges,
comment annotations, references, raw strings, and all editor queries.

## License

MIT
