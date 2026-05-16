fn main() {
    // 遍历范围
    for i in 1..4 {
        // 1,2,3
        println!("{}", i);
    }

    // 遍历数组
    let arr = [10, 20, 30];
    for elem in arr.iter() {
        println!("{}", elem);
    }

    // 带索引枚举
    for (index, value) in arr.iter().enumerate() {
        println!("索引{}: {}", index, value);
    }
}
