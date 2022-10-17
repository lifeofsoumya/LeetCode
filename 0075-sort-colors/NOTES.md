1.
1 0 2 2 1 0
^         ^
L         H
M
​
Mid != 0 || 2 --- \\ as  nums[i] is either 0, 1, or 2
Mid++
​
1 0 2 2 1 0
^ ^       ^
L M       H
​
Mid == 0
Swap Low and Mid
Mid++
Low++
​
0 1 2 2 1 0
^ ^     ^
L M     H
​
Mid == 2
Swap High and Mid
High--
​
0 1 0 2 1 2
^ ^   ^
L M   H
​
Mid == 0
Swap Low and Mid
Mid++
Low++
​
0 0 1 2 1 2
^ ^ ^
L M H
​
Mid == 2