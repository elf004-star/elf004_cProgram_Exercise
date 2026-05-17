fn main() {
    let x = 5;
    let y = x; // 整数实现了 Copy trait，直接复制
    println!("x: {}, y: {}", x, y); // 都有效
}
