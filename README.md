# tree-sitter-ratslang

Tree-sitter grammar and editor queries for
[Ratslang](https://codeberg.org/stelzo/ratslang).

For language syntax, units, constraints, and editor/LSP setup, see the
[Ratslang README](https://codeberg.org/stelzo/ratslang#editor-support), including
[Helix](https://codeberg.org/stelzo/ratslang#helix),
[Neovim](https://codeberg.org/stelzo/ratslang#neovim), and
[VS Code](https://codeberg.org/stelzo/ratslang#vs-code).

## Development

Use Node.js, a C compiler, Rust/Cargo, and tree-sitter-cli 0.25.10. Generate ABI 14
parsers for compatibility with Helix and Neovim:

```sh
cargo install tree-sitter-cli --version 0.25.10 --locked
tree-sitter generate --abi 14
cargo test
```

Check in `src/parser.c`, `src/grammar.json`, and `src/node-types.json` after a
grammar change. Rust tests exercise complete quantity tokens, arrays/ranges,
comment annotations, references, raw strings, and all editor queries.

## License

MIT
