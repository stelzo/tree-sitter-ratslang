// swift-tools-version:5.9

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterRatslang",
    platforms: [
        .macOS(.v10_13),
        .macCatalyst(.v13),
        .iOS(.v12),
        .tvOS(.v12),
        .watchOS(.v5),
        .visionOS(.v1),
    ],
    products: [
        .library(name: "TreeSitterRatslang", targets: ["TreeSitterRatslang"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.25.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterRatslang",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterRatslangTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterRatslang",
            ],
            path: "bindings/swift/TreeSitterRatslangTests"
        )
    ],
    cLanguageStandard: .c11
)
