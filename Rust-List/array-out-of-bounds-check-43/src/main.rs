fn main() {
    let arr = [1, 2, 3];
    // let elem = arr[10];  // 运行时 panic 崩溃
    // 安全访问用 get
    match arr.get(0) {
        Some(elem) => println!("{}", elem),
        None => println!("越界了"),
    }
}
