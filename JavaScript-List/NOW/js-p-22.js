// 原始数据：学生姓名和成绩
let students = [
  { name: "小明", score: 85 },
  { name: "小红", score: 42 },
  { name: "小刚", score: 97 },
  { name: "小丽", score: 33 },
  { name: "小华", score: 70 }
];

// 1. 找出及格的学生（filter）
let passed = students.filter(s => s.score >= 60);
console.log("及格学生：", passed);

// 2. 给所有学生成绩加5分（map）
let adjusted = students.map(s => ({
  name: s.name,
  score: s.score + 5
}));
console.log("加分后：", adjusted);

// 3. 找出最高分（reduce，这里简单演示）
let maxScore = students.reduce((max, s) => s.score > max ? s.score : max, 0);
// let maxScore = students.reduce((max, s) => {
//   if (s.score > max) {
//     return s.score;
//   } else {
//     return max;
//   }
// }, 0);
console.log("最高分：", maxScore);

// 4. 打印所有学生名字（forEach）
students.forEach(s => console.log(s.name + "的成绩是" + s.score));

// 5. 综合：找出不及格学生名单，并在控制台打印警告
students
  .filter(s => s.score < 60)
  .forEach(s => console.log("⚠️警告：" + s.name + "需要补考！"));
