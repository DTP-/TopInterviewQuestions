// return the index of the first occurence of needle in haystack,
// or -1 if needle is not part of haystack

// INPUT: haystack = "hello, needle", needle = "ll"
// OUTPUT: 2

// traverse all possible starting points of haystack (from 0 to haystack.length() - needle.length())
// and see if the following characters in the haystack match those in the needle 

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        
        // m - n, prevents overflow 
        for(int i = 0; i <= m-n; i++){
            int j = 0;
            
            for(; j < n; j++){
                // check if following character in the haystack match those in the needle
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            // if j reaches the end of the string 
            if(j == n){
                return i;
            }
        }
        return -1;
    }
};