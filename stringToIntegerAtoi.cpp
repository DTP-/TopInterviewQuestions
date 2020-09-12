// implement atoi which converts string to integer

// discards any whitespace characters until first non-whitespace character is found 

// takes an optional plus or minus sign followed by as many numerical digits as possible
// interprets them as a numerical value 

// string can contain additional character after those that form the integral number,
// which are ignored and have not effect on the behaviour of the function

// if first sequence of non-whitespace characters in str is not vaid integral number, 
// or no such sequence exists because string is empty or contains only whitespace characters 
// then no conversion is performed 

// if no valid conversion could be performed, zero value is returned 

class Solution {
public:
    int myAtoi(string str) {
        // discard all leading whitespace
        // sign of the number 
        // overflow 
        // invalid input 
        
        int sign = 1;
        int base = 0;
        int i = 0;
        
        while(str[i]==' '){
            i++;
        }
        
        if(str[i] == '-' || str[i] == '+'){
            sign = 1 - 2 * (str[i++] == '-');
        }
        
        while(str[i] >= '0' && str[i] <= '9'){
            if(base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7)){
                if(sign == 1)
                    return INT_MAX;
                
                else
                    return INT_MIN;
            }
            
            base = 10*base + (str[i++] - '0');
        }
        return base * sign;
        
    }
};