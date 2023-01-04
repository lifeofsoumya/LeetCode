1.we have to count freq of each task[i]
For that we will use unoredered map and count freq of the task
2.if we have single task ->freq[task[i]]==1, then return -1
why -1?->bcz we have to complete 2 or 3 task in one time
if task is multiple of three then we can do three task together
then add freq[task[i]]/3 to ans
otherwise add freq[task[i]]/3 +1 to ans
lets suppose we have 2 task then we can do in one go
if we have 4 task then we will do 2,2
if we have 5 task then we will do 3,2