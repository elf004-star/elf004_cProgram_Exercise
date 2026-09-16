// TypeScript - 联合类型明确允许哪些类型
function printId(id: number | string): void {
  console.log(id);
}
printId(123);   // 正确
printId("abc");   // 正确
// printId(true);    // 错误

// 联合类型配合类型守卫进行不同处理
function processId(id: number | string): string {
  if (typeof id === "number") {
    return `数字ID: ${id + 100}`;   // 可以调用数字方法
  } else {
    return `字符串ID: ${id.toUpperCase()}`;    //可以调用字符串方法
  }
}

// TS 优势：明确表示”可以是这几种类型的一种“，并在使用时进行类型收窄。
