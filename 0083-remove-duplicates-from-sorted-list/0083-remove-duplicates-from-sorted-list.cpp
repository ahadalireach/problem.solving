class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;

        ListNode* p = head;
        
        while (p->next) {
            if (p->val == p->next->val) {
                ListNode* temp = p->next;
                p->next = p->next->next;
                delete temp; 
            } else {
                p = p->next;
            }
        }
        
        return head;
    }
};
