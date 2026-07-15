use anyhow::Result;

fn read_file() -> Result<String> {
    std::fs::read_to_string("config.toml").map_err(|e| anyhow::anyhow!("读文件失败：{}", e))
}

fn main() -> Result<()> {
    let content = read_file()?;
    println!("{}", content);
    Ok(())
}
