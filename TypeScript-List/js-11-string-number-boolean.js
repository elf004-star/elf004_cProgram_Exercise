// JavaScript - 运行时才知道类型错误
console.log("--- 演示：JavaScript 运行时才知道类型错误 ---");

let userName = "张三";
console.log("userName 初始:", userName);   // 字符串

userName = 123;
console.log("userName 改后:", userName);   // 数字，JS 允许，不报错！

function greet(name) {
  return "你好，" + name;
}
console.log(greet(123));                    // "你好，123"，数字被隐式转成字符串拼接
