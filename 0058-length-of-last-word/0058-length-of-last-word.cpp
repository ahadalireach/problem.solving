class Solution {
public:
    int lengthOfLastWord(string s) {
        int pos = s.size() - 1;
        int maxLen = 0;
        while(pos >= 0 && s[pos] == ' ')
            pos--;
        while(pos >= 0 && s[pos] != ' '){
            maxLen++;
            pos--;
        }
        return maxLen;
    }
};

// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int end = s.length() - 1;

//         while (end >= 0 && s[end] == ' ') {
//             end--;
//         }

//         int start = end;
//         while (start >= 0 && s[start] != ' ') {
//             start--;
//         }

//         return end - start;        
//     }
// };