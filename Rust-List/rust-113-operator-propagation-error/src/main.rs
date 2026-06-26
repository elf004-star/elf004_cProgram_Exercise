use std::fs::File;
use std::io;
use std::io::Read;

fn read_username_from_file() -> Result<String, io::Error> {
    let mut f = File::open("username.txt")?; //如果错误直接返回
    let mut s = String::new();
    f.read_to_string(&mut s)?;
    Ok(s)
}

fn main() {
    match read_username_from_file() {
        Ok(name) => println!("用户名: {}", name),
        Err(e) => println!("错误: {}", e),
    }
}
