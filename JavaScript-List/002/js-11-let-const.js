// let 盒子里的东西可以换
let myAge = 25;
myAge = 26;   // 没毛病，年龄变了
console.log(myAge);   // 输出：26

// const 盒子一旦封上，里面的东西就固定了
const PI = 3.14;

// PI = 3.15;   // 这行会报错！因为 const 不能重新赋值
console.log(PI);   // 输出：3.14
