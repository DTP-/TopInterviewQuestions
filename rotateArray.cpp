class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums, 0, nums.size()-1); // reverse the whole array
        reverse(nums, 0, k-1); // reverse the first half 
        reverse(nums, k, nums.size()-1); // reverse the second half 
    }
    // &, reference. Object is not copied
    void reverse(vector<int>& nums, int start, int end){
        while(start<end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            
            // move pointers
            start++;
            end--;
        }
    }
};