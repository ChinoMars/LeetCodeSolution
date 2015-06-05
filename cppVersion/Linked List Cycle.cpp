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
        bool hasCycle(ListNode *head) 
        {
            if(!head) return false;
            // faster pointer will catch slower pointer finally in a cycle-exsit List
            ListNode *fast, *slow;
            slow = head;
            fast = head->next;
            while(fast && fast->next)
            {
                if(fast == slow) return true;
                fast = fast->next->next;
                slow = slow->next;
            }
            
            return false;
            
        }
};