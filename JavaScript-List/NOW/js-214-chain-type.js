let products = [
  { name: "手机", price: 5000, inStock: true },
  { name: "耳机", price: 500, inStock: false },
  { name: "电脑", price: 8000, inStock: true },
  { name: "鼠标", price: 200, inStock: true }
];

// 需求：找到有货的商品，改为大写，加上折扣价
let result = products
  .filter(product => product.inStock === true)
  .map(product => ({
    name: product.name.toUpperCase(),
    price: product.price * 0.9  // 打九折
  }));

console.log(result);
