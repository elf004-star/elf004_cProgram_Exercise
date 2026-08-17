// 用一个免费的天气 API 做演示
// 这个API会返回关于“成都”的天气信息
async function getWeather() {
  try {
    // fetch() 会发起网络请求，返回一个 Promise
    // 注意：城市名必须是 Chengdu，拼错（如 Chendu）不会报 404，
    // 而是会被 API 模糊匹配到别的城市，返回错误的天气数据
    const response = await fetch('https://api.openweathermap.org/data/2.5/weather?q=Chengdu&appid=2039136605df6faac0a8102623656e7f');

    // 检查请求是否成功
    if (!response.ok) {
      throw new Error('网络请求失败了，状态码：' + response.status);
    }

    // .json() 也是异步操作，需要 await
    const data = await response.json();
    console.log("天气数据：", data);
    console.log("温度：", data.main.temp);
    console.log("天气描述：", data.weather[0].description);

    return data;
  } catch (error) {
    console.log("获取天气失败：", error);
    // 重新抛出，让调用方能够感知失败，而不是拿到 undefined
    throw error;
  }
}

// 调用 async 函数
getWeather();
