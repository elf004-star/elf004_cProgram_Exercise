fn main() {
    let x = 5;
    let x = x + 1; // 新变量遮蔽旧变量
    {
        let x = x * 2; // 内部遮蔽
        print!("内部：{}", x); // 12
    }
    print!("外部：{}", x); // 6
}
