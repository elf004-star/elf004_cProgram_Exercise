// TypeScript - 声明多个函数签名
function process(value: string): string;
function process(value: number): number;
function process(value: string | number): string | number {
  if (typeof value === "string") {
    return value.toUpperCase();
  } else if (typeof value === "number") {
    return value * 2;
  }
  return value;
}

const result1 = process("hello");   // 类型推断为 string
const result2 = process(10);    // 类型推断为 number
// const result3 = process(true);    // ❌ 报错
