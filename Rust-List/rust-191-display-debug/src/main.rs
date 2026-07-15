use std::fmt;

#[derive(Debug)] // 自动实现 Debug
struct Point {
    x: i32,
    y: i32,
}

impl fmt::Display for Point {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "({}, {})", self.x, self.y)
    }
}

fn main() {
    let p = Point { x: 1, y: 2 };
    println!("Display: {}", p); // 用户友好
    println!("Debug: {:?}", p); // 调试用（需 derive）
}
