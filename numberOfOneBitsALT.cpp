class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        
        while(n){
            // each time of "n &= n-1", we delete 1 from n
            n &= n-1;
            ++res;
        }
        return res;
    }
};