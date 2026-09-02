// TypeScript - 编译时就能发现错误
let userName: string = "张三";
// userName = 123;   // ❌ 编译报错，不能将类型 number 分配给类型 string

function greet(name: string): string {
  return "你好" + name;
}
// greet(123);
greet("李四");

// TS 的优势是，写代码的时候就能捕获类型错误，而不是等到运行时
