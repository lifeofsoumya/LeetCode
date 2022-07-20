class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int init=0;
        for(auto str: operations){
            if(str[1]=='-') init--;
            else init++;
        }
        return init;
    }
};