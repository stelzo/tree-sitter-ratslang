# tree-sitter-ratslang

Tree-sitter grammar for the Ratslang config language. See the [Ratslang repository](https://github.com/stelzo/ratslang) for more information about the language.

## Editor Integration

### Helix

**Configure language in `~/.config/helix/languages.toml`:**

```toml
[[language]]
name = "ratslang"
scope = "source.ratslang"
file-types = ["ratslang", "rl"]
roots = []
comment-token = "#"
injection-regex = "ratslang"
indent = { tab-width = 2, unit = "  " }

[[grammar]]
name = "ratslang"
source = { git = "https://github.com/stelzo/tree-sitter-ratslang", rev = "27271a06f973c0f055d5eb31e65f38fd44eb184a" }
```

**Copy query files to Helix runtime:**

```bash
git clone https://github.com/stelzo/tree-sitter-ratslang.git /tmp/tree-sitter-ratslang
mkdir -p ~/.config/helix/runtime/queries/ratslang
cp /tmp/tree-sitter-ratslang/queries/*.scm ~/.config/helix/runtime/queries/ratslang/
```

Fetch and build the grammar
```bash
hx --grammar fetch
hx --grammar build
```

Verify installation
```bash
hx --health ratslang
```

Open a `.rl` file in Helix - syntax highlighting should now work!

## Development

Prerequisites:
- Node.js and npm
- tree-sitter-cli version 0.23.x (important for Helix compatibility)

```bash
npm install -g tree-sitter-cli@0.23
```

Generate Parser
```bash
tree-sitter generate
```

## License

MIT

