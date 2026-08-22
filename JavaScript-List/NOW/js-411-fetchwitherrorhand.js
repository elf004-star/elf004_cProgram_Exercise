async function fetchWithErrorHandling(url) {
  // 显示加载状态
  console.log("加载中...");

  try {
    const response = await fetch(url);

    // 检查HTTP状态码（200-299表示成功）
    if (!response.ok) {
      throw new Error(`HTTP错误：${response.status} ${response.statusText}`);
    }

    const data = await response.json();
    console.log("加载成功！");
    return data;
  } catch (error) {
    // 网络错误（断网、DNS解析失败等）
    if (error.message.includes('fetch')) {
      console.log("网络连接失败，请检查网络");
    } else {
      console.log("请求失败：", error.message);
    }
    return null;
  } finally {
    // 无论成功还是失败，最后都会执行
    console.log("请求结束！");
  }
}

// 使用
const result = await fetchWithErrorHandling('https://api.github.com/users/octocat');
