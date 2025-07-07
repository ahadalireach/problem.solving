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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for(int i = 0; i <= n; i++) fast = fast->next;

        while(fast){
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return dummy->next;
    }
};

// Approach 1

// if(head && head->next == nullptr) return nullptr;
// int len = 0;
// ListNode* temp = head;
// while(temp){
//     len++;
//     temp = temp->next;
// }
// if(n == len) return head->next;
// ListNode* prev = nullptr;
// ListNode* cur = head;
// int times = len - n;
// while(times--){
//     prev = cur;
//     cur = cur->next;
// }
// prev->next = cur->next;
// return head;