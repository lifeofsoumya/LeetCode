class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        char arr[26];
        for(int i=0;i<26;i++){
            arr[i] = i+'a';
        }
        for(int i=0;i<s1.size();i++){
            char replace = max(arr[s1[i] - 'a'],arr[s2[i] - 'a']); //Bigger element
            char put = min(arr[s1[i] - 'a'],arr[s2[i] - 'a']); // Smaller element
            for(int i=0;i<26;i++){
                if(arr[i] == replace)
                    arr[i] = put;   // Replace all the bigger characters with it's smallest equivalent
            }
        }

        string ans = "";
        for(int i=0;i<baseStr.size();i++){
            ans += arr[baseStr[i] - 'a'];
        }
        return ans;
    }
};