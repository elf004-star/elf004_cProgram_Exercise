let scores = [85, 42, 97, 33, 70, 100];
// 筛选出及格（>=60）的成绩
let passScores = scores.filter(function (score) {
  return score >= 60;
});

console.log(passScores);
console.log(scores);

// 筛选出名字长度大于2的人
let users = ["Tom", "Jerry", "A", "Spike"];
let longNames = users.filter(name => name.length > 2);
console.log(longNames);
