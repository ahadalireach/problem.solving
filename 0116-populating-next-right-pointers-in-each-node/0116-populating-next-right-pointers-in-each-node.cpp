/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        
        Node *leftMost = root;
        while(leftMost->left){
           Node *cur = leftMost;
           while(cur){
            cur->left->next = cur->right;

            if(cur->next){
                cur->right->next = cur->next->left;
            } 

            cur = cur->next;
           }

           leftMost = leftMost->left;
        }

        return root;
    }
};

// Approach 1

// queue<Node *> q;
// q.push(root);
// Node* temp;
// while(!q.empty()){
//     int levelSize = q.size();
//     for(int i = 0; i < levelSize; i++){
//         temp = q.front();
//         q.pop();
//         if(i < levelSize - 1){
//             temp->next = q.front();
//         }else{
//             temp->next = nullptr;
//         }
//         if(temp->left) q.push(temp->left);
//         if(temp->right) q.push(temp->right);
//     }
// }