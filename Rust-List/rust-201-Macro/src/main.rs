// 最简单的宏
macro_rules! say_hello {
    () => {
        println!("Hello from macro!");
    };
}

fn main() {
    say_hello!();
    say_hello!(); // 可重复使用
}
