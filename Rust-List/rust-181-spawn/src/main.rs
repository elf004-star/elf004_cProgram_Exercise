use std::thread;
use std::time::Duration;

fn main() {
    let handle = thread::spawn(|| {
        for i in 1..10 {
            println!("子线程：{}", i);
            thread::sleep(Duration::from_millis(1));
        }
    });

    for i in 1..5 {
        println!("主线程：{}", i);
        thread::sleep(Duration::from_millis(1));
    }

    handle.join().unwrap(); // 等待子线程结束
}
