class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int left = 0, right = 1;

        while(right < prices.size()){
            if(prices[right] > prices[left]){
                int currentPro = prices[right] - prices[left];
                maxPro = max(currentPro, maxPro);
            }else{
                left = right;
            }
            right++;
        }

        return maxPro;
    }
};