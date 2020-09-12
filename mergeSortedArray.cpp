class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int tar = m + n - 1;
        
        // nums1[tar--] works backwards through the list 
        // nums1[i] > nums2[j], insert nums1 items first nums1[i--]
        // nums2[i] < nums2[j], insert nums2 items first nums2[j--]
        while(j >= 0){
            // nums 1 is bigger array
            // nums1[i], make sure element exists in nums1
            // i>= 0, avoid overflow 
            nums1[tar--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        }
    }
};