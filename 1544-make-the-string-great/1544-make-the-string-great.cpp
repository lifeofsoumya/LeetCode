class Solution {
public:
    string makeGood(string s, int sz = 0) {
        while (sz != s.size()) {
            sz = s.size(); // size reducing with each removal
            for (int i = 0; i + 1 < s.size(); ++i)
                if (abs(s[i] - s[i + 1]) == 32) // mod of ascii gap between captial and small 
                    s = s.substr(0, i) + s.substr(i + 2);
        }
        return s;
    }
};
