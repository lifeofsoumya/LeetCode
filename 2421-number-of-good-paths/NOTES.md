Approach
​
We will create adjacent list for each node where we will store only those edges which are less than or equal to current node.
Then we will create another map where we will put all the nodes with same value in one vector. As map stores in sorted order, we will look at smaller values first.
We will use Union Find data structure to create components of edges.
Then we will use cnt * (cnt - 1) / 2 to count the number of good paths in each component.
Edit 1
Why we are storing equal values in map and checking smaller values first?
Because we need to check value from small to large. For each value vector group to connect to the current union, so that they are the the largest nodes which meets both conditions for a good path.
​
Diagram Example
​
![](https://assets.leetcode.com/users/images/2f39c217-40fc-45d9-9ad5-bfca636567ac_1664092133.4093423.png)
​
![](https://assets.leetcode.com/users/images/6fd72903-ecf3-456d-9633-42a86f2d8023_1664092138.2639654.png)
​
![](https://assets.leetcode.com/users/images/2df45590-179e-4e39-ac32-5c6bb009afee_1664094321.1567614.png)
​
![](https://assets.leetcode.com/users/images/a97f72f8-457b-4528-84c5-eb77148abc6c_1664103968.1126013.png)
​
​