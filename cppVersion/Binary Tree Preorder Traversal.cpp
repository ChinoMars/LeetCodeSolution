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
        vector<int> preorderTraversal(TreeNode* root) 
        {
            vector<int> res;
            if(root)
            {
                res.push_back(root->val);
                vector<int> lefttmp = preorderTraversal(root->left);
                res.insert(res.end(),lefttmp.begin(),lefttmp.end());
                vector<int> righttmp = preorderTraversal(root->right);
                res.insert(res.end(),righttmp.begin(),righttmp.end());
            }
            
            return res;
        }
};