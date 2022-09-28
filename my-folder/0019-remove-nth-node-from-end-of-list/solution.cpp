class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *l1 = dummy,*l2 = dummy;
        
        while(n-- > 0)  {
            l2 = l2->next;
        }
        
        while (l2->next)    {
            l1 = l1->next;
            l2 = l2->next;
        }
        
        l1->next = l1->next->next;
        
        return dummy->next;
    }
};
