fn main() {
    let v = vec![1, 2, 3];
    // v[99];   // 会触发 panic

    panic!("程序崩溃了"); // 手动处罚
}
