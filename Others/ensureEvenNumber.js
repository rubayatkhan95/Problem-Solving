// given a number,return it if it’s even, or return subsequent number
// if it is odd, without any if-else. Example: given 6-> return 6,
// given 7-> return 8.

const getNextNumber = (num) =>{
  return num+num%2
}

// Examples
console.log(getNextNumber(0)); // Output: 6
console.log(getNextNumber(1)); // Output: 8