class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0; 
        int maxn = INT_MIN;
        for( auto it : nums){
            sum += it; // add next number to sum
            maxn = max(sum, maxn); // if sum is maximum then maxn = sum, which would be output
            if(sum < 0) sum = 0; // if sum is negative set sum to default 0 : which is triggering point, making it O of n complexity : When sum of two elements is less than 0, there's no point of including them to subarray coz they will anyway decrease the sum, so better start the res subarray after them, so set sum = 0
        }
        return maxn;
    }
};