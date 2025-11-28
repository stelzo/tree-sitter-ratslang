import XCTest
import SwiftTreeSitter
import TreeSitterRatslang

final class TreeSitterRatslangTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ratslang())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Ratslang grammar")
    }
}
