// left subtree of a node contains only nodes with keys less than the node's key
// right subtree of a node contains only nodes with keys greater than the node's key
// BOTH left and right subtrees must also be binary search trees

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
public:
    // RECURSIVE
    bool isValidBST(TreeNode* root){
        return isValidBST(root, NULL, NULL);
    }
    
    bool isValidBST(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
        if(!root)
            return true;
        
        if(minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val)
            return false;
        
        return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);   
    }
};