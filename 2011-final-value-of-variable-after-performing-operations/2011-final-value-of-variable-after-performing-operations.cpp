class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int init=0;
        for(auto str:operations){
            str[1]=='-' ? init--: init++;
        }
        return init;
    }
};