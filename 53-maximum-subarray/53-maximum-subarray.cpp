class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0; 
        int maxn = INT_MIN;
        for( auto it : nums){
            sum += it;
            maxn = max(sum, maxn);
            if(sum < 0) sum = 0;
        }
        return maxn;
    }
};