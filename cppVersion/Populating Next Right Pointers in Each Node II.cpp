/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution 
{
    public:
        void connect(TreeLinkNode *root) 
        {
            if(!root) return;

            TreeLinkNode* nextNode = root->next;
            TreeLinkNode* nextWait = NULL;
            while(nextNode)
            {
            	if(nextNode->left)
            	{
            		nextWait = nextNode->left;
            		break;
            	}
            	if(nextNode->right)
            	{
            		nextWait = nextNode->right;
            		break;
            	}
            	nextNode = nextNode->next;
            }

            if(root->right)
            {
            	root->right->next = nextWait;
            }

            if(root->left)
            {
            	root->left->next = root->right?root->right:nextWait;
            }

  			connect(root->right);          
            connect(root->left);
        }
};