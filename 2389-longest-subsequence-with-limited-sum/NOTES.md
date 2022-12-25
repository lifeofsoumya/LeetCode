My temp code: to be rechecked for the easiest sol...______-------------
​
```
class Solution {
public:
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
sort(nums.begin(), nums.end());
int m =queries.size(), n = nums.size(), tempSum = 0;
vector<int> ans(m, 0); // if no elements 0 will be returned at any individual place
for(int i = 0; i<m; i++){
for(int j = 0; j<n; j++){
if(tempSum > queries[i]){
ans[i] = j+1;
break;
}
cout << nums[j] << endl;
tempSum += nums[j];
}
}
return ans;
}
};
```