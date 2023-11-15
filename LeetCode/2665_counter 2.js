/**2665. Counter II/**

//  Write a function createCounter. It should accept an initial integer init. It should return an object with three functions.
//  The three functions are:
//  increment() increases the current value by 1 and then returns it.
//  decrement() reduces the current value by 1 and then returns it.
//  reset() sets the current value to init and then returns it.
*/

/**
// Example 1:
// Input: init = 5, calls = ["increment","reset","decrement"]
// Output: [6,5,4]
// Explanation:
// const counter = createCounter(5);
// counter.increment(); // 6
// counter.reset(); // 5
// counter.decrement(); // 4
*/
/**
// Example 2:
// Input: init = 0, calls = ["increment","increment","decrement","reset","reset"]
// Output: [1,2,1,0,0]
// Explanation:
// const counter = createCounter(0);
// counter.increment(); // 1
// counter.increment(); // 2
// counter.decrement(); // 1
// counter.reset(); // 0
// counter.reset(); // 0
*/

var createCounter = function (init) {
    let initialValue = init;
    return {
        increment: () => {
            return ++initialValue
        },
        decrement: () => {
            return --initialValue
        },
        reset: () => {
            return initialValue = init
        },
    }

};

// var increment = function(){
//     var x = 5;
//     var y = 10;
//     console.log("x", x);
//     var result = y * ++x;
//     console.log("result", result);
//     console.log("x", x);
// }

// increment()

// const counter = createCounter(0)
// console.log(counter.increment())
// console.log(counter.reset())
// console.log(counter.increment())
// console.log(counter.decrement())
// console.log(counter.reset())
// console.log(counter.reset())

