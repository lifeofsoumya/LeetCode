class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, int> vmap;
        unordered_map<char, int> umap;
        int i = 0, n = pattern.size();
        istringstream it(s);
        for (string word; it >> word; ++i) {
        if (i == n || umap[pattern[i]] != vmap[word])
            return false;
        umap[pattern[i]] = vmap[word] = i + 1;
        }
        return i == n;
    }
};