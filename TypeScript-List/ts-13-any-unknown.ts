// any - 关闭类型检查（尽量少用）
let data1: any = "hello";
data1 = 123; // 允许，但失去了 TS 的保护
data1.toUpperCase();    // 运行时可能报错

// unknown - 类型安全的“任意类型“（推荐使用）
let data2: unknown = "hello";
data2 = 123;    // 允许
// data2.toUpperCase();    // 报错：unknown 类型不能直接调用方法

// 使用 unknown 必须先进行类型检查
if (typeof data2 === "string") {
  data2.toUpperCase();   // 类型守卫后可以安全使用
}

// TS 优势：unknown 强制你进行类型检查，比 any 更安全
