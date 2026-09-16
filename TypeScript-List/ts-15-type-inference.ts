// TypeScript - 自动类型推断（“基于赋值的类型推断”）
let message = "Hello"   // TS 自动推断为 string 类型
// message = 123;    //  报错

// 最佳实践：简单情况让 TS 自动推断，复杂情况显示标柱
let count = 10;   // 推断为 number, 不用写 :number
let user: { name: string; age: number } = { name: "张三", age: 25 }
