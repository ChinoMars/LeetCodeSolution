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
        ListNode* deleteDuplicates(ListNode* head) 
        {
            if(!head) return NULL;
            
            ListNode* pre = head;
            ListNode* aft = head->next;
            while(aft)
            {
                if(pre->val == aft->val)
                {
                    pre->next = aft->next;
                    delete aft;
                    aft = pre->next;
                }
                else
                {
                    pre = aft;
                    aft = aft->next;
                }
            }
            return head;
            
        }
};