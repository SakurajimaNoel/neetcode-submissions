class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0,i = 0;
        while(i < prices.size()-1){
            int j = i+1;
            while (j<prices.size()){
                profit = max(profit, prices[j]-prices[i]);
                ++j;
            }
            ++i;
        }
        return profit;
    }
};
