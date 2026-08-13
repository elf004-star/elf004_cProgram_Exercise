function calcPrice(originalPrice, discountRate) {
  // discountRate 如 0.8 表示打八折
  let finalPrice = originalPrice * discountRate;
  // 保留两位小数后返回
  return Math.round(finalPrice * 100) / 100;
}

let price1 = calcPrice(199, 0.8);   // 199 * 0.8 = 159.2
let price2 = calcPrice(88, 0.65);   // 88 * 0.65 = 57.2
console.log(price1);
console.log(price2);
