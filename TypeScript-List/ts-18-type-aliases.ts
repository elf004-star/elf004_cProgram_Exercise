// TypeScript - 给类型起别名，方便复用
type ID = string | number;
type User = {
  name: string;
  age: number;
  email?: string;   // 可选属性
};

function getUser(id: ID): User {
  return { name: "张三", age: 25 };
}

function updateUser(user: User): void {
  // ...
}

// 类型别名可以组合
type Point = { x: number; y: number };
type Size = { width: number; height: number };
type Rectangle = Point & Size;    // 交叉类型

// TS 优势：类型复用，减少重复定义，提高代码可维护性
