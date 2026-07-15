#[derive(Debug)]
struct Number {
    value: i32,
}

impl From<i32> for Number {
    fn from(item: i32) -> Self {
        Number { value: item }
    }
}
fn main() {
    let num = Number::from(30);
    println!("{:?}", num);

    let num2: Number = 50.into(); // Into 自动实现
}
