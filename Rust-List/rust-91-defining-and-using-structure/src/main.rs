struct User {
    name: String,
    age: u32,
}

fn main() {
    let user = User {
        name: String::from("Alice"),
        age: 30,
    };
    println!("{} 年龄 {}", user.name, user.age);
}
