// TypeScript - 用 interface 定义对象结构
interface User {
  name: string;
  age: number;
  email?: string;   // 可选属性
  readonly id: number;    // 只读属性
}

// 入参不需要 id（由函数内部生成），用 Omit 去掉它
function createUser(user: Omit<User, "id">): User {
  return {
    id: Date.now(),
    name: user.name,
    age: user.age,
    email: user.email
  };
}

const newUser = createUser({ name: "张三", age: 25 });
// newUser.id = 100;   // ❌ 报错：不能修改只读属性

// TS 优势：对象结构在编译时就被约束，避免传入缺失必要属性的对象
