```
/*
    Input 
    1, 2, 3
    4, 5, 6
    7, 8, 9 


    for-loop 1 
    swap1               swap2               swap3
    1<->3               3<->9              9<->7

    3, 2, 1            9, 2, 1            7, 2, 1
    4, 5, 6    =>      4, 5, 6    =>      4, 5, 6
    7, 8, 9            7, 8, 3            9, 8, 3

    

    for-loop 2 
    swap1              swap2              swap3
    2<->6              6<->8              8<->4

    7, 6, 1            7, 8, 1            7, 4, 1
    4, 5, 2    =>      4, 5, 2    =>      8, 5, 2
    9, 8, 3            9, 6, 3            9, 6, 3
    

    output     
    7, 4, 1,
    8, 5, 2,
    9, 6, 3,
*/
```

second approch is here ----

```
// complement of matrix 
        int n = matrix.size();
        for(int i=0; i<n; ++i) {
            for(int j=i; j<n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

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

![](https://assets.leetcode.com/users/images/b0b11c49-5bbd-4021-ae15-a853e7ebcd30_1632729522.5598977.png)
