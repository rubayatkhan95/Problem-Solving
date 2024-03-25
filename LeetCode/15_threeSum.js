function pair(){

let nums = [-1, 0, 1, 2, -1, -4]
let newSet = new Set();
let sortedArray = nums.sort((a, b) => a - b); //[ -4, -1, -1, 0, 1, 2 ]
let highestNumber = sortedArray[sortedArray.length - 1]

// for (let i = 0; i < sortedArray.length; i++) {
//     for (let j = i + 1; j < sortedArray.length - 1; j++) {
//         if (sortedArray[i] + sortedArray[j] + highestNumber == 0) {
//             console.log(sortedArray[i], sortedArray[j], highestNumber)
//         }
//         // for (let k = j + 1; k < nums.length; k++) {
//         //     if (nums[i] + nums[j] + nums[k] === 0) {
//         //         let array = [nums[i], nums[j], nums[k]];
//         //         array.sort((a, b) => a - b);
//         //         let stringifiedArray = array.toString();
//         //         newSet.add(stringifiedArray);
//         //     }
//         // }
//     }
// }

for (let i = 0; i < sortedArray.length-2; i++) {
    let k = sortedArray.length - 1
    let j = i+1
    while (j < sortedArray.length - 1) {
        if(k<=j) break;
        if(sortedArray[i]+sortedArray[j]+sortedArray[k]>0){
            k--;
        } else if(sortedArray[i]+sortedArray[j]+sortedArray[k] == 0){
            newSet.add([nums[i], nums[j], nums[k]].toString());
            k--;
        }else{
            j++;
        }

    }


}



let disctinctArray = Array.from(newSet).map(string => string.split(',').map(Number))
//[[-1,-1,2],[-1,0,1]]

console.log(disctinctArray);
}

pair()

// console.log(pair())