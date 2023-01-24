class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0, n = cost.size();
        for(int i = 0 ; i < n; i++){
            totalGas += gas[i]; // total gas we have
            totalCost += cost[i]; // total gas we need
        }
        if(totalGas < totalCost) return -1;
        int currGas = 0, start= 0;
        for(int i = 0; i < n ; i++){
            currGas += gas[i] - cost[i]; // e.g 3-5 = -2
            if(currGas < 0){ // enters if as -2 < 0
                start = i+1; // imagine to starting from next index, when if doesn't occur means we've started from the next index
                currGas = 0; // again set currGas = 0
            }           
        }
        return start;
    }
};