We are given a DAG consisting of n nodes from 0 to n-1 and we need to return all paths from 0 to n-1.
​
✔️ Solution - I (BFS)
​
We can start from the starting node 0 and traverse every possible next node from the current node. Whenever we reach the last node n-1, we will add the path till now into the final answer. This process can be implemented using a BFS traversal as -
​
Initialize a queue of path of nodes with the node 0 inserted into it initially denoting the starting node in our traversal path from 0 to n-1
Pop an element path from the queue
Explore every child node of last node in the path. That is, we try every possible edge in graph from node at the end of current path. Each edge added to end of path gives us another path which will be added to queue for further exploration
If the last node in path is n-1, we know that this is a valid source to target path in the graph. So, we add it to final list of paths
We repeat this process until the queue is not empty, that is, until there are paths remaining to be explored.
C++
​
```
class Solution {
public:
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& G) {
vector<vector<int>> ans;
queue<vector<int>> q;
q.push({0});                                                   // starting node of every path
while(size(q)) {
auto path = move(q.front()); q.pop();
if(path.back() == size(G)-1) ans.push_back(move(path));    // found valid path
else
for(auto child : G[path.back()]) {                     // try every possible next node in path
path.push_back(child);
q.push(path);                                      // push path into queue for further exploration
path.pop_back();
}
}
return ans;
}
};
```
​
​
or...............
​
```
void dfs(vector<vector<int>>& graph, vector<vector<int>>& result, vector<int> path, int src, int dst) {
path.push_back(src);
if(src == dst) {
result.push_back(path);
return;