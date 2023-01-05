class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;           //for frequency of characters
        priority_queue<pair<int,char>> pq; //maxheap according to frequency of characters
        for(char c: s)
            freq[c]++;
        for(auto it: freq)
            pq.push({it.second,it.first}); //heap will be constructed on the basis of frequency
        s="";   
        while(!pq.empty()){
            s+=string(pq.top().first,pq.top().second); //frequency times the character
            pq.pop();
        }
        return s;
    }
};