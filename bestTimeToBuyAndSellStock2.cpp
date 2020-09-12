class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 0 indexed
        // profit on day 3 = (profit day 1 to 2) + (profit day 2 to 3)
        
        int profit = 0;
        
        for(int i=0; i<prices.size()-1; i++){
            if(prices[i+1]>prices[i]){
                profit += prices[i+1] - prices[i];
            }
        }
        return profit;
    }
};