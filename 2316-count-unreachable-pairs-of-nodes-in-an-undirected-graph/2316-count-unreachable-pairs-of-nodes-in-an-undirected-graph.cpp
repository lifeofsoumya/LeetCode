class Solution {
public:
    vector<bool> visited;
    
    int dfs(int src, vector<vector<int>> &graph)
    {
        visited[src]=true;
        int cnt=1;
        for(auto it=graph[src].begin(); it!=graph[src].end(); it++)
        {
            if(visited[*it]==false)
                cnt += dfs(*it, graph);
        }
        return cnt;
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        visited = vector<bool> (n+1, false);
        vector<vector<int>> graph(n+1);
        
        // Create adjacency list
        for(auto &x: edges)
        {
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        
        long long ans=0, cur;
        int already_visited=0; // the number of node visited already
        
        for(int i=0; i<n; i++)
        {
            if(!visited[i])
            {
                cur = dfs(i, graph);
                ans += (n - already_visited - cur) * cur;
                already_visited += cur;
            }
        }
        return ans;
    }
};