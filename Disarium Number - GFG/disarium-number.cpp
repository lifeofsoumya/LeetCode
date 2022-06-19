// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int isDisarium(int N) {
        int init = N;
        int length=0;
        while(N != 0){
        length++;    
        N/=10;
        }
        
        N= init;
        
        int mod=0, temp;
        while(N>0){
        temp = N%10;
        mod = mod + (int)pow(temp, length);
        N/=10;
        length--;
        }
        if(mod==init)return 1;
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isDisarium(N) << endl;
    }
    return 0;
}  // } Driver Code Ends