Dont' know why doesn't work: striver approach _--------------------------------
class Solution {
public:
int orangesRotting(vector<vector<int>>& grid)
{
vector<int> dir={-1,0,1,0,-1}; //used for finding all 4 adjacent coordinates
int m=grid.size();
int n=grid[0].size();
queue<pair<int,int>> q;
int fresh=0; //To keep track of all fresh oranges left
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
{
if(grid[i][j]==2)
q.push({i,j});
if(grid[i][j]==1)
fresh++;
}
int ans=-1; //initialised to -1 since after each step we increment the time by 1 and initially all rotten oranges started at 0.
while(!q.empty())
{
int sz=q.size();
while(sz--)
{