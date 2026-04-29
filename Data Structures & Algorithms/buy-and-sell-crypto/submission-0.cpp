class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = left + 1;
        int sum = 0;
        while(right < prices.size() && left < prices.size()-1){
            if(prices[right] - prices[left] > sum){
                sum = prices[right] - prices[left];
            }
            if(prices[left] > prices[right]){
                left = right;
                right = left + 1;
            }else {
                right++;
                if(right == prices.size()){
                    left = prices.size();
                }
            }
        }
        return sum;
    }
};
