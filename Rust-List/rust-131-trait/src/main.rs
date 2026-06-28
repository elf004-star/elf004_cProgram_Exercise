trait Summary {
    fn summarize(&self) -> String;
}

struct NewsArticle {
    headline: String,
    location: String,
}

impl Summary for NewsArticle {
    fn summarize(&self) -> String {
        format!("{}, by{}", self.headline, self.location)
    }
}

fn main() {
    let article = NewsArticle {
        headline: String::from("Rust 发布新版本"),
        location: String::from("Internet"),
    };
    println!("{}", article.summarize());
}
