class Solution {
public:
    string interpret(string s) {
        string res;
        for(int i=0; i<s.length(); ){
            if (s[i] == 'G') res += 'G', ++i;
            else if (s[i+1] == ')') res += 'o', i+=2;
            else res += "al", i+=4;
        }
        return res;
    }
};