The minimum path to get to element A[i][j] is the minimum of A[i - 1][j - 1], A[i - 1][j] and A[i - 1][j + 1].
Starting from row 1, we add the minumum path to each element. The smallest number in the last row is the miminum path sum.
Example:
[1, 2, 3]
[4, 5, 6] => [5, 6, 8]
[7, 8, 9] => [7, 8, 9] => [12, 13, 15]