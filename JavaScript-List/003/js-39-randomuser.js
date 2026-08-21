// 获取一个随机用户信息（姓名、邮箱、头像等）
async function getRandomUser() {
  try {
    const response = await fetch('http://randomuser.me/api/');
    const data = await response.json();
    const user = data.results[0];

    console.log("姓名：", user.name.first, user.name.last);
    console.log("邮箱：", user.email);
    console.log("国家：", user.location.country);
    console.log("头像：", user.picture.thumbnail);

    return user;
  } catch (error) {
    console.log("获取用户失败：", error);
  }
}

// 运行
getRandomUser();
