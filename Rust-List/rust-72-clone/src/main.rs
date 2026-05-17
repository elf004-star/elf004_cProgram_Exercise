fn main() {
    let s1 = String::from("hello");
    let s2 = s1.clone(); // 深拷贝堆上数据
    println!("s1: {}, s2: {}", s1, s2); // 都有效
}
