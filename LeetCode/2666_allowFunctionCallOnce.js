/**
 * @param {Function} fn
 * @return {Function}
 */

var once = function (fn) {
    let called = false;
    return function (...args) {
        if (called) return
        called = true
        return fn(...args)
    }
};

let fn = (a,b,c) => (a + b + c)
let onceFn = once(fn)
console.warn(onceFn(1, 2, 3)); // 6
console.warn(onceFn(2, 3, 6)); // undefined, fn was not called

