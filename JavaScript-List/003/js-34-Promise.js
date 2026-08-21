// 模拟一个耗时操作（比如网络请求）
function orderFood() {
  return new Promise(function (resolve, reject) {
    console.log("🍳开始做饭...");

    setTimeout(function () {
      let success = true;   // 模拟做饭是否成功

      if (success) {
        resolve("🍛咖喱饭做好了！");    // 成功-调用resolve
      } else {
        reject("😱厨房着火了！");    // 失败-调用reject
      }
    }, 2000);
  });
}

// 调用函数
orderFood()
  .then(function (result) {
    console.log(result);    // 2 秒后输出
  })
  .catch(function (error) {
    console.error(error);
  });
