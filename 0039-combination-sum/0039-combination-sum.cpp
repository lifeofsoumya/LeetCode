class Solution {
public:
    void Sum(vector<int>& arr, int target, vector<vector<int> >& res, vector<int>& r, int i)
    {
        if(target == 0){
            res.push_back(r);
            return;
        }
        
        while(i <  arr.size() && target - arr[i] >= 0){
            r.push_back(arr[i]);
            Sum(arr,target - arr[i],res,r,i);
            r.pop_back();
            i++;
        }
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(),arr.end()),arr.end()); // remove non unique      
        vector<int> r;
        vector<vector<int> > res;        
        Sum(arr, target, res, r, 0);       
        return res;
    }
};