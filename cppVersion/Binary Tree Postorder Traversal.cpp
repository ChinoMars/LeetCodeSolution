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
	    vector<int> postorderTraversal(TreeNode* root) 
	    {
	        vector<int> res;
	        if(!root) return res;

	        TreeNode* cur = root;
	        TreeNode* pre = NULL;
	        stack<TreeNode*> postStack;
	        postStack.push(cur);

	        while(!postStack.empty())
	        {
	        	cur = postStack.top();
	        	if((!cur->left && !cur->right) || (pre && (cur->left == pre || cur->right == pre)))
	        	{
	        		postStack.pop();
	        		res.push_back(cur->val);
	        		pre = cur;
	        	}
	        	else
	        	{
	        		if(cur->right) postStack.push(cur->right);
	        		if(cur->left) postStack.push(cur->left);
	        	}
	        }

	        return res;
	    }
};

// 对于任一节点P，

// 1）先将节点P入栈；

// 2）若P不存在左儿子和右儿子，或者P存在左儿子或右儿子，但左右儿子已经被输出，则可以直接输出节点P，并将其出栈，将出栈节点P标记为上一个输出的节点，再将此时的栈顶结点设为当前节点；

// 3）若不满足2）中的条件，则将P的右儿子和左儿子依次入栈，当前节点重新置为栈顶结点，之后重复操作2）；

// 4）直到栈空，遍历结束