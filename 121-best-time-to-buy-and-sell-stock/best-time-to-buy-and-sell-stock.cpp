class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mini=prices[0];
        int cost;
        int profit;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            cost=prices[i]-mini;
            profit=max(profit,cost);
        }
        return profit;
    }
};