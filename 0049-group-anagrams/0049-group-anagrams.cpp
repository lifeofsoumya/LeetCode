class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> umap;
        for(auto i : strs){
            auto x = i;
            sort(i.begin(), i.end());
            umap[i].push_back(x); 
        }
        for(auto i : umap){
            res.push_back(i.second);
        }
        return res;
    }
};