// // // function modifyArray(arr, data) {
// // //     arr.push(data);
// // //   }
// // //   const myArray = [1, 2, 3];
// // //   console.warn(myArray)
// // //   modifyArray(myArray,1);
// // //   console.warn(myArray)



// // function testType (){
// //   //swap to variable without third variable
// //   // var a = 2
// //   // var b = 3
// //   // a = a+b-a
// //   // console.warn(a)

// // }
// // testType()

// // function newFunction (){
// //   // let length=19;
// //   // let breadth;
// //   // let area=length*breadth;
// //   // console.log(area);//NaN
// //   // var length2=19;
// //   // var breadth2=null;
// //   // var area2=length2*breadth2;
// //   // console.log(area2);
// //   var arr = [1,2,83, 4];
// //   for (let i = 0;i<arr.length-1;i++){
// //     for(let j = 0;j<arr.length-i+1;j++){
// //       if(arr[i] > arr[i-1]){
// //         temp = arr[i]
// //         arr[i] = arr[i+1]
// //         arr[i-1] = temp
// //       }
// //     }

// //   }

// //   console.warn(arr)
// // }


// // function newFunction1(){

// //   console.warn(1)

// // }
// // function newFunction2 (){
// //   setTimeout(()=>{console.warn(2), 2000})

// // }
// // function newFunction3(){
// //   console.warn(3)
// // }

// // // const a = newFunction1()
// // // const b = newFunction2()
// // // const c = newFunction3()

// // newFunction()


// // 'use strict';

// // process.stdin.resume();
// // process.stdin.setEncoding('utf-8');

// // let inputString = '';
// // let currentLine = 0;

// // process.stdin.on('data', function (inputStdin) {
// //   inputString += inputStdin;
// // });

// // process.stdin.on('end', function () {
// //   inputString = inputString.split('\n');

// //   main();
// // });

// function fizzBuzz(n) {
//   for (let i = 1; i <= n; i++) {
//     if (i % 3 == 0 && i % 5 == 0) {
//       console.log("FizzBuzz")
//     } else if (i % 3 == 0) {
//       console.log("Fizz")
//     } else if (i % 5 == 0) {
//       console.log("Buzz")
//     } else {
//       console.log(i)
//     }

//   }


//   // Write your code here

// }

// //function main() {

// // const n = parseInt(readLine().trim(), 10);
// fizzBuzz(15);
// //}



// let arr = [1,4,20,3,10,5]
// let sum=33;

// for(let i = 0;i < arr.length; i++){
//   let cs = arr[i];
//   if(cs == sum){
//     console.log("sum found");
//     return
//   } else {
//     for(let j= i+1; j < arr.length; j++){
//       cs += arr[j];

//       if(cs == sum){
//         console.log("found", i , j)
//         return
//       }

//     }

//   }
// }



// let m = 5;
// let n = m;
// n = 8
// console.log(m)



// let  m ={
//   x: 5
// }
// let n = m
// n.x = 8

// console.log(m)


// let sym = new Symbol();
// let sym2 = new Symbol("symbole")

const MY_KEY = Symbol();
let obj = {};
obj[MY_KEY] = "123";
console.log(obj[MY_KEY])

const people = {};
people.doctor = 'Pranita';
let sym = Symbol();
people[sym] = 'Boo';
console.log(people);			//{doctor: "Pranita", Symbol(): "Boo"}
console.log(Object.keys(people));	// ['doctor']