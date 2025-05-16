class MyHashSet {
private:
    unordered_set<int> hashSet;

public:
    MyHashSet(){}
    
    void add(int key) {
        hashSet.insert(key);
    }

    void remove(int key) {
        hashSet.erase(key);
    }

    bool contains(int key) {
        return hashSet.find(key) != hashSet.end();
    }
};

// Approach 1: 

// unordered_set<int> hashSet;
// void add(int key) {
//     hashSet.insert(key);
// }
// void remove(int key) {
//     hashSet.erase(key);
// }
// bool contains(int key) {
//     return hashSet.find(key) != hashSet.end();
// }

// Approach 2:

// vector<int> hashSet;
// void add(int key) {
//     if(!contains(key)){
//         hashSet.push_back(key);
//     }
// }
// void remove(int key) {
//     auto it = find(hashSet.begin(), hashSet.end(), key);
//     if(it != hashSet.end()){
//         hashSet.erase(it);
//     }
// }
// bool contains(int key) {
//     for(int hashNum : hashSet){
//         if(hashNum == key){
//             return true;
//         }
//     }
//     return false;
// }

// Approach 3:

// vector<bool> hashSet;
// MyHashSet() : hashSet(1000001, false)  { }
// void add(int key) {
//     data[key] = true;
// }
// void remove(int key) {
//     data[key] = false;
// }
// bool contains(int key) {
//     return data[key];
// }

// Approach 4:

// Linked list nodes is because max size is 10000 but it can have to hold values greater than it. Therefore mode make it simplifies.
// struct ListNode{
//     int key;
//     ListNode* next;
//     ListNode(int n) : key(n), next(NULL){}
// };
// int hash(int key){
//     return key % hashSet.size();
// }
// vector<ListNode*> hashSet;
// MyHashSet(){
//     hashSet.resize(10000);
//     for (auto& tempNode : hashSet) {
//         tempNode = new ListNode(0);
//     }
// }
// void add(int key) {
//     ListNode* cur = hashSet[hash(key)];
//     while(cur->next){
//         if(cur->next->key == key){
//             return;
//         }
//         cur = cur->next;
//     }
//     cur->next = new ListNode(key);
// }
// void remove(int key) {
//     ListNode* cur = hashSet[hash(key)];
//     while(cur->next){
//         if(cur->next->key == key){
//             cur->next = cur->next->next;
//             return;
//         }
//         cur = cur->next;
//     }
// }
// bool contains(int key) {
//     ListNode* cur = hashSet[hash(key)];
//     while(cur->next){
//         if(cur->next->key == key){
//             return true;
//         }
//         cur = cur->next;
//     }
//     return false;
// }