class Solution {
public:
    bool bfs(int v, vector<vector<int>> &g, vector<int> &color){
        queue<int> q;
        q.push(v);
        color[v] = 0; // 0 and 1 defines the two colors
        
        while(!q.empty()){
            int val = q.front();
            vector<int> temp = g[val]; // find a numbers adjacents e.g 4 = {2, 3, 5}
            q.pop();
            for(int i = 0; i < temp.size(); i++){
                if(color[temp[i]] == -1){
                    color[temp[i]] = !color[val];
                    q.push(temp[i]);
                }
                else if(color[temp[i]]==color[val]) return false;
            }            
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& g) {
        int n = g.size();
        vector<int> color (n, -1);
        // just for connected components extra part
        for(int i = 0; i<n ; i++){
            if(color[i]==-1){
                if(bfs(i, g, color)== false) return false;
            }
        }
        return true;
    }
};