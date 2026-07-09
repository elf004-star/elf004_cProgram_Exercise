// src/lib.rs 或模块文件
mod front_of_house {
    pub mod hosting {
        pub fn add_to_waitlist() {}
        fn seat_at_table() {}
    }

    mod serving {
        fn take_order() {}
    }
}

pub fn eat_at_restaurant() {
    // 绝对路径

    crate::front_of_house::hosting::add_to_waitlist();

    // 相对路径
    front_of_house::hosting::add_to_waitlist();
}

// main.rs 中 use 导入
// use 模块路径；
