/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    let n = nums.length;
    k = k % n;
    if (k !== 0) {
        const arr = nums.slice(-k).concat(nums.slice(0, -k));
        for (let i = 0; i < n; i++) {
            nums[i] = arr[i];
        }
    }
};