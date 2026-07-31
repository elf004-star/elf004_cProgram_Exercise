// 1. 现在网页里找到这个按钮（document.querySelector 是 JS 找东西的手）
let btn = document.querySelector('#myBtn');

// 2. 告诉按钮：当你被点击时，执行我给你的这个函数
btn.addEventListener('click', function () {
  alert('你点了我一下！');
  console.log('按钮被点击了，时间是：', new Date());
});
