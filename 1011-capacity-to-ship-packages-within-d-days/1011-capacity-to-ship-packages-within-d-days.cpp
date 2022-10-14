class Solution {
public:
    bool countDays(vector<int>& weight,int mid,int days) {
	  
       int res=1;
	   // we consider the mid as a result and proceed with calculation;
	   
       int sum=0;
      for (auto w : weight) {
        sum += w;
        if (sum > mid)
        {
            ++res;
			// number of days increasing wrt weight cross the mid weight
            sum = w;
        }
      }
      return res<=days;
	  // In this we are adjusting the days wrt to the weights
	  // We consider mid as that min weight and try to adjust days with that weight
	  // if it fails that means the mid limit should decrease.
	  
}
    int shipWithinDays(vector<int>& weights, int days) {
	
	// remember the low and high value can be anything just make sure
	// low < high
        int low =*max_element(weights.begin(),weights.end());
        int high =accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid =(low+high)>>1;
            if (countDays(weights, mid,days)) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};