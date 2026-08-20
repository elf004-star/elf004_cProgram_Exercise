// 1. 奇数和
function sumOdd(numbers) {
  return numbers.filter(n => n % 2 !== 0)
                .reduce((sum, n) => sum + n, 0);
}

let num1 = [1, 2, 3, 4, 5, 6];
let num2 = sumOdd(num1);
console.log(num1);
console.log(num2);
