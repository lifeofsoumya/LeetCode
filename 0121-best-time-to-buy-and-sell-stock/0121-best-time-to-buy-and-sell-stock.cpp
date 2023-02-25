class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0, minN = INT_MAX;
        for(int i = 0; i<prices.size(); i++){
            // if(prices[i] < minN) minN = prices[i];
            minN = min(minN, prices[i]); 
            // else if(prices[i]>minN) maxProfit = max(prices[i]-minN, maxProfit);
            maxProfit = max(maxProfit, prices[i]-minN);
        }
        return maxProfit;
    }
};