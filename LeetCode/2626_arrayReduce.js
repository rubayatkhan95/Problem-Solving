/** 2626. Array Reduce Transformation */

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
*/
var reduce = function (nums, fn, init) {
  if (nums.length > 0) {
    nums.forEach(element => {
      init = fn(init, element);

    });
  }
  return init
};

// nums = []
// fn = function sum(accum, curr) { return accum + curr; }
// init = 0

// nums = [1,2,3,4]
// fn = function sum(accum, curr) { return accum + curr * curr; }
// init = 100

// nums = []
// fn = function sum(accum, curr) { return 0; }
// init = 25

var finalAnswer = reduce(nums, fn, init)
console.log(finalAnswer)


// const message = ["JavaScript ", "is ", "fun"];
// // function to join each string elements
// function joinStrings(accumulator, currentValue) {
//     console.log(accumulator, currentValue)
//   return accumulator + currentValue;
// }

// // reduce join each element of the string
// let joinedString = message.reduce(joinStrings);
// console.log(joinedString);

// Output: JavaScript is fun.