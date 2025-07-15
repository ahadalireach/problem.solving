class Solution {
    int maxSum = INT_MIN;

    int maxSumHelper(TreeNode* node){
        if (!node) return 0;

        int left = max(0, maxSumHelper(node->left));
        int right = max(0, maxSumHelper(node->right));

        int pathSum = left + right + node->val;

        maxSum = max(maxSum, pathSum);

        return max(left, right) + node->val;
    }

public:
    int maxPathSum(TreeNode* root) {
        maxSumHelper(root);
        return maxSum;
    }
};