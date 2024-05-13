/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const modArr = [];
    for(let i = 0; i < arr.length; i++){
        modArr.push(fn(arr[i], i));
    }
    return modArr;
};