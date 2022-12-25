class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int> numbers;
        for(int i = 1; i < n ; i++){
            fact = fact*i; // n not multiplied, wese bhi n se baad main divide karna hoga isliye
            numbers.push_back(i); // n not being pushed for now
        }
        numbers.push_back(n);
        string ans = "";
        k = k-1; // as zero based indexing
        while(1){
            ans.append(to_string(numbers[k/fact])); // ans now includes the number
            numbers.erase(numbers.begin()+(k/fact)); // deleting the nnumber we just inserted to ans
            if(numbers.size() == 0) break;
            k = k%fact; // by mod we find the index of next ans
            fact = fact/numbers.size(); // as we have to divide factorial in partitions of first number combinations
        }
        return ans;
    }
};