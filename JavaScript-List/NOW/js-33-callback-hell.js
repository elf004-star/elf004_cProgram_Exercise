// 真实场景：登录-获取用户信息-获取好友列表-获取好友动态
// 用回调函数写出来是这样的（噩梦）：
login(function (userID) {
  getUserInfo(userID, function (userInro) {
    getFriends(userInfo.id, function (friends) {
      getPosts(friends[0].id, function (posts) {
        console.log(posts);   //终于拿到了，但代码已经没法看了
      });
    });
  });
});
// 代码横向发展，难以维护
