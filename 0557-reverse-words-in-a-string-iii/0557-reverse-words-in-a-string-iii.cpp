class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;

        while (i < n) {
            int start = i;
            while (i < n && s[i] != ' ')
                i++;
            reverse(s.begin() + start, s.begin() + i);
            i++;
        }
        return s;
    }
};