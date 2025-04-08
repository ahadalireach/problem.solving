class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                char smaller = min(s[left], s[right]);
                s[left] = s[right] = smaller;
            }
            left++;
            right--;
        }
        return s;
    }
};