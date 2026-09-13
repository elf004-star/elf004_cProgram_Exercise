// void 表示函数没有返回值
function logMessage(msg: string): void {
  console.log(msg);
  // 不能 return 一个值
  // return 123; // 报错
}

// null 和 undefined - 可以是任意类型的子类型（严格模式下需要明确）
// let a: string = null;   // 严格模式下报错
let b: string | null = null;    // 联合类型可以允许 null

// never 表示永远不会正常返回（抛出异常或无限循环）
function throwError(message: string): never {
  throw new Error(message);
}

function infiniteloop(): never {
  while (true) {}
}

// TS 优势：never 能帮助检测“所有分支都已覆盖”
type Color = "红" | "绿" | "蓝";

function getColorCode(color: Color): number {
  switch (color) {
    case "红": return 0xFF0000;
    case "绿": return 0x00FF00;
    case "蓝": return 0x0000FF;
    default:
      // 如果将来新增了“黄”，这里会报错
      const exhaustive: never = color;
      return exhaustive;
  }
}
