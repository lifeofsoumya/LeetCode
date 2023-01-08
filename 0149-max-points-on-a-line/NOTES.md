I tried
class Solution {
public:
int maxPoints(vector<vector<int>>& p) {
unordered_map<int, int> umap;
for(int i = 0; i< p.size()-1; i++){
auto m = (p[i+1][1] - p[i][1]) / (p[i+1][0] - p[i][0]);
umap[m]++;
cout << m << endl;
}
priority_queue<pair<int, int>> pq;
for (auto [a, b] : umap) pq.push({b, a});
return pq.top().first + 1;
}
};