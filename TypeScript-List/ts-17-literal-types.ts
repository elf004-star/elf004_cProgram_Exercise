// TypeScript - 字面量类型：把具体的值当作类型。
let direction: "left" | "right" | "up" | "down";
direction = "left";
direction = "up";
// direction = "forward";  // 报错

// 结合字面类型进行精确控制
function setAlignment(align: "left" | "center" | "right"): void {
  //...
}
setAlignment("left");   // 正确
// setAlignment("middle");   // 报错

// 数字字面量
function setPort(port: 80 | 443 | 3000): void {
  // ...
}

setPort(80);
// setPort(8080);

// TS 优势：字面量类型让 取值范围 成为类型的一部分，实现了更准确的类型控制。
