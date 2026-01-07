# tree-sitter-ratslang

Tree-sitter grammar for the Ratslang config language. See the [Ratslang repository](https://github.com/stelzo/ratslang) for more information about the language.

## Editor Integration

### Helix

Configure language in `~/.config/helix/languages.toml`

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
source = { git = "https://github.com/stelzo/tree-sitter-ratslang", rev = "4896dc23b582fa95716853b27697d3f371afc9ed" }
```

Copy query files to Helix runtime

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

### Neovim

Follow the instructions to install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) if it is not already installed.
Then add a custom filetype for ratslang in your `init.lua`

```lua
-- ratslang filetype
vim.filetype.add({
  extension = {
    -- Takes path and bufnr as arguments
    rl = function (_, _)
      return 'ratslang', function(bufnr)
        -- Configure the buffer for ratslang
        vim.bo[bufnr].shiftwidth = 2
        vim.bo[bufnr].tabstop = 2
        vim.bo[bufnr].expandtab = true
        pcall(vim.treesitter.start, bufnr, 'ratslang')
      end
    end
  }
})
```

Install the ratslang grammer using nvim-treesitter (see [nvim-treesitter: adding custom languages](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#adding-custom-languages) for reference)

```lua
-- ratslang tree-sitter-grammar
vim.api.nvim_create_autocmd('User', {pattern = 'TSUpdate',
callback = function()
  require('nvim-treesitter.parsers').ratslang = {
    install_info = {
      url = 'https://github.com/stelzo/tree-sitter-ratslang',
      -- Install the provided queries
      queries = 'queries'
    }
  }
end})
```

Run `:TSInstall ratslang` to install the parser and queries.

Now restart Neovim and open a `.rl` file - syntax highlighting should now work!

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

