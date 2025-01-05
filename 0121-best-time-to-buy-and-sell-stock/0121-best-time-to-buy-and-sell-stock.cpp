class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = INT_MAX;
        for(auto& price : prices){
            if(price < buy)
                buy = price;
            else
                profit = max(profit, price - buy);
        }
        return profit;
    }
};

// Time complexity: O(n)
// Space complexity: O(1)

// int minPrice = prices[0];
// for(int i = 1; i < prices.size(); i++){
//     profit = max(profit, prices[i] - minPrice);
//     minPrice = min(minPrice, prices[i]);
// }