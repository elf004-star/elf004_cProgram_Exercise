fn main() {
    let y = {
        let x = 3;
        x + 1 // 这里就是表达式，最后没有分号
    }; // y = 4
    println!("y = {}", y);
}
