class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            swap(s[left++], s[right--]);
        }
    }
};

// Approach 1

// vector<char> ans;
// for(int i = s.size() - 1; i >= 0; i--){
//     ans.push_back(s[i]);
// }
// for(int i = 0; i < s.size(); i++){
//     s[i] = ans[i];
// }


// Approach 2

// int left = 0;
// int right = s.size() - 1;
// while(left < right){
//     swap(s[left++], s[right--]);
// }