fn main() {
    let mut v = Vec::new();
    v.push(1);
    v.push(2);

    // 优雅的访问
    match v.get(10) {
        Some(x) => println!("{}", x),
        None => println!("越界"),
    }

    // 遍历修改
    for x in &mut v {
        *x += 10;
    }
    println!("{:?}", v);
}
