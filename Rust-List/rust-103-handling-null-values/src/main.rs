fn main() {
    let some_number = Some(5);
    let absent_number: Option<i32> = None;

    match some_number {
        Some(i) => println!("值是 {}", i),
        None => println!("没值"),
    }
}
