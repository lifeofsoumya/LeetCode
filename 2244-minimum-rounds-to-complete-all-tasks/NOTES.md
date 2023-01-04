Intuition
if freq(level) == 1
we cannot express in 3 tasks + 3 tasks + .. + 2 tasks
​
check for freq(level) > 1
and try to express in 3 tasks + 3 tasks + .. + 2 tasks.
​
so we should select the minimum number of 3 and 2.
​
we should select maximum of 3 tasks and at last add one (1 task or 2 task).
​
Approach
First store the count in map.
​
if freq(level) == 1 --> return -1;
if freq(level) == 2 --> one 2-task
if freq(level) == 3 --> one 3-task
​
so if freq(level) = 3*k.
then k batches.
​
if freq(level) = 3*k + 1;
then 3*(k-1) + 2 + 2 batches.
nothing but 3 * (k-1) + 3 + 1
divide by 3 and add one extra batch. (Take some examples it will be easy to understand).
​
if freq(level) = 3*k + 2;
then 3*k + 2
divide by 3 and add one extra batch.
​
Complexity
Time complexity: O(n)
Space complexity: O(n)