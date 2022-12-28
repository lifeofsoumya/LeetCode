class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(), piles.end()); // holds largest elem on top;
        int res = 0;
        for(int i = 0; i < k; i++){
            int temp = pq.top();
            pq.pop();
            temp = temp - (temp/2); // apply operation and remove some, move to next elem via loop
            pq.push(temp);
        }
        while(!pq.empty()){
            res+=pq.top(); // add leftover stones after k-th operations
            pq.pop();
        }
        return res;
    }
};