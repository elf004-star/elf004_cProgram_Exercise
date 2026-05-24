struct Color(u8, u8, u8);

fn main() {
    let black = Color(0, 0, 0);
    println!("RGB: ({}, {}, {},)", black.0, black.1, black.2);
}
