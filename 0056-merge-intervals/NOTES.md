```
vector<vector<int>> merge(vector<vector<int>>& intervals) {
if(intervals.size()<=1) return intervals;
vector<vector<int>> result;
//sort takes O(nlogn) time
sort(intervals.begin(), intervals.end());
//insert the the the first interval in the result
result.push_back(intervals[0]);
//Traverse the whole vector .Takes O(n) time
for(int i=1; i<intervals.size(); i++) {
//if intevals are overlapping, in first iteration result is 0th element and intervals is 1st element
if(result.back()[1] >= intervals[i][0]) result.back()[1] = max(result.back()[1] , intervals[i][1]); // modify the last element of result with the maximum in i-1th and ith element
//else they are not overlapping normally insert second and then other elements to result
else result.push_back(intervals[i]);
}
return result;
}
```