Idea : Two thing's Need to check
​
Frequency of Char need's to be same there both of string as we can do Transform every occurrence of one existing character into another existing character
All the unique char which there in String1 need's to there as well In string2
let's See One example :
​
String 1 = "aabaacczp"        String 2="bbzbbaacp"
Frequency in string1 :                         Frequency in string2 :
a->4                                                b->4
b->1                                                a->2
c->2                                                z->1
z->1                                                c->1
p->1                                                p->1
see in String 1 count array ->   1, 1, 1, 2, 4 =>sorted order
and in String 2 count array ->   1, 1, 1, 2, 4 =>sorted order
​
Unique all char   a,b,c,z,p  in string 1 is there as well in string2 so it's a valid One just return True
​
```
class Solution {
public:
bool closeStrings(string word1, string word2) {
vector<int>w1(26,0),w2(26,0);
set<char>s1,s2;
for(char c:word1){
w1[c-'a']++;
s1.insert(c);
}
for(char c:word2){
w2[c-'a']++;
s2.insert(c);
}
sort(begin(w1),end(w1));
sort(begin(w2),end(w2));
return w1==w2&&s1==s2;
}
};
```