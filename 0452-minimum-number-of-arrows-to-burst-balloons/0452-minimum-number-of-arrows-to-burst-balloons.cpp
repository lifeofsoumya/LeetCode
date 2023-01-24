bool cmp(vector<int> &a, vector<int> &b){return a[1]<b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int arCount=1, last = points[0][1];
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] > last) {
                arCount++;
                last = points[i][1];
            }                       
        }
        return arCount;
    }
};