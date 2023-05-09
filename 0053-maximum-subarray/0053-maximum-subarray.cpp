class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxN = INT_MIN;
        for(int i : nums){
            sum += i;
            maxN = max(sum, maxN);
            if(sum < 0) sum = 0;
        }
        return maxN;
    }
};