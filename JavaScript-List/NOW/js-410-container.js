// HTML 中准备：
// <div id="userContainer"></div>

async function showUserOnPage() {
  const container = document.querySelector('#userContainer');
  container.innerHTML = "加载中...";

  try {
    const response = await fetch('https://randomuser.me/api/');
    const data = await response.json();
    const user = data.results[0];

    // 动态生成 HTML
    container.innerHTML = `
      <img src="${user.picture.medium}" alt="头像">
      <p><strong>姓名: </strong>${user.name.first} ${user.name.last}</p>
      <p><strong>邮箱: </strong>${user.email}</p>
      <p><strong>国家: </strong>${user.location.country}</p>
      `;
  } catch (error) {
    container.innerHTML = "加载失败，请刷新重试";
    console.log(error);
  }

  // 点击按钮调用
  document.querySelector('#loadBtn').addEventListener('click', showUserOnPage);
}
