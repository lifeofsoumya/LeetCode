class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN, mn = INT_MAX;
        for(int i = 0; i<n; ++i){
            if(nums[i]%2 != 0) nums[i]*=2;
            
            mx = max(mx, nums[i]);
            mn = min(mn, nums[i]);
        }
        int minDev = mx - mn;
        priority_queue<int> pq;
        
        for(int i = 0; i<n; i++){
            pq.push(nums[i]);
        }
        while(pq.top()%2==0){
            int temp = pq.top();
            pq.pop();
            minDev = min(minDev, temp - mn);
            temp /= 2;
            mn = min(mn, temp);
            pq.push(temp);
        }
        minDev = min(minDev, pq.top()-mn);
        return minDev;
    }
};