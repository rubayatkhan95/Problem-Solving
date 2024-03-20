// Given a string s, find the length of the longest  substring without repeating characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.


// Constraints:

// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.




// var lengthOfLongestSubstring = function (arr) {
//     let substring = ""
//     let maxLength = 0
//     let tempLength = arr.length;
//     if (arr.length <= 0) return 0
//     else if (arr.length == 1) return 1
//     for (let i = 0; i < tempLength; i++) {
//         if (!substring.includes(arr[i])) {
//             substring += arr[i]
//             maxLength = substring.length
//         }
//         else {
//             if (substring.length > maxLength) {
//                 maxLength = substring.length
//             }
//             substring = arr[i]
//         }
//     }
//     return maxLength

// }

// console.log(lengthOfLongestSubstring("dvdf"))



function lengthOfLongestSubstring(s) {
    let count = 0;
    for (let i = 0; i < s.length; i++) {
        let set = new Set();
        for (let j = i; j < s.length; j++) {
            if (!set.has(s.charAt(j))) {
                set.add(s.charAt(j));
            } else {
                break;
            }
        }
        console.log(set)
        count = Math.max(count, set.size);
    }
    // let set = new Set()
    // let count = 0
    // for(i = 0; i< s.length ; i++){
    //     for(j = i;j < s.length ; j++){
    //         console.log(s.charAt(j))
    //         if(!set.has(s.charAt(j))){
    //             set.add(s.charAt(j))
    //         } else{
    //             break
    //         }
    //     }
    //     count = Math.max(count , set.size)

    // }
    // return set;

    return count
}

console.log(lengthOfLongestSubstring("dvdf"))
