// if string is extremley long,
// wouldn't want to traverse it twice 
// instead of storing just counts of a char,
// also store the index
// THEN traverse the hash table     
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int,int>> frequencyTable; // for each character, pair is frequency and index
        
        int idx = s.size();
        
        for(int i =0; i < s.size(); i++){
            frequencyTable[s[i]].first++; // frequency
            frequencyTable[s[i]].second = i;
        }
        // p is the element
        for(auto &p : frequencyTable){
            // frequencyTable.second.first -> second refers to pair, 'first' first element in pair
            if(p.second.first == 1)
                // if index is smaller than last index, assign the index
                idx = min(idx, p.second.second);
        }
        
        // clever
        return idx == s.size() ? -1 : idx;
    }
};