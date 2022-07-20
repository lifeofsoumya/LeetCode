class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int high=INT_MIN;
        for(auto i:accounts){
            int sum = accumulate(i.begin(), i.end(), 0);
            if(sum>high) high=sum;
            else continue;
        }
        return high;
    }
};