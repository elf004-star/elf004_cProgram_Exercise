fn main() {
    let v = vec![1, 2, 3];

    // 迭代器是惰性的
    let iter = v.iter(); // 不可变引用
    for val in iter {
        println!("{}", val);
    }

    // 消费迭代器
    let v2: Vec<_> = v.iter().map(|x| x + 1).collect();
    println!("{:?}", v2);
}
