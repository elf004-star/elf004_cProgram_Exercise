fn main() {
    let a: i32 = -42; // 有符号32位
    let b: u32 = 42; // 有符号32位
    let c: usize = 100; // 取决于系统位数
    print!("{} {} {}", a, b, c);
}
