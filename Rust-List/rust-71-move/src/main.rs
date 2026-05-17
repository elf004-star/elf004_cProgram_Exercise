fn main() {
    let s1 = String::from("hello");
    let s2 = s1; //s1 的所有权移动到 s2
    // println!("{}", s1);  // 错误！s1 已失效
    println!("{}", s2);
}
