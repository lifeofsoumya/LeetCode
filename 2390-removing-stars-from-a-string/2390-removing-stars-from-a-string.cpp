class Solution {
public:
    string removeStars(string s) {
        string res; // first start empty then if no star enter that char.
        for (char c : s)
            if (c == '*')
                res.pop_back();
            else
                res += c;
        return res;
    }
};