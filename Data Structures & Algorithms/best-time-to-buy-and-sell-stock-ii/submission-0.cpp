class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buyprice = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (buyprice > prices[i]) buyprice = prices[i];
            if (buyprice < prices[i]) {
                profit += prices[i] - buyprice;
                buyprice = prices[i];
            }
        }
        return profit;
    }
};