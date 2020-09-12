class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            return intersect2(nums1,nums2);
        }
        return intersect2(nums2,nums1);
    }
    vector<int> intersect2(vector<int>& nums1, vector<int>& nums2){
        vector<int> result;
        
        for(int i=0; i<nums1.size() && !nums2.empty(); i++){
            auto it = nums2.begin();
            
            while(it != nums2.end()){
                if(nums1[i] == *it){
                    result.push_back(nums1[i]);
                    nums2.erase(it);
                    break;
                }
                it++;
            }
        }
        return result;
    }
};