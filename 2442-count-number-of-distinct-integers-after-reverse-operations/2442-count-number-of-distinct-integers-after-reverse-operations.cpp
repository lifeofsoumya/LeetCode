class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i< n; i++){
            int tmpNo = nums[i], res=0;
            while(tmpNo){
                int temp = tmpNo%10;
                res= res*10 + temp;
                tmpNo = tmpNo/10;                
            }
            cout << res << endl;
            nums.push_back(res);
        }
        set<int> s;
        for(auto i: nums)
            s.insert(i);
        return s.size();
    }
};