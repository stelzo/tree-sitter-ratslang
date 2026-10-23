use tree_sitter::{Node, Parser};

fn parse(source: &str) -> tree_sitter::Tree {
    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_ratslang::LANGUAGE.into())
        .unwrap();
    let tree = parser.parse(source, None).unwrap();
    assert!(
        !tree.root_node().has_error(),
        "{source}\n{}",
        tree.root_node().to_sexp()
    );
    tree
}
fn collect<'a>(node: Node<'a>, kind: &str, out: &mut Vec<Node<'a>>) {
    if node.kind() == kind {
        out.push(node);
    }
    let mut cursor = node.walk();
    for child in node.children(&mut cursor) {
        collect(child, kind, out);
    }
}
#[test]
fn physical_literals_keep_complete_tokens_in_arrays_ranges_and_assignments() {
    for (dimension, units) in [
        ("mass", "yg zg ag fg pg ng ug µg μg mg cg dg dag hg g kg Mg Gg Tg Pg Eg Zg Yg t gram grams kilogram kilograms milligram milligrams microgram micrograms nanogram nanograms tonne tonnes metric_ton lb pound pounds oz ounce ounces"),
        ("angle", "deg rad mrad urad µrad"),
        ("frequency", "mHz Hz kHz MHz GHz"),
        ("velocity", "m/s cm/s mm/s km/h"),
        ("acceleration", "m/s2 m/s^2 cm/s2 cm/s^2 mm/s2 mm/s^2"),
        ("length", "m mm µm μm um Å l.y. astronomical_units nautical_miles microinches ångströms bohr_radiuses"),
        ("time", "s ms µs min minutes shakes seconds_sidereal years_tropical"),
    ] {
        for unit in units.split_whitespace() {
            let literal = format!("-1.25{unit}");
            let source = format!("x = {literal}\ny = [{literal}, [{literal}]]\nz = {literal}..{literal}\n");
            let tree = parse(&source);
            let mut tokens = Vec::new();
            collect(tree.root_node(), &format!("{dimension}_quantity"), &mut tokens);
            assert_eq!(tokens.len(), 5, "{source}\n{}", tree.root_node().to_sexp());
            for token in tokens { assert_eq!(&source[token.byte_range()], literal); }
        }
    }
}
#[test]
fn schema_and_constraint_comments_references_and_raw_multiline_strings() {
    let source = r#"# @schema https://example.org/default.rl
# @required
# @recommended
robot {
  # @type mass
  # @min 250mg
  # @max_exclusive 2kg
  payload = 1kg
  # @enum CPU, Backend
  # @enum_case insensitive
  backend = Backend
  # @deprecated Use payload
  # @renamed_to robot.payload
  old = 500g
  _stored, _other = 1m, 2s
  copy = _stored
  other = _namespace._stored
  values = [1g..2kg, ..5deg, 10Hz.., ..]
  text = "a raw backslash \
next line"
}
= ./defaults.rl
"#;
    let tree = parse(source);
    let mut comments = Vec::new();
    collect(tree.root_node(), "comment", &mut comments);
    assert_eq!(comments.len(), 10);
    let mut strings = Vec::new();
    collect(tree.root_node(), "string", &mut strings);
    assert_eq!(strings.len(), 1);
    assert!(source[strings[0].byte_range()].contains("next line"));
}
#[test]
fn editor_queries_compile_against_generated_node_types() {
    let language = tree_sitter_ratslang::LANGUAGE.into();
    for query in [
        include_str!("../queries/highlights.scm"),
        include_str!("../queries/locals.scm"),
        include_str!("../queries/textobjects.scm"),
        include_str!("../queries/injections.scm"),
    ] {
        tree_sitter::Query::new(&language, query).unwrap();
    }
}

#[test]
fn repository_examples_remain_valid() {
    for source in [
        include_str!("../test/example.rl"),
        include_str!("../test/advanced.rl"),
        include_str!("../test/units_sample.rl"),
    ] {
        parse(source);
    }
}
