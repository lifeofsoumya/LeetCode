class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        for(int i=0; i<n; ++i){
            res[i]= pow(nums[i],2);
        }
        sort(res.begin(), res.end());
        return res;
    }
};