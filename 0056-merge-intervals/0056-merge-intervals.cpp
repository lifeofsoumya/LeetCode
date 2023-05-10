class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        if(v.size()==0) return v;
        sort(v.begin(), v.end());
        vector<vector<int>> res;
        vector<int> temp = v[0];
        for(auto it: v){
            if(it[0] <= temp[1]){
                temp[1] = max(it[1], temp[1]);
            }
            else{
                res.push_back(temp);
                temp = it;
            }
        }
        res.push_back(temp);
        return res;
    }
};