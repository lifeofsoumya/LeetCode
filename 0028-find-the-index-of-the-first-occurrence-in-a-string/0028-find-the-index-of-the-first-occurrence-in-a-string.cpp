class Solution {
public:
    int strStr(string haystack, string needle) {
        int p = 0, x = haystack.length(), y = needle.length();
        while( p+y-1 < x){
            if(haystack.substr(p, y) == needle) return p;
            while (p++ + y-1 < x && haystack[p] != needle[0]); // not sure about this line
        }
        return -1;
    }
};