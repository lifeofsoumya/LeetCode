class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans (n+1, 0); // n+1 items all default to 0
        for(int i = 1; i <= n; i++)
            ans[i] = ans[i/2] + (i&1); // “i&1” evaluates to “true” if “i” is and odd number else it returns “false”
        return ans;
    }
};