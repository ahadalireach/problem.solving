class MyHashMap {
private:
   vector<int> hashMap;
public:
    MyHashMap() : hashMap(1000001, -1) {}
    
    void put(int key, int value) {
        hashMap[key] = value;
    }
    
    int get(int key) {
        return hashMap[key];
    }
    
    void remove(int key) {
        hashMap[key] = -1;
    }
};

// Approach 1:

// vector<int> hashMap;
// MyHashMap() : hashMap(1000001, -1) {}
// void put(int key, int value) {
//     hashMap[key] = value;
// }
// int get(int key) {
//     return hashMap[key];
// }
// void remove(int key) {
//     hashMap[key] = -1;
// }


// Approach 2:
// Atmost 1000 operations needs to be done therefore 100 % 1000 gives values less than 1000 which we can stored it as key.

// struct ListNode{
//     int key, val;
//     ListNode* next;
//     ListNode(int key = -1, int val = -1, ListNode* next = nullptr) : key(key), val(val), next(next){}
// };
// int hash(int key) {
//     return key % hashMap.size();
// }
// vector<ListNode*> hashMap;
// MyHashMap(){
//     hashMap.resize(1000);
//     for (auto& tempNode : hashMap) {
//         tempNode = new ListNode(0);
//     }
// }
// void put(int key, int value) {
//     ListNode* cur = hashMap[hash(key)];
//     while (cur->next) {
//         if (cur->next->key == key) {
//             cur->next->val = value;
//             return;
//         }
//         cur = cur->next;
//     }
//     cur->next = new ListNode(key, value);
// }
// int get(int key) {
//     ListNode* cur = hashMap[hash(key)]; // ->next will skip dummy node 0
//     while (cur) {
//         if (cur->key == key) {
//             return cur->val;
//         }
//         cur = cur->next;
//     }
//     return -1;
// }
// void remove(int key) {
//     ListNode* cur = hashMap[hash(key)];
//     while (cur) {
//         if (cur->next->key == key) {
//             cur->next = cur->next->next;
//             return;
//         }
//         cur = cur->next;
//     }
// }