use std::sync::mpsc;
use std::thread;

fn main() {
    let (tx, rx) = mpsc::channel();
    thread::spawn(move || {
        let val = String::from("Hello");
        tx.send(val).unwrap();
    });

    let received = rx.recv().unwrap();
    println!("收到：{}", received);
}
