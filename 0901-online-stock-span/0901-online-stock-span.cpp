class StockSpanner {
public:
    stack<pair<int, int>> st; // first for price, second for index
    
    int next(int currPrice) { // next function is called consequtively 
        int streak = 1;
        while(!st.empty() && st.top().first <= currPrice){ 
            streak += st.top().second; // if current price is more, return index+1;
            st.pop(); // and remove that elem
        }
        st.push({currPrice, streak});
        return streak; // return streak each time
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */