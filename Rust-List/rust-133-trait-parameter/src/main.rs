trait Summary {
    fn summarize(&self) -> String;
}

fn notify(item: &impl Summary) {
    println!("通知: {}", item.summarize());
}

//等价语法(Trait Bound)

fn notify_bound<T: Summary>(item: &T) {
    println!("通知: {}", item.summarize());
}

fn main() {
    println!("Hello, world!");
}
