class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> abc;
        
        for(auto &c : nums){
            if(abc.find(c)!=abc.end())
                return true;
            else
                abc.insert(c);
        }
        return false;
    }
};