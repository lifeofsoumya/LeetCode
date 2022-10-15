class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
        int n = T.size();
        vector<int>res(n, 0);
        stack<int>st{};
        
		// move from right to left
        for(int i = n-1; i>=0; --i){
            while (!st.empty() && T[st.top()] <= T[i]) { // if element at left is bigger, then delete previous right one
               st.pop(); // keeps popping until the st.top one is bigger then i th element
            }
            if(!st.empty()) 
                res[i] = st.top()-i; // and if still not empty, insert the substraction of top element - i th index
            st.push(i); // push that element's index and ready for next iteration 
        }
        
        return res;
    }
};