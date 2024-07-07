/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    if(height.length === 2 ) return Math.min(height[0], height[1])
    let maxArea = 0;
    let left = 0;
    let right = height.length - 1;
    while(left < right){
        maxArea = Math.max(maxArea, (right-left) * Math.min(height[left], height[right]));
        if(height[left] < height[right]) left++;
        else right--;
    }
    return maxArea;
};

