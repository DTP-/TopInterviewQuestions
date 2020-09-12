// given a string
// find the first non-repeating character in it and return its index
// if it doesn't exist, return -1

// brute force approach 
// traverse string twice
// 1st - count of every character into hash table 
// 2nd - find the first character that appears only once

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> frequencyTable;
        
        for(auto &c : s){
            frequencyTable[c]++;
        }
        
        for(int i=0; i<s.size(); i++){
            if(frequencyTable[s[i]]==1){
                return i; // return the index
            }
        }
                              
        // if not found, return -1
        return -1;
    }
};