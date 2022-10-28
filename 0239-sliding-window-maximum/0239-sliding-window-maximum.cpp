class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<pair<int, int>> dq; // stores numsi, index | only elements inside window will be stored
        vector<int> res;
        
        for(int i=0; i<nums.size(); ++i){
            if(!dq.empty() && dq.front().second <= (i-k)) // if front element is out of window remove it
                dq.pop_front();
            while(!dq.empty()&& dq.back().first < nums[i]) // maintain elems in descending order
                dq.pop_back();
            dq.push_back({nums[i], i}); // push current node
            
            if(i>= (k-1))
                res.push_back(dq.front().first); // insert max of current windows
        }
        return res;
    }
};