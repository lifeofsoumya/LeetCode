// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int init = n;
        int mod=0;
        int temp;
        while(n>0){
        temp = n%10;
        mod = mod + pow(temp, 3);
        n/=10;
        }
        if(mod==init)return "Yes";
        return "No";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends