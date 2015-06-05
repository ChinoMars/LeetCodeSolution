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
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
        {
            if(!l1) return l2;
            if(!l2) return l1;
            
            ListNode* p1 = l1;
            ListNode* p2 = l2;
            ListNode* p;
            if( p1->val < p2->val)
            {
                p = p1;
                p1 = p1->next;
            }
            else
            {
                p = p2;
                p2 = p2->next;
            }
            
            while(p1 && p2)
            {
                if(p1->val < p2->val)
                {
                    p->next = p1;
                    p1 = p1->next;
                }
                else
                {
                    p->next = p2;
                    p2 = p2->next;
                }
                p = p->next;
            }
            
            if(!p1 && p2) p->next = p2;
            else if(p1 && !p2) p->next = p1;
            else p->next = NULL;
            
            return (l1->val < l2->val ? l1 : l2);
        }
};