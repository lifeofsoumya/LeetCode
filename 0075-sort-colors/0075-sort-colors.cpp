class Solution {
    public:
    void sortColors(vector<int>& nums) 
    {
        int tmp = 0, low = 0, mid = 0, high = nums.size() - 1;
    
        while(mid <= high) // Mid <= High is our exit case
        {
            if(nums[mid] == 0)
            {
                tmp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = tmp; // Swap Low and Mid
                low++; // move forward
                mid++;
            }
            else if(nums[mid] == 1)
            {
                mid++;
            }
            else if(nums[mid] == 2)
            {
                tmp = nums[high]; 
                nums[high] = nums[mid];
                nums[mid] = tmp; // Swap High and Mid
                high--; // move backward
            }
        }
    }
};