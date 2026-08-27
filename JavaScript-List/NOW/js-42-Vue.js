// 用 Vue.createApp() 创建一个 Vue 应用。Vue 是上面 HTML 里 vue.global.js 提供的全局对象。
const app = Vue.createApp({
    // data()：定义应用的"状态数据"，必须是一个函数并返回对象。
    // Vue 会把返回对象的每个字段暴露为响应式数据——改了它们，界面自动刷新。
    data() {
        return {
            // newTodo：输入框当前的内容。与 HTML 中 <input v-model="newTodo"> 双向绑定。
            newTodo: '',
            // todos：待办列表（数组），初始自带两条，方便一打开就能看到效果。
            todos: [
                { id: 1, text: '学习Vue', done: false },
                { id: 2, text: '完成项目', done: true }
            ],
            // nextId：登记下一个要分配的 id，从 3 开始（因为上面已经用了 1、2）。
            nextId: 3
        };
    },
    // methods：定义应用可以用到的方法，在模板里用 @click、@keyup 等触发。
    // 注意：方法里访问数据要用 this.xxx（this 指向当前应用实例）。
    methods: {
        // 添加一条新待办
        addTodo() {
            // this.newTodo.trim()：去掉输入内容的首尾空格。
            // 若去掉空格后仍有内容（非空），才执行添加，避免加入空字符串或纯空格。
            if (this.newTodo.trim()) {
                // push：往 todos 数组末尾追加一个新对象。
                this.todos.push({
                    id: this.nextId++,   // 先用 nextId 当前值作为新待办的 id，然后让它 +1 备用
                    text: this.newTodo.trim(),  // 保存去掉空格后的内容
                    done: false                 // 新待办默认未完成
                });
                this.newTodo = '';  // 清空输入框，方便继续输入下一条
            }
        },
        // 切换某条待办的"完成/未完成"状态（点 ✅ 时用）
        toggleTodo(id) {
            // find：在 todos 里找到 id === 传入 id 的第一条；找不到会返回 undefined。
            const todo = this.todos.find(t => t.id === id);
            // if (todo)：防止传入一个不存在的 id 时报错。
            // !todo.done：取反 — 已完成变未完成，未完成变已完成。
            if (todo) todo.done = !todo.done;
        },
        // 删除某条待办（点 ❌ 时用）
        deleteTodo(id) {
            // filter：保留所有"id !== 传入 id"的项，等于传入 id 的那条被剔除。
            // 结果是一个新数组，赋回给 this.todos，界面会随之更新（不再显示被删的那条）。
            this.todos = this.todos.filter(t => t.id !== id);
        }
    }
});

// mount('#app')：把上面创建的应用挂载到 HTML 中 id 为 app 的元素上。
// 挂载之后，Vue 才接管那个区域，模板里的 v-for、{{ }} 等语法才开始生效。
app.mount('#app');
