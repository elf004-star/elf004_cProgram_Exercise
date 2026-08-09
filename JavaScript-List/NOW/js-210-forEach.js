let names = ["张三", "李四", "王五"];

names.forEach(function (name, index) {
  console.log("第" + (index + 1) + "位同学叫：" + name);
});

// 更简洁的写法（ES6）
names.forEach((name, index) => {
  console.log(name + "来了");
});
