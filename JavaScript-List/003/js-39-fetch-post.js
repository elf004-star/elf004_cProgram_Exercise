// 用 JSONPlaceholder 这个免费测试 API 演示 POST 请求
// 它不会真的保存数据，只是把你发的内容原样回显（并分配一个 id），很适合练习
// 对比 js-38：GET 是"获取数据"，POST 是"提交数据"

async function createPost() {
  try {
    // 要发送给服务器的数据（一个 JS 对象）
    const postData = {
      title: "我的第一篇帖子",
      body: "这是用 fetch 发送的 POST 请求",
      userId: 1,
    };

    // fetch() 的第一个参数是 URL，第二个参数用来配置请求
    const response = await fetch('https://jsonplaceholder.typicode.com/posts', {
      method: 'POST',                       // 请求方法：POST 表示"提交数据"
      headers: {
        'Content-Type': 'application/json', // 告诉服务器：请求体是 JSON 格式
      },
      body: JSON.stringify(postData),       // 把 JS 对象转成 JSON 字符串才能发送
    });

    // 检查请求是否成功
    if (!response.ok) {
      throw new Error('网络请求失败了，状态码：' + response.status);
    }

    // 服务器通常会把创建好的数据回传给你（一般会带个新的 id）
    const data = await response.json();
    console.log("创建成功：", data);
    console.log("新帖子的 id：", data.id);

    return data;
  } catch (error) {
    console.log("创建失败：", error);
    // 重新抛出，让调用方能够感知失败
    throw error;
  }
}

// 调用 async 函数
createPost();
