package tree_sitter_ratslang_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ratslang "github.com/stelzo/tree-sitter-ratslang/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ratslang.Language())
	if language == nil {
		t.Errorf("Error loading Ratslang grammar")
	}
}
