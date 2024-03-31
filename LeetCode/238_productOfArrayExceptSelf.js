// 238. Product of Array Except Self
// Medium
// Topics
// Companies
// Hint
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.



// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]


// Constraints:

// 2 <= nums.length <= 105
// -30 <= nums[i] <= 30
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.


function myFunc(total) {
    let first = 1;
    let array = []
    let index = 0
    while(index!= total.length){
        index++
        console.log("hi")
    }
    // for (i = index; i < total.length; i++) {
    //     // for (let j = 0; j < total.length; j++) {
    //     //     if (j !== i) {
    //     //         first = first * total[j]
    //     //     }
    //     // }
    //     // array.push(first)
    //     // first = 1
    //     console.log(i, index)
    //     while(index!= i){
    //         first = first * total[i]
    //         console.log(first)
    //     }
    //     index++
    //     array.push(first)
    //     first = 1
    // }
    return array
}


const numbers = [1, 2, 3, 4];
var a = myFunc(numbers);
console.log(a)
