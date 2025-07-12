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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;

        if(!root) return res;

        deque<TreeNode *> dq;
        dq.push_front(root);

        TreeNode *temp;
        bool isRev = false;
        while(!dq.empty()){
            vector<int> curRes;
            int levelSize = dq.size();

            for(int i = 0; i < levelSize; i++){
                if(!isRev){
                    temp = dq.front();
                    dq.pop_front();
                    curRes.push_back(temp->val);

                    if(temp->left) dq.push_back(temp->left);
                    if(temp->right) dq.push_back(temp->right);
                }else{
                    temp = dq.back();
                    dq.pop_back();
                    curRes.push_back(temp->val);

                    if(temp->right) dq.push_front(temp->right);
                    if(temp->left) dq.push_front(temp->left);
                }
            }

            isRev ? isRev = false : isRev = true;

            res.push_back(curRes);
        }

        return res;
    }
};