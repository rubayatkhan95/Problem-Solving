//** 20. Valid Parentheses */

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false


// Constraints:
// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'

/**
 * @param {string} s
 * @return {boolean}
 */
//  var isValid = function(s) {
//     const tempArray = []
//     const openBrackets = ['(','{','[']
//     const closedBrackets = [')','}',']']
//     for (let character of s) { // loop trought all letters of expr
//         if(openBrackets.includes(character)){ // if its oppening bracket
//             tempArray.push(character)
//         }else if(closedBrackets.includes(character)){ // if its closing
//             const openPair = openBrackets[closedBrackets.indexOf(character)]// find its pair
//             if(tempArray[tempArray.length - 1] === openPair){ // check if that pair is the last element in the array
//                 tempArray.splice(-1,1) // if so, remove it
//             }else{ // if its not
//                 tempArray.push(character)
//                 break // exit loop
//             }
//         }
//     }
//     return (tempArray.length === 0)
// };


var isValid = function(s) {
    const tempArray = []
    const openBrackets = ['(','{','[']
    const closedBrackets = [')','}',']']

    for (const element of s) {
        if(openBrackets.includes(element)){
            tempArray.push(element);
        } else if(closedBrackets.includes(element)){
            const openPair = openBrackets[closedBrackets.indexOf(element)];
            if(tempArray[tempArray.length-1] == openPair){
                tempArray.splice(-1,1)
            } else {
                tempArray.push(element)
            }
        }
    }

    return (tempArray.length === 0)
};



// var isValid = function(s) {
//     const pair = {
//         "[" : "]",
//         "{" : "}",
//         "(" : ")"
//     }
//     var tempArray = [];
//     for (let index = 0; index < s.length; ++index) {
//         const element = s[index];
//         if(pair.hasOwnProperty(element)){
//             console.log("here", element)
//             tempArray.push(element)
//         } else if(Object.values(pair).includes(element)) {
//             console.log("here 1", element)
//             console.log("Object.keys(pair)", Object.keys(pair))
//             if(tempArray[tempArray.length-1] === element){
//                console.log("here 2", element)
//                tempArray.pop()
//             } else {
//                 console.log("here 3", element)
//                 tempArray.push(element)
//             }
//         }
//     }
//     return (tempArray.length == 0)
// };


 var valid = isValid("()");
 console.log(valid)