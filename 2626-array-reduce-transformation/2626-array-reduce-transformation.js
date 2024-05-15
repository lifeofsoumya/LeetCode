/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if (nums.length == 0) return init;
    let temp = init;
    for (let i = 0; i < nums.length; i++){
        if (i == 0) {
            temp = fn(temp, nums[i]);
        } else temp = fn(temp, nums[i]);
    }
    return temp;
};