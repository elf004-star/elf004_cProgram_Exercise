let prices = [100, 200, 300];
// 所有商品打八折
let discountPrices = prices.map(function (price) {
  return price * 0.8;
});
console.log(discountPrices);    // 输出：[80, 160, 240]
console.log(prices);    // 输出：[100, 200, 300]

// 把名字变成大写
let names = ["alice", "bob", "charlie"];
let upperNames = names.map(name => name.toUpperCase());
console.log(upperNames);    // 输出：["ALICE", "BOB", "CHARLIE"]
