enum Option<T> {
    Some(T),
    None,
}

enum Result<T, E> {
    Ok(T),
    Err(E),
}

fn main() {
    let some: Option<i32> = Option::Some(5);
    let ok: Result<u8, String> = Result::Ok(200);
}
