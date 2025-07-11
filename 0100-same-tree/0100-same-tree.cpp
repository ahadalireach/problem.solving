/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case: both null
        if (!p && !q) return true;

        // One null, one not — not same
        if (!p || !q) return false;

        // Value mismatch
        if (p->val != q->val) return false;

        // Recur for left and right
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

// if (!p && !q) return true;
// if (!p || !q) return false;
// stack<TreeNode*> stk1, stk2;
// TreeNode *temp1, *temp2;
// while (p || !stk1.empty()) {
//     if (p != nullptr && q != nullptr) {
//         if (p->val != q->val) return false;
//         stk1.push(p);
//         stk2.push(q);
//         p = p->left;
//         q = q->left;
//     } else if (!p && !q) {
//         temp1 = stk1.top(); stk1.pop();
//         temp2 = stk2.top(); stk2.pop();
//         p = temp1->right;
//         q = temp2->right;
//     } else {
//         return false;
//     }
// }
// return true;