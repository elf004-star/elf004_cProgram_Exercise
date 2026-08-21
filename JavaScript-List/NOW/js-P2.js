// 数据
let todos = [];
let nextId = 1;

// DOM引用
const input = document.querySelector('#input');
const addBtn = document.querySelector('#addBtn');
const list = document.querySelector('#list');

// 渲染函数（手动操作DOM）
function render() {
  list.innerHTML = '';    // 清空
  todos.forEach(todo => {
    const li = document.createElement('li');
    li.textContent = todo.text;

    // 删除按钮
    const delBtn = document.createElement('button');
    delBtn.textContent = '删除';
    delBtn.onclick = () => {
      todos = todos.filter(t => t.id !== todo.id);
      render();   // 删除后重新渲染
    };

    li.appendChild(delBtn);
    list.appendChild(li);
  })
}

// 添加待办
addBtn.onclick = () => {
  const text = input.value.trim();
  if (text) {
    todos.push({ id: nextId++, text });
    input.value = '';
    render();   // 添加后重新渲染
  }
}
