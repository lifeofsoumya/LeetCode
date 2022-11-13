class Solution {
public:
    int uniquePaths(int m, int n) {
        double res = 1;
        for (int i=1; i<min(n,m); ++i)
            res = res * (n+m-i-1) / i;  // res *= N/i fails :(  
        return (int)res;
    }
};