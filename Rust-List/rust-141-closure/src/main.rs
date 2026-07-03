fn main() {
    let add_one = |x: i32| -> i32 { x + 1 };
    let result = add_one(5);
    println!("{}", result);

    // 简洁写法
    let add = |x, y| x + y;
    println!("{}", add(3, 4));
}
