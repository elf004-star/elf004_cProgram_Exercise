// 用 Promise 改写“登录-取信息-取好友-取动态“
function login() {
  return new Promise(resolve => {
    setTimeout(() => resolve({ userId: 123, name: "小明" }), 1000);
  });
}

function getUserInfo(userId) {
  return new Promise(resolve => {
    setTimeout(() => resolve({ id: userId, age: 18, city: "成都" }), 1000);
  });
}

function getFriends(userId) {
  return new Promise(resolve => {
    setTimeout(() => resolve(["小红", "小刚", "小丽"]), 1000);
  });
}

// 链式调用-代码是纵向的-可读性极强
login()
  .then(user => {
    console.log("登录成功：", user);
    return getUserInfo(user.userId);    // 返回一个新的 Promise
  })
  .then(userInfo => {
    console.log("用户信息：", userInfo);
    return getFriends(userInfo.id);
  })
  .then(friends => {
    console.log("好友列表：", friends);
  })
  .catch(error => {
    console.log("出错了：", error);
  });
