enum WebEvent {
    PageLoad,
    KeyPress(char),
    Click { x: i64, y: i64 },
}

fn main() {
    let load = WebEvent::PageLoad;
    let press = WebEvent::KeyPress('a');
    let click = WebEvent::Click { x: 100, y: 200 };

    //  通过模式匹配处理
}
