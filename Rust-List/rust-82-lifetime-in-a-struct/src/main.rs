struct Excerpt<'a> {
    part: &'a str,
}

fn main() {
    let novel = String::from("Call me Rust. Some years ago...");
    let first_sentence = novel.split('.').next().expect("找不到句号");
    let excerpt = Excerpt {
        part: first_sentence,
    };
    println!("{}", excerpt.part);
}
