class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> abc;
        
        for(auto &c : nums){
            if(abc.find(c)!=abc.end()){
                abc.erase(c);
            }else{
                abc.insert(c);
            }
        }
        
        for(auto &b : abc){
            return b;
        }
        return NULL;
    }
};