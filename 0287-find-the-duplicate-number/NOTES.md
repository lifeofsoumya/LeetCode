class Solution { // uses extra spacee aand modifies
public:
int findDuplicate(vector<int>& nums) {
unordered_map<int, int> m;
for(int i : nums){
if(m.count(i)) return i;
m[i]++;
}
return -1;
}
};