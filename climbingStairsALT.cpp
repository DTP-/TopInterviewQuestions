class Solution {
public:
    // a, number of ways to reach the current step
    // b, tells you the number of ways to reach the next step
    
    // for situation one step further
    // b becomes the new a
    // new b is the old a+b
    // since new step, can be reached by climbing 1 step from what b represented or 2 steps from what a represented
    
    int climbStairs(int n) {
        int a = 1, b = 1;
        
        while(--n)
            a = (b += a) - a;
        
        return b;
    }
};