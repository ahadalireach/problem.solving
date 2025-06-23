class Solution {
    bool isPalindromeRange(string s, int l, int r){
        while(l < r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            if(s[left] != s[right]){
                return isPalindromeRange(s, left + 1, right) || isPalindromeRange(s, left, right - 1);
            }
            left++;
            right--;
        }

        return true;
    }
};

// Approach 1

// bool isPalindrome(string s) {
//     int l = 0, r = s.size() - 1;
//     while(l < r){
//         if(s[l++] != s[r--]) return false;
//     }
//     return true;
// }
// bool validPalindrome(string s) {
//     for(int i = 0; i < s.size(); i++){
//         string temp = s.substr(0, i) + s.substr(i+1);
//         if(isPalindrome(temp)) return true;
//     }
//     return isPalindrome(s);
// }