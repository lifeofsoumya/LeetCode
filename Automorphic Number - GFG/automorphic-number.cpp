// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
    		  int init=n, sqr = n*n, temp =n, count=0;
    		  
    		  while(n>0){
    		      count++;
    		      n/=10;
    		  }
    		  
    		  int den = floor(pow(10,count));
    		  int ldigit = sqr % den; // getting the last digits depending on digits in 'n'
    		  
    		  if(ldigit == init) return "Automorphic";
    		    return "Not Automorphic";
    		  
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends