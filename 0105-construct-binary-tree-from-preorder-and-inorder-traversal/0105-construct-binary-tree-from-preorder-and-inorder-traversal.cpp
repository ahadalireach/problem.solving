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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty()) return nullptr;

        int rootVal = preorder[0];
        TreeNode* node = new TreeNode(rootVal);

        int index = 0;
        for (int i = 0; i < inorder.size(); ++i) {
            if (inorder[i] == rootVal) {
                index = i;
                break;
            }
        }

        // Left and right subarrays
        vector<int> preLeft(preorder.begin() + 1, preorder.begin() + 1 + index);
        vector<int> inLeft(inorder.begin(), inorder.begin() + index);

        vector<int> preRight(preorder.begin() + 1 + index, preorder.end());
        vector<int> inRight(inorder.begin() + index + 1, inorder.end());

        node->left = buildTree(preLeft, inLeft);
        node->right = buildTree(preRight, inRight);

        return node;
    }
};