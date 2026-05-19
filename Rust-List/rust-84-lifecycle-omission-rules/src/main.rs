fn first_word(s: &str) -> &str {
    &s[..1]
}
fn main() {
    let word = first_word("hello");
    println!("{}", word);
}
