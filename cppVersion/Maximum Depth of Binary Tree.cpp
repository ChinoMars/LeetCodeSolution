/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution 
{
    public:
        int maxDepth(TreeNode* root) 
        {
            if(!root) return 0;
            
            int left = 0, right = 0;
            left = maxDepth(root->left);
            right = maxDepth(root->right);
            
            return left>right?left+1:right+1;
        }
};