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
        ListNode* partition(ListNode* head, int x) 
        {
            if(!head) return NULL;
            
            ListNode* sflag = NULL;
            ListNode* lflag = NULL;
            ListNode* sp = NULL;
            ListNode* lp = NULL;
            for(ListNode* p = head; p != NULL; p = p->next)
            {
                if(p->val < x)
                {
                    if(!sflag)
                    {
                        sflag = p;
                        sp = p;
                    }
                    else
                    {
                        sp->next = p;
                        sp = p;
                    }
                    
                }
                else
                {
                    if(!lflag)
                    {
                        lflag  = p;  
                        lp = p;
                    }
                    else
                    {
                        lp->next = p;
                        lp = p;
                    }
        
                }
            }
            if(!sp || !lp) 
            	return head;
            else
            {
            	sp->next = lflag;
            	lp->next = NULL;
            	head = sflag;
            	return head;
        	}
            
        }
};