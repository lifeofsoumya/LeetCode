class Solution {
public:
    string reverseWords(string s) {
        if(s.size() == 0) return s;
        string res;
        
        for(int i = 0 ; i< s.size(); i++){
            if(s[i] == ' ') continue; //skip spaces
            
            string word;
            while(i < s.size() && s[i] !=' ') // until next space
                word += s[i++]; //  keep adding chars to word
            
            if(res.empty()) res = word; // if first word
            else res = word + ' ' + res;
        }
        return res;
    }
};