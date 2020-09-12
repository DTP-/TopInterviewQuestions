// given an array where elements are sorted in ascending order
// convert it to a height balanced BST

// height-balanced binary tree is defined as a binary tree in 
// which the depth of the two subtrees of every node never differ by more than 1 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end){
        if(end <= start)
            return NULL;
        
        int midIndex = (end + start) / 2;
        
        TreeNode* root =  new TreeNode(nums[midIndex]); // first node is the middle value 
        
        root->left = sortedArrayToBST(nums, start, midIndex);
        root->right = sortedArrayToBST(nums, midIndex+1, end);
        
        return root;
    }
    
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size());
    }
};