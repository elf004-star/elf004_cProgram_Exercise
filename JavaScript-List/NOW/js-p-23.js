// 基本类型（数字，字符串，布尔）是“值传递”
let a = 10;
let b = a;    // b 复制了 a 的值
b = 20;
console.log(a);   // 输出：10 （a 没变）

// 数组和对象是“引用传递”
let arr1 = [1, 2, 3];
let arr2 = arr1;    // arr2 和 arr1 指向同一个数组
arr2.push(4);
console.log(arr1);    // arr1 也被改了

// 如果需要复制数组用 [...arr1]
let arr3 = [...arr1];
arr3.push(5);
console.log(arr1);
console.log(arr3);
