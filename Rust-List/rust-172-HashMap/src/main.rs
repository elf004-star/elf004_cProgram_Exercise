use std::collections::HashMap;

fn main() {
    let mut scores = HashMap::new();
    scores.insert("Blue".to_string(), 10);
    scores.insert("Red".to_string(), 50);

    // entry API
    let score = scores.entry("Yellow".to_string()).or_insert(0);
    *score += 1;

    println!("{:?}", scores);
}
