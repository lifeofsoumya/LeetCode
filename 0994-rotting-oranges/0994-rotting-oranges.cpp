class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int time = 0;
        int countFresh = 0;
        int countRotten = 0;
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                }
                else if(grid[i][j]==1)
                {
                    countFresh++;
                }
            }
        }
        int drow[] = {1,0,-1,0};
        int dcol[] = {0,-1,0,1};
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            time = max(time,t);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && grid[nrow][ncol]!=2 && grid[nrow][ncol]!=0)
                {
                    grid[nrow][ncol] = 2;
                    countRotten++;
                    q.push({{nrow,ncol},t+1});
                }
            }
        }
        if(countFresh!=countRotten) return -1;
        else if(countFresh==0) return 0;
        return time;
    }
};