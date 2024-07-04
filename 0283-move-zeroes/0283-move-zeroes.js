/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    if(nums.length == 0) return nums;
    let pos = 0;
    for(let i = 0; i < nums.length ; i++){
        if(nums[i] !== 0){
            nums[pos++] = nums[i]; // it only creates array from non 0 values
        }
    }
    while(pos < nums.length){
        nums[pos++] = 0; // it inserts 0 till length matched
    }
    return nums;
};