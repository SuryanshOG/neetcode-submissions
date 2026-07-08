#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minprice = prices[0];
        for (int x : prices) {
            minprice = min(minprice, x);
            profit = max(profit, x - minprice);
        }
        return profit;
    }
};
