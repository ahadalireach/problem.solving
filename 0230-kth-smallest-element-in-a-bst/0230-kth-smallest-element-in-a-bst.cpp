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
    int count = 0;
    TreeNode* result = nullptr;
    
    void helper(TreeNode* node, int k){
        if (!node || result) return;

        helper(node->left, k);

        count++;
        if (count == k) {
            result = node;
            return;
        }

        helper(node->right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        helper(root, k);
        return result->val;
    }
};

// Approach 1

// class Solution {
//     void inOrder(TreeNode* node, vector<int>& arr){
//         if(!node) return;
//         inOrder(node->left, arr);
//         arr.push_back(node->val);
//         inOrder(node->right, arr);
//     }
// public:
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> arr;
//         inOrder(root, arr);
//         return arr[k - 1];
//     }
// };