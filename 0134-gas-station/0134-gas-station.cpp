class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalCost=0,totalFuel=0,n=cost.size();
        for(int i=0;i<n;i++){
            totalCost+=cost[i];
            totalFuel+=gas[i];
        }
        if(totalFuel<totalCost){
            return -1;
        }
        int currFuel=0,start=0;  
        for(int i=0;i<n;i++){
            if(currFuel<0){
                start=i;
                currFuel=0;
            }
            currFuel+=(gas[i]-cost[i]);
        }
        return start;
    }
};