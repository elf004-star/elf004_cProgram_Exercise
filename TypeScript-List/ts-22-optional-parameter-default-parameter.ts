// TypeScript - 可选参数用 ？
function greet(name: string, greeting?: string): string {
  if (greeting) {
    return `${greeting}, ${name}`;
  }
  return `你好，${name}`;

  greet("张三");
  greet("张三", "嗨");
  // greet("张三", 123);   // ❌ 报错
}

// 默认参数（和 JS 一样，但 TS 会推断类型）
function greetWithDefault(name: string, greeting: string = "你好"): string {
  return `${greeting}, ${name}`;
}

greetWithDefault("张三");
greetWithDefault("张三", "嗨");
