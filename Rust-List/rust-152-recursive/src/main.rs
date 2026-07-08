enum List {
    Cons(i32, Box<List>), //Box 让大小确定
    Nil,
}

use List::{Cons, Nil};

fn main() {
    let list = Cons(1, Box::new(Cons(2, Box::new(Cons(3, Box::new(Nil))))));
    // 链表：1 -> 2 -> 3 -> 4 -> Nil
}
