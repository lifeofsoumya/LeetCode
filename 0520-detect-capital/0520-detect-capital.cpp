class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        for (char c : word) if (isupper(c)) ++cnt;
        return !cnt || cnt == word.size() || cnt == 1 && isupper(word[0]); // !cnt means if cnt = 0, all small then true, then if cnt == size, all caps still true, if cnt ==1, only one caps that too first letter, still true
    }
};