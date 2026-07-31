fn main() {
    println!("Hello, world!");
    let optional_value = Some(6);
    if let Some(x) = optional_value {
        println!("{}", x);
    }
}
