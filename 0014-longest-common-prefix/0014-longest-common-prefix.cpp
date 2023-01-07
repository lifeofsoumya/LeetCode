class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        string ans = "";
        if(n==1) return str[0];    
        sort(str.begin(), str.end());
        string s = str[0];
        string e = str[n-1];
        
        for(int i=0; i<s.size(); i++){
            if(s[i]==e[i]){
                ans = ans + s[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};