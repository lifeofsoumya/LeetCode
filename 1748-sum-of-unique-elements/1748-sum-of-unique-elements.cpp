class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    unordered_map<int, int> m;
    int res = 0;
    for (auto n : nums) {
        int cnt = ++m[n];
        res += cnt == 1 ? n : cnt == 2 ? -n : 0; // if cnt == 1 ie unique , else if cnt == 2 then substract it from sum and if cnt is greater than 2 then just pass and add 0
    }
    return res;
    }
};