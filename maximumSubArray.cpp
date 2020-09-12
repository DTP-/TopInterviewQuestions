class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // basically keep adding each integer to the sequence
        // until sum drops below 0
        // If sum is negative, then reset the sequence
        
        int answer = nums[0];
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            answer = max(sum, answer);
            sum = max(sum, 0);
        }
        return answer;
    }
};