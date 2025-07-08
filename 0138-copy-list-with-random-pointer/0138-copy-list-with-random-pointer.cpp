/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return nullptr; 
        
        unordered_map<Node*, Node*> oldToCopy;
        
        Node* cur = head;

        // First pass: create clone nodes and map
        while(cur){
            Node* copy = new Node(cur->val);
            oldToCopy[cur] = copy;
            cur = cur->next;
        }

        cur = head;

        // Second pass: assign next and random using map
        while(cur){
            oldToCopy[cur]->next = oldToCopy[cur->next];
            oldToCopy[cur]->random = oldToCopy[cur->random];
            cur = cur->next;
        }

        // Return head of the new list from map
        return oldToCopy[head];
    }
};