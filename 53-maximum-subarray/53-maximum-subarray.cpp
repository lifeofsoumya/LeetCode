class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0; 
        int maxn = INT_MIN;
        for( auto it : nums){
            sum += it; // add next number to sum
            maxn = max(sum, maxn); // if sum is maximum then maxn = sum
            if(sum < 0) sum = 0; // if sum is negative set sum to default 0
        }
        return maxn;
    }
};