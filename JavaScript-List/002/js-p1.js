// 1. 声明一个变量用来存点击次数（变量）
let count = 0;

// 2. 找到显示数字的标签 和 按钮（DOM操作）
let display = document.querySelector('#countDisplay');
let btn = document.querySelector('#addBtn');

// 3. 监听按钮点击（事件监听）
btn.addEventListener('click', function () {
  // 4. 每次点击，让数字+1（算术运算）
  count = count + 1;

  // 5. 把新的数字更新到网页上（修改DOM）
  display.textContent = count;

  // 6. 在控制台看一下现在的状态（调试）
  console.log('当前点击次数：', count);
});
