class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini = prices[0];
        int maxprof=0;
        int prof=0;
        for(int i=0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            prof = prices[i]-mini;
            maxprof = max(maxprof,prof);
        }
        return maxprof;
    }
};