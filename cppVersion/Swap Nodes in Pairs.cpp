/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
	public:
	    ListNode* swapPairs(ListNode* head) 
	    {
	    	if(!head || !head->next) return head;
	    	
	    	ListNode* pre = head;
	    	ListNode* aft;
	    	ListNode* preTmp = head;

	    	do
	    	{
	    		aft = pre->next;
	    		pre->next = aft->next;
	    		aft->next = pre;
	    		
	    		if(pre == head)
	    			head = aft;
	    		else
	    			preTmp->next = aft;
	    		
	    		preTmp = pre;
	    		pre = pre->next;

	    	}while(pre && pre->next);

	    	return head;
	    }
};