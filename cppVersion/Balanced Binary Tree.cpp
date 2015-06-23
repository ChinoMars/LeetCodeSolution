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
        bool isBalanced(TreeNode* root) 
        {
            if(!root) return true;

            bool ans = true;
            isUnitBal(root, ans);
            return ans;           
            
        }
    private:
        int isUnitBal(TreeNode* root, bool& ans)
        {
            if(!root) return 0;
            int leftHeight = isUnitBal(root->left,ans);
            int rightHeight = isUnitBal(root->right, ans);
            if(abs(leftHeight-rightHeight) > 1) ans = false;

            return max(leftHeight, rightHeight)+1;

        }
};