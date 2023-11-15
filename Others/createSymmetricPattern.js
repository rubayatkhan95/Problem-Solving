// Write a function to print the following in one loop:
// 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1

// Here , n is 10. You have to stop the loop to n then start from reverse order again to print.
// You have to use only one loop which will run for 10 times only

// const getNextNumber = (num) =>{
//   let arr  =[];
//   for(let i = 1;i<= num;++i){
//     arr[i-1] = i
//     if(i!=num) arr[num+i-1] = num-i
//   }
//   console.warn(arr)
// }

//Time Complexity
// O(N)



// Write a function to print the following in one loop:
// 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1

// Here , n is 10. You have to stop the loop to n then start from reverse order again to print.
// No limit for loop
const getNextNumber = (num) =>{
  for(let i = 1;i<= num*2-1;i++){
    if(i>=10) console.warn(2*num-i)
    else console.warn(i)
  }

}
// Examples
getNextNumber(10);

//Time Complexity
// O(N)
