class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int map[26];
        for (int i = 0; i < 26; i++)
            map[order[i] - 'a'] = i;  // for 'e' at first char, 5th place's value will'be 1
        for (string &w : words)
            for (char &c : w)
                c = map[c - 'a']; // converting char to num
        return is_sorted(words.begin(), words.end());
    }
};