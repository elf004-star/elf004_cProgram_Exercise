fn main() {
    let b = Box::new(5);
    println!("b = {}", b);
    // 离开作用域自动释放
}
