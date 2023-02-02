complex concept:
​
```
class Solution {
public:
bool isAlienSorted(vector<string>& words, string order) {
unordered_map<char, int> map;
int i = 1;
for(auto a : order){
map[a] = i;
i++;
}
for(int i = 0; i < words.size()-1; i++){
int minSize = min(words[i].size(), words[i+1].size());
for(int j = 0; j < minSize; j++){
if(map[words[i][j]] > map[words[i+1][j]]) return false;
continue;
}
}
return true;
}
};
```