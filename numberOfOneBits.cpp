class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        
        while(n){
            n &= (n-1); // drops the lowest set bit, neat trick
            count++;
        }// while ends, when n is 0
        return count;
    }
};