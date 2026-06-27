fn largest<T: std::cmp::PartialOrd>(list: &[T]) -> &T {
    let mut largest = &list[0];
    for item in list {
        if item > largest {
            largest = item;
        }
    }
    largest
}

fn main() {
    let numbers = vec![34, 50, 25, 100, 65];
    println!("最大：{}", largest(&numbers));

    let chars = vec!['y', 'm', 'a', 'q'];
    println!("最大：{}", largest(&chars));
}
