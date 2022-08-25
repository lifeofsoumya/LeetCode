output
7, 4, 1,
8, 5, 2,
9, 6, 3,
*/
```
​
second approch is here ----
​
```
// complement of matrix
int n = matrix.size();
for(int i=0; i<n; ++i) {
for(int j=i; j<n; ++j) {
swap(matrix[i][j], matrix[j][i]);
}
}
​
for(int i=0; i<n; ++i) {
// 2 Pointer approach :  just like we do in 1D array we take left and right pointers
// and swap the values and then make those pointers intersect at some point.
int left = 0, right = n-1;
while(left < right) {
swap(matrix[i][left], matrix[i][right]);
++left;
--right;
}
}
```
​
![](https://assets.leetcode.com/users/images/b0b11c49-5bbd-4021-ae15-a853e7ebcd30_1632729522.5598977.png)