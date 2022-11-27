Idea
​
Let dp[i][d] denotes the number of subsequences (have at least 2 numbers) that ends with nums[i] and its common difference is d.
For i in [1..n-1]
For j in [0..i-1]:
diff = nums[i] - nums[j]
dp[i][diff] += dp[j][diff] + 1
ans += dp[j][diff] // We += dp[j][diff] because it's the number of valid subsequences (have >= 3 elements). But dp[i][diff] is the number of valid subsequences (have >= 2 elements).
​
![](https://assets.leetcode.com/users/images/603b70a0-196a-4ce6-bc89-28dfb3adc472_1631342659.9692721.png)