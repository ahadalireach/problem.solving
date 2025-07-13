class Solution {
private:
    TreeNode* findNode(TreeNode* node, int x) {
        if (!node) return nullptr;
        if (node->val == x) return node;

        TreeNode* left = findNode(node->left, x);
        if (left) return left;

        return findNode(node->right, x);
    }

    bool isSiblings(TreeNode* root, TreeNode* x, TreeNode* y) {
        if (!root) return false;

        return (
            (root->left == x && root->right == y) ||
            (root->left == y && root->right == x) ||
            isSiblings(root->left, x, y) ||
            isSiblings(root->right, x, y)
        );
    }

    int level(TreeNode* node, TreeNode* x, int lev) {
        if (!node) return 0;
        if (node == x) return lev;

        int l = level(node->left, x, lev + 1);
        if (l != 0) return l;

        return level(node->right, x, lev + 1);
    }

public:
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* xx = findNode(root, x);
        TreeNode* yy = findNode(root, y);

        return (level(root, xx, 0) == level(root, yy, 0)) && !isSiblings(root, xx, yy);
    }
};