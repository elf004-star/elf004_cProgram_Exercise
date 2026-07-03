fn main() {
    let x = 4;
    let equals_to_x = |z| z == x; // 捕获外部 x
    let y = 4;
    println!("{}", equals_to_x(y));
}
