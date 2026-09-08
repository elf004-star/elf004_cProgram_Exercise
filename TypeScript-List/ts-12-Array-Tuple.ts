// TypeScript - 数组类型约束
let list: number[] = [1, 2, 3];
// list.push("4");   // ❌ 报错：类型 "string" 不能赋值给 "number"

// 或使用泛型写法
let list2: Array<number> = [1, 2, 3];

// 元组：固定类型，固定长度的数组
let person: [string, number] = ["张三", 25];
// person[0] = 30;
person[0] = "李四";
// person[2] = "额外";
