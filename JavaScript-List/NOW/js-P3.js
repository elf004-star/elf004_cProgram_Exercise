// 创建Vue应用
const app = Vue.createApp({
  data() {
    return {
      message: 'Hello Vue!'
    };
  }
});

app.mount('#app');    // 挂载到div上
