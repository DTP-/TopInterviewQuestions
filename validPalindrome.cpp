// given a string, determine if it is a palindrome 
class Solution {
public:
    // "Checks whether c is either a decimal digit or an uppercase or lowercase letter"
    bool isPalindrome(string s) {
        // move 2 pointers from each end until they collide
        for(int i = 0, j = s.size()-1; i<j; i++, j--){
            // increment left pointer if NOT alphanumeric 
            while(isalnum(s[i]) == false && i<j)
                i++; // increment left pointer if not alphanumeric
            while(isalnum(s[j]) == false && i<j)
                j--; // decrement right pointer if not alphanumeric 
            
            if(toupper(s[i]) != toupper(s[j]))
                return false; // exit and return error if NOT match
        }
        return true;
    }
};