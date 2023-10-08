# tree-sitter-gemtext

[Gemtext](https://geminiprotocol.net/docs/gemtext.gmi) grammar for [Tree-sitter](https://tree-sitter.github.io/tree-sitter/).

Gemtext is the markup format used in [Project Gemini](https://geminiprotocol.net/).

**[Work in progress](https://github.com/nvim-treesitter/nvim-treesitter/issues/2282#issuecomment-1732372719)!**

For another implementation, see: https://git.sr.ht/~sfr/tree-sitter-gemini

----

The command `tree-sitter parse` numbers lines from zero.
For easy comparison, this command numbers lines from zero in `test.gmi`:

```
nl -v 0 -b a test.gmi
```
