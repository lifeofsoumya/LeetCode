class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        std::vector<int> res;
        std::priority_queue<std::pair<int, int>> pq;

        for (auto it : arr)
        {
            int closest = abs(it - x);
            //std::cout << closest << " : " << it << "\n";
            pq.push(std::make_pair(closest, it));

            if (pq.size() > k)
            {
                pq.pop();     
            }
        }

        //std::cout << "\nDebug queue : \n";
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            //std::cout << pq.top().first << " : " << pq.top().second << "\n";
            pq.pop();
        }

        std::sort(res.begin(), res.end());
        return res;
    }
};