Time O(N)
Space O(height)
We can save one pass if you we sacrifice moce space.Explanation
Write a sub function s(TreeNode root) to get the sum of a sub tree.
s is short for sub and sum.
​
First pass, get the total sum.
Now we have the right total sum of the whole tree.
Second pass, find the biggest product.
​
From @kaiwensun:
​
Overflow
For those who are not using Python and are worried about overflow:
You can use long int (which is 64-bit long)
Each tree has at most 50000 nodes and at least 2 nodes.
Each node's value is between [1, 10000].
So the maximum possible sum 5000 * 100000 = 500000000 = 0x1DCD6500 won't overflow 32-bit int.
500000000 * 500000000 won't overflow 64-bit long.
Mod
Don't do MOD too early when calculate the sum,
because that will give you wrong result when you look for the maximum value.
​
Complexity
Time O(N)
Space O(height)
We can save one pass if you we sacrifice moce space.