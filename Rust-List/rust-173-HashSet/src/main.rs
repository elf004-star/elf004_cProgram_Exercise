use std::collections::HashSet;

fn main() {
    let mut set = HashSet::new();
    set.insert(1);
    set.insert(2);
    set.insert(2); // 重复无效

    if set.contains(&1) {
        println!("包含1");
    }
}
