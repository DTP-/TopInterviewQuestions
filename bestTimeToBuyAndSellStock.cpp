class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // current maximum value 
        // maximum value found so far
        
        int maxCurrent = 0;
        int maxSoFar = 0;
        
        for(int i=1; i<prices.size();i++){
            // check if increasing 
            maxCurrent = max(0, maxCurrent+=prices[i]-prices[i-1]);
            maxSoFar = max(maxCurrent, maxSoFar);
        }
        return maxSoFar;
    }
};