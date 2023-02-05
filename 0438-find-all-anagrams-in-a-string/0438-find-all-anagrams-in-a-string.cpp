class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        if(s.size()<p.size()) return {};
        vector<int> phash(26, 0);
        vector<int> shash(26, 0);
        vector<int> res;
        int k = p.size();
        
        for(int i=0; i < k; i++){
            phash[p[i] - 'a']++;
            shash[s[i] - 'a']++;
        }
        
        if(phash == shash) res.push_back(0); // checking the first window only
        
        for(int i = k ; i < s.size(); i++){
            shash[s[i]-'a']++; // next letter added
            shash[s[i-k]-'a']--; // first letter of window removed
            
            if(phash == shash) res.push_back(i+1-k);
        }
        return res;          
    }
};