struct Custom {
    data: String,
}

impl Drop for Custom {
    fn drop(&mut self) {
        println!("销毁：{}", self.data);
    }
}

fn main() {
    let _c = Custom {
        data: String::from("hello"),
    };
    println!("结束main");
}
