// 方式1：直接标注参数和返回值
function add(a: number, b: number): number {
  return a + b;
}
add(1, 2);
// add(1, "2");    // 错误

// 函数表达式类型
const subtract: (a: number, b: number) => number = function(a, b) {
  return a - b;
};

// 方式3: 使用 type 定义函数签名
type MathFunction = (a: number, b: number) => number;
const multiply: MathFunction = (a, b) => a * b;
