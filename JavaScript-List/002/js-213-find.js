let users = [
  { name: "张三", age: 18 },
  { name: "李四", age: 22 },
  { name: "王五", age: 18 }
];

// 找到第一个年纪为18的人
let found = users.find(user => user.age === 18);
console.log(found);
// filter 找所有，find 找一个
