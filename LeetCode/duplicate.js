

var containsDuplicate = function(nums) {
    let sortedArray = nums.sort((a, b) => a - b);
    for (let i = 0; i < sortedArray.length; i++) {
        if(sortedArray[i] == sortedArray[i+1]){
            return true
        }
    }
    return false
};

let list = [1, 1, 3, 4, 5]
var a = containsDuplicate(list)
console.log(a)