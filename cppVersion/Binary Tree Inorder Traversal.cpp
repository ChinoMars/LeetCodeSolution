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
        vector<int> inorderTraversal(TreeNode* root) 
        {
            vector<int> res;
            if(root)
            {
                vector<int> lefttmp = inorderTraversal(root->left);
                res.insert(res.end(),lefttmp.begin(),lefttmp.end());
                res.push_back(root->val);
                vector<int> righttmp = inorderTraversal(root->right);
                res.insert(res.end(),righttmp.begin(),righttmp.end());
                
            }
            
            return res;
        }
};