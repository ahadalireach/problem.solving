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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* secondHalf = reverseList(slow);

    ListNode* firstHalf = head;
    ListNode* secondHalfCopy = secondHalf;
    while (secondHalf) {
        if (firstHalf->val != secondHalf->val) {
            reverseList(secondHalfCopy);
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    reverseList(secondHalfCopy);

    return true;
    }
};

// vector<int> A;
// while(head){
//     A.push_back(head->val);
//     head = head->next;
// }

// for(int i = 0, j = A.size() - 1; i < A.size() / 2; i++, j--){
//     if(A[i] != A[j])
//         return false;
// }