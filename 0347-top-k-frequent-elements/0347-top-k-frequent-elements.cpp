class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for(auto i : nums)
            m[i]++;
        vector<int> res;
        priority_queue<pair<int, int>> pq;
        for (auto [a, b] : m) pq.push({b, a});
        while(k){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};