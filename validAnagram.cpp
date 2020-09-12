// given two strings s and t
// write a function to see if t is anagram of s

// HAST table
// for each letter is s increment by 1
// for each letter in t decrement by 1
// if anagram, all counters will be 0

// first, unordered_map

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        int n = s.length();
        
        unordered_map<char, int> counts;
        
        for(int i = 0; i < n; i++){
            counts[s[i]]++; // increment for s 
            counts[t[i]]--; // decrement for t
        }
        
        for(auto count : counts)
            // if count is NOT 0
            if(count.second)
                return false;
        
        return true;
        
    }
};