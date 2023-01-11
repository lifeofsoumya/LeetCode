Observation
We know that graph is in a form of tree i.e no cycles and that the last node is supposed to be the root it self, this gives us an idea that we can use DFS to solve this.
At each node we can check if its children has any apples if it does we add the distance from current node to that child node and we return this distance else we return 0.
The other key observation is that each time we collect the apple we have to walk back to the parent, thus the distance travelled is doubled.
​
Solution
We can return the distance as 0 if no apples found under the node and the current node also doesn't have an apple else we return the distance travelled.