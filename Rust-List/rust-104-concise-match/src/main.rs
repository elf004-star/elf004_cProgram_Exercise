fn main() {
    let optional = Some(7);

    if let Some(x) = optional {
        println!("匹配到 {}", x);
    } else {
        println!("没有匹配");
    }
}
