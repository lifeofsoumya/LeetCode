TLE bruteforce:
​
```
class Solution {
public:
int longestCommonSubsequence(string text1, string text2) {
return longestCommonSubsequence(text1, text2, 0, 0);
}
int longestCommonSubsequence(string text1, string text2, int i, int j) {
if (i == text1.length() || j == text2.length())
return 0;
if (text1[i] == text2[j])
return 1 + longestCommonSubsequence(text1, text2, i + 1, j + 1);
else
return max(
longestCommonSubsequence(text1, text2, i + 1, j),
longestCommonSubsequence(text1, text2, i, j + 1)
);
}
};
```