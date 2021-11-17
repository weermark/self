// 原始 array.sort(), 沒有指定比較函式
const months = ["March", "Jan", "Feb", "Dec"];
months.sort();
console.log(months);
console.log("-----> 1. Sort by 字串順序, 遞增 (ASC)\n");
// expected output: Array ["Dec", "Feb", "Jan", "March"]

const array1 = [1, 30, 4, 21, 100000];
array1.sort();
console.log(array1);
console.log("-----> 2.Sort by 字串順序, 遞增 (ASC)\n");
// expected output: Array [1, 100000, 21, 30, 4]

// 一維數字陣列排序
var arr1 = [1, 3, 20, 7, 14];
arr1.sort(function (a, b) {
  return a - b; // 遞增
});
console.log(arr1);
console.log("-----> 3. Sort numbers ASC, success\n");

// 二維陣列依元素的某個成分排序
var arr2 = [
  ["taipei", 13, "cloudy"],
  ["taoyuan", 27, "sunny"],
  ["tainan", 9, "rainy"],
];
// 依元素的第二個成分（數字）排序
arr2.sort(function (a, b) {
  return a[1] - b[1]; // 遞增
});
console.log(arr2);
console.log("-----> 4. Sort elements by 2nd numbers, success\n");

// 依元素的第三個成分（字串）排序:
arr2.sort(function (a, b) {
  return a[2] > b[2];
});
console.log(arr2);
console.log("------> 5. Sort elements by 3rd strings, fail\n");

// 物件陣列排序
var list2 = [
  { color: "white", size: "XXL" },
  { color: "red", size: "XL" },
  { color: "black", size: "M" },
];

var list1 = [
  { color: "white", size: 3 },
  { color: "blue", size: 2 },
  { color: "blue", size: 1 },
];

// Sort list by size (數字)
list1.sort(function (a, b) {
  return a.size - b.size;
});
console.log(list1);
console.log("-----> 6. Sort list1 by size numbers, success\n");

// Sort list by color (字串)
list1.sort(function (a, b) {
  return b.color > a.color;
});
console.log(list1);
console.log("-----> 7. Sort list1 by color strings DESC , fail\n");

list2.sort(function (a, b) {
  return a.color > b.color;
});
console.log(list2);
console.log("-----> 8. Sort list2 by color strings ASC, fail\n");

console.log("\n****** Use new sort (arrow) function ******\n");

// 依元素的第二個成分（數字）排序
var arr2 = [
  ["taipei", 13, "cloudy"],
  ["taoyuan", 27, "sunny"],
  ["tainan", 9, "rainy"],
];
// arr2.sort(function (a, b) { return a[1] - b[1]; })
arr2.sort((a, b) => a[1] - b[1]);
// arr2.sort((a, b) => (a[1] > b[1]) ? 1 : -1) // 1: 排序; -1: 不動
console.log(arr2);
console.log("-----> 10. Sort arr2 by 2nd numbers ASC, success\n");

// 依元素的第三個成分（字串） 排序
// arr2.sort(function(a, b) { return a[2] > b[2]})
// arr2.sort((a, b) => a[2] > b[2])     // 字串比對，不可縮寫
arr2.sort((a, b) => (a[2] > b[2] ? 1 : -1));
console.log(arr2);
console.log("-----> 11. Sort arr2 by 3rd strings ASC, success\n");

// 物件陣列
list1 = [
  { color: "white", size: 3 },
  { color: "blue", size: 2 },
  { color: "blue", size: 1 },
];
// Sort list by color property
list1.sort((a, b) => (a.color > b.color ? 1 : -1));
// list1.sort((a, b) => a.color > b.color)  // 不可縮寫
console.log(list1);
console.log("-----> 12. Sort list1 by color ASC, success\n");

// Sort list by size
list1.sort((a, b) => b.size - a.size);
console.log(list1);
console.log("-----> 13. Sort list1 by size DESC, success\n");

// 在一個參數值相同時，啟動第二個排序參數
// list1.sort((a, b) => (a.color > b.color) ? 1 : (a.color === b.color) ? ((b.size - a.size) ? 1 : -1) : -1)
list1.sort((a, b) =>
  (a.color > b.color) ? 1 : (a.color === b.color) ? (b.size - a.size) : -1
);
console.log(list1);
console.log("-----> 14. Sort color ASC & size DESC, success\n");
