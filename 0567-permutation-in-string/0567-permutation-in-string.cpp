class Solution {
public:
    
bool checkInclusion(string s1, string s2) {
    if (s2.size() < s1.size()) return false;
    vector<int> freqS1(26, 0);
    for (char c : s1) freqS1[c - 'a']++;

    vector<int> freqS2(26, 0);
    int i = 0, j = 0;

    while (j < s2.size()) {
        freqS2[s2[j] - 'a']++;

        if (j - i + 1 == s1.size()) {
            if (freqS1 == freqS2) return true;
            freqS2[s2[i] - 'a']--;
            i++;
        }
        j++;
    }
    return false;
}


};