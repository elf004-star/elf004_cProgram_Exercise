use std::cell::RefCell;

fn main() {
    let data = RefCell::new(5);

    // `data` 本身是不可变引用，但可以修改内部值
    *data.borrow_mut() = 10;

    println!("{}", data.borrow());
}
