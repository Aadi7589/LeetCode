class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(prices.at(i) > buy){
                profit = max(profit, prices[i]-buy);
            }
            buy = min(buy, prices[i]);
        }
        return profit;
    }
};