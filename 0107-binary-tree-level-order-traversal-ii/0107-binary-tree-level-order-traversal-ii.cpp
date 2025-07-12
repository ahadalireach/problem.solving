class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;

        if(!root) return res;

        queue<TreeNode *> q;
        q.push(root);

        TreeNode *temp;
        while(!q.empty()){
            vector<int> curRes;
            int levelSize = q.size();

            for(int i = 0; i < levelSize; i++){
                temp = q.front();
                q.pop();

                curRes.push_back(temp->val);

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            
            res.insert(res.begin(), curRes);
        }

        return res;
    }
};