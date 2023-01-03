class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;
        if (strs.empty()) return res;
        for (auto c = 0; c < strs[0].size(); ++c)
            for (auto i = 1; i < strs.size(); ++i) {
                if (strs[i - 1][c] > strs[i][c]) {
                    ++res;
                    break;
                }
            }
        return res;
    }
};