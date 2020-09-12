class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        
        int index = 1;
        
        for(int i =0; i<nums.size(); i++){
            if(nums[index-1] == nums[i]){
                continue;
            }else{
                nums[index++] = nums[i];
            }
        }
        
        return index;
    }
};