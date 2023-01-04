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
            if(t%3==0) count+=t/3;
            else count+=(t/3)+1;
            // count += t / 3;
            // if(t % 3 != 0) count++;
        }
        return count;
    }
};