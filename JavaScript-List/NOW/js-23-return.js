function add(a, b) {
  let result = a + b;
  return result;    // 把结果返回给调用者
}

let sum = add(5, 3);    // sum 被赋值为8
console.log(sum);   // 输出：8

// 注意：return 后的代码不会执行
function test() {
  return;
  console.log("这行不会输出");
}
