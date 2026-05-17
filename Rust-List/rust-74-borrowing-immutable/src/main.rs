fn main() {
    let s = String::from("hello");
    let len = calculate_length(&s); // 借走，不获取所有权
    println!("'{}' 长度：{}", s, len);
}

fn calculate_length(s: &String) -> usize {
    s.len()
}
