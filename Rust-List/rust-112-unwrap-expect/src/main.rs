use std::fs::File;

fn main() {
    // 失败直接 panic
    // let f1 = File::open("must_exist.txt").unwrap();

    //更清晰的 panic 信息
    let f2 = File::open("also_must_exist.txt").expect("打开文件失败，文件应该存在。");
}
