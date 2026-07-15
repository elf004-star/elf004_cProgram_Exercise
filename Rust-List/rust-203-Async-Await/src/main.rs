use tokio; // 需要添加依赖

#[tokio::main]
async fn main() {
    let result = fetch_data().await;
    println!("{}", result);
}

async fn fetch_data() -> String {
    "Hello from async".to_string()
}
