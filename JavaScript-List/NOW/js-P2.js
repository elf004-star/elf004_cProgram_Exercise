// 用免费的API：https://dummyjson.com/quotes/random
const quoteBox = document.querySelector('#quoteBox');
const btn = document.querySelector('#getQuoteBtn');

async function fetchQuote() {
  // 显示加载状态
  quoteBox.innerHTML = '<span class="loading">⌛ 加载中...</span>';
  btn.disabled = true;    // 防止重复点击

  try {
    const response = await fetch('https://dummyjson.com/quotes/random');

    if (!response.ok) {
      throw new Error('请求失败，状态码：' + response.status);
    }

    const data = await response.json();

    // 渲染到页面
    quoteBox.innerHTML = `
      <p style="font-size: 20px; font-style: italic;">"${data.quote}"</p>
      <p style="text-align: right;">-- ${data.author}</p>
      `;
  } catch (error) {
    quoteBox.innerHTML = `<span class="error">❌ 加载失败：${error.message}</span>`
    console.log("错误详情：", error);
  } finally {
    btn.disabled = false;   // 恢复按钮
  }
}

// 点击按钮获取名言
btn.addEventListener('click', fetchQuote);

// 页面加载时自动获取一条
fetchQuote();
