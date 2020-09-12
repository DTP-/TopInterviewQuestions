class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // first sort the array of strings
        // then choose the first and last string in the array
        // (they are supposed to be the most different among all the pairs of strings in the sorted array)
        // just compare how many common characters match from index i=0 of these two strings
        
        int n = strs.size();
        
        if(n==0)
            return "";
        
        string ans = "";
        sort(begin(strs), end(strs));
        string a = strs[0];
        string b = strs[n-1];
        
        for(int i = 0; i < a.size(); i++){
            if(a[i] == b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};