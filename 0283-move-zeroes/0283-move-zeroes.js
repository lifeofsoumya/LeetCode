/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    if(nums.length == 0) return nums;
    let insertPosition = 0;
    for(let i = 0; i < nums.length; i++){
        if(nums[i] !== 0){
            nums[insertPosition++] = nums[i]
        }
    }
    while (insertPosition < nums.length) {
        nums[insertPosition++] = 0;
    }
    
    return nums;
};