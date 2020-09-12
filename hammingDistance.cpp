// hamming distance is the number of positions at
// which the corresponding bits are different
// given integers x and y, calculate the hamming distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0, n = x ^ y;
        
        while(n){
            ++dist;
            n &= n-1;
        }
        return dist;
    }
};