class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> m;
        for(auto x: tasks){
            m[x]++;
        }

        int count = 0;
        for(auto x: m){
            int t = x.second;
            if(t == 1) return -1;
            if(t%3==0) count+=t/3; // if task is multiple of three then we can do three task in t/3 times
            else count+=(t/3)+1; // any nyumber of task takes t/3 time, rest suppose if 2, it takes another step
        }
        return count;
    }
};