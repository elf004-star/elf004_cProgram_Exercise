// 用 async/await 改写上面的例子（这三个函数返回 Promise，见 js-36）
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

// 用 async/await 改写上面的例子
async function getData() {
  try {
    const user = await login();
    console.log("登录成功：", user);

    const userInfo = await getUserInfo(user.userId);
    console.log("用户信息：", userInfo);

    const friends = await getFriends(userInfo.id);
    console.log("好友列表：", friends);

    return "所有的数据获取完成！";
  } catch (error) {
    console.log("出错了：", error);
  }
}

// 调用 async 函数
getData();

// 注意：await 只能在 async 函数内部使用
