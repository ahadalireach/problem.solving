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
    int pairSum(ListNode* head) {
        int n = 0;
        int i = 0;
        int maxTwin = INT_MIN;

        // Step 1
        ListNode* temp1 = head;
        while(temp1){
            n++;
            temp1 = temp1->next;
        }

        // Step 2
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 3
        ListNode* prev = nullptr;
        ListNode* cur = slow;
        while(cur){
            ListNode* curNext = cur->next;
            cur->next = prev;
            prev = cur;
            cur = curNext;
        }

        // Step 4
        ListNode* first = head;
        ListNode* second = prev;
        while(second){
            maxTwin = max(maxTwin, first->val + second->val);
            first = first->next;
            second = second->next;
        }

        return maxTwin;
    }
};

// Approach 1

// int n = 0;
// int i = 0;
// int maxTwin = INT_MIN;
// // Step 1: Find total length
// ListNode* temp = head;
// while(temp){
//     n++;
//     temp = temp->next;
// }
// // Step 2: For each of the first n/2 nodes, find its twin and calculate twin sum
// ListNode* outer = head;
// for(int i = 0; i < n / 2; i++){
//     // Move to twin node at index n - 1 - i
//     ListNode* inner = head;
//     for(int j = 0; j < n - 1 - i; j++){
//         inner = inner->next;
//     }
//     maxTwin = max(maxTwin, outer->val + inner->val);
//     outer = outer->next;
// }
// return maxTwin;
// }