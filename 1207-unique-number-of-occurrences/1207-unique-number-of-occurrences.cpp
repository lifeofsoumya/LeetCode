class Solution {
public:
      bool uniqueOccurrences(vector<int>& arr) {
          unordered_map<int, int> m;
          unordered_set<int> s;
          for (auto n : arr) ++m[n]; // increments count of a single number's occurance,  Insert all occurences into a hash set.
          for (auto& p : m) 
                  if(s.insert(p.second).second!=1)return false; // If, after the insert, the sizes of hash map and set are equal, then all occurences are unique. the result of s.insert() returns false if an element is already there.
          
          return true;
    }
};