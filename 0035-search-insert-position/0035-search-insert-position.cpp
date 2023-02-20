class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n = nums.size(); // not binary search though
       while(i<n)
       {
           if(target==nums[i])
               return i;
           else if(target>nums[i]){
               i++;
           }
           else{
               return i;
           }
       }
        
         return i;
    }
};