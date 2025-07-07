/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prevGroupTail  = dummy;
        ListNode* cur = head;

        while(true){
            // Step 1: Check if there are at least k nodes remaining
            ListNode* check = cur;
            for(int i = 0; i < k; i++){
                if(!check) return dummy->next;
                check = check->next;
            }

            // Step 2: Reverse k nodes
            ListNode* prev = nullptr;
            ListNode* groupTail = cur;  // will become tail after reversal
            for(int i = 0; i < k; i++){
                ListNode* nextNode = cur->next;
                cur->next = prev;
                prev = cur;
                cur = nextNode;
            }

            // Step 3: Connect the reversed group with the rest
            prevGroupTail->next = prev;     // prev is new head of reversed group
            groupTail->next = cur;          // tail of reversed group points to next group
            prevGroupTail = groupTail;      // move tail pointer forward
        }

        return dummy->next;
    }
};