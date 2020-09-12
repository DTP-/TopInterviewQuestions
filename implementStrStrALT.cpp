class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;
        
        if(haystack.empty() || haystack.size()<needle.size())
            return -1;
        
        for(int i=0, j=0; i<haystack.size(); i++){
            if(haystack[i] == needle[j]){
                if(j == needle.size()-1)
                    return i-j;
                else
                    j++;
            }
            else if(j){ // previous char are identical but now different 
                i = i - j;
                j = 0;
            }
        }
        return -1;
    }
};