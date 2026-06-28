trait Summary {
    fn summarize(&self) -> String {
        String::from("(阅读更多...)")
    }
}

struct Tweet {
    username: String,
    content: String,
}

impl Summary for Tweet {} // 使用默认实现

fn main() {
    let tweet = Tweet {
        username: String::from("@rust"),
        content: String::from("Hello Rust!"),
    };
    println!("{}", tweet.summarize());
}
