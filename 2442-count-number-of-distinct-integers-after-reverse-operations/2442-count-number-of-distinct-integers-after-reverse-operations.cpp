class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(nums.begin(), nums.end());
        for(int i = 0; i< n; i++){
            int tmpNo = nums[i], res=0;
            while(tmpNo){
                int temp = tmpNo%10;
                res= res*10 + temp;
                tmpNo = tmpNo/10;                
            }
            s.insert(res);
        }
        return s.size();
    }
};