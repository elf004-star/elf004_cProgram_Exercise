// 把前面学的 fetch 知识整合成一个完整的天气小应用
// 包含：按钮触发、加载状态、页面渲染、错误提示
//
// 配套 HTML 页面：weather-demo.html
// 在浏览器里打开 weather-demo.html 点击按钮即可看到效果

const API_KEY = '2039136605df6faac0a8102623656e7f';
const CITY = 'Chengdu'; // 城市名，拼错会被 API 模糊匹配到别的城市

// 获取页面上的 DOM 元素
const btn = document.getElementById('getWeatherBtn');
const statusText = document.getElementById('statusText');
const resultDiv = document.getElementById('resultDiv');

// addEventListener：给按钮绑定点击事件，回调函数是 async 的
btn.addEventListener('click', async () => {
  // 1. 进入加载状态：禁用按钮防止重复点击，显示提示文字
  btn.disabled = true;
  btn.textContent = '加载中...';
  statusText.textContent = '正在请求天气数据...';
  resultDiv.innerHTML = '';

  try {
    // 2. 发起请求（GET，和 js-38 一样）
    const response = await fetch(
      `https://api.openweathermap.org/data/2.5/weather?q=${CITY}&appid=${API_KEY}`
    );

    if (!response.ok) {
      throw new Error('网络请求失败了，状态码：' + response.status);
    }

    const data = await response.json();

    // 3. 处理数据：API 返回的是开尔文温度，转成摄氏度
    //    toFixed(1) 保留一位小数
    const tempCelsius = (data.main.temp - 273.15).toFixed(1);

    // 4. 用 innerHTML 把结果显示到页面上（模板字符串）
    resultDiv.innerHTML = `
      <h2>${data.name}</h2>
      <p>温度：${tempCelsius} ℃</p>
      <p>天气：${data.weather[0].description}</p>
    `;
    statusText.textContent = '✅ 获取成功';

  } catch (error) {
    // 5. 出错时把错误信息显示在页面上
    statusText.textContent = '❌ 获取失败';
    resultDiv.innerHTML = `<p class="error">${error.message}</p>`;

  } finally {
    // 6. finally：无论成功还是失败，最后都要恢复按钮
    //    不然出错后按钮会一直禁用
    btn.disabled = false;
    btn.textContent = '获取天气';
  }
});
