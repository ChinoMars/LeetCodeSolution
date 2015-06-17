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
        TreeNode* sortedArrayToBST(vector<int>& nums) 
        {
            return sortedArrayToBST(nums,0,nums.size()-1);
        }
    private:
    	TreeNode* sortedArrayToBST(vector<int>& nums, int head, int trail)
    	{
    		if(head > trail)
    			return NULL;
    		
    		int mid = (head + trail) / 2;
    		TreeNode* node = new TreeNode(nums[mid]);

    		node->left = sortedArrayToBST(nums,head,mid-1);
    		node->right = sortedArrayToBST(nums,mid+1,trail);

    		return node;

    	}
};