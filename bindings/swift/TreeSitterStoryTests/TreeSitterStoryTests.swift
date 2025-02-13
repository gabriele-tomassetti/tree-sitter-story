import XCTest
import SwiftTreeSitter
import TreeSitterStory

final class TreeSitterStoryTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_story())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Story grammar")
    }
}
