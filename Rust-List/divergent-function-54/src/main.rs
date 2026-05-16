fn never_returns() -> ! {
    panic!("这个函数永远不会返回");
}

fn main() {
    // never_returns(); // 取消注释会在此处退出程序（带错误信息）
    println!("这行不会执行");
}
