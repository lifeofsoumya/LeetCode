class Solution {
public:
    vector<int> tmp;
    vector<vector<int>> res;
    void helper(vector<int> &nums, int i){
        res.push_back(tmp);

        for(int j = i ; j < nums.size(); j++){
            tmp.push_back(nums[j]);    
            helper(nums, j+1);
            tmp.pop_back();
        }
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        helper(nums, 0);
        return res;
    }
};