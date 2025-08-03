class Solution {
public:
    bool isPalindrome(const string& s) {
        int left = 0, right = s.size() - 1;
        while (left <= right) {
            if (s[left++] != s[right--])
                return false;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (const auto& word : words) {
            if (isPalindrome(word)) return word;
        }
        return "";
    }
};