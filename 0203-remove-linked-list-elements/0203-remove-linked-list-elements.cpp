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
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        ListNode* p = head;
        ListNode* q = NULL;
        while(p){
            if(p->val == val){
                ListNode* temp = p;
                if (q) {
                    q->next = p->next;
                }
                p = p->next; 
                delete temp; 
            }else{
                q = p;
                p = p->next;
            }
        }
        return head;
    }
};

// while (head && head->val == val) {
//     ListNode* temp = head;
//     head = head->next;
//     delete temp;
// }

// ListNode* p = head;
// while(p && p->next){
//     if(p->next->val == val){
//         ListNode* temp = p->next;
//         p->next = p->next->next;
//         delete temp;
//     }
//     p = p->next;
// }
// return head;