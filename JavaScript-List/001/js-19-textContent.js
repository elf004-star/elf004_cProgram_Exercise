// 找到这个段落
let textP = document.querySelector('#displayText');

// 修改它里面的文字（textContext 属性）
textP.textContent = '全新的内容，由JS生成!';

// 甚至可以把变量放进去
let myName = "编程新手";
textP.textContent = "你好，" + myName + "！欢迎进入编程世界。";
