use std::rc::Rc;

fn main() {
    let a = Rc::new(String::from("hello"));
    let b = Rc::clone(&a);
    let c = Rc::clone(&a);

    println!("引用计数：{}", Rc::strong_count(&a)); // 3
}
