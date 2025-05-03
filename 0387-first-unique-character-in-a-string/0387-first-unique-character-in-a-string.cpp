class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);
    
        for (char c : s) {
            freq[c - 'a']++;
        }
    
        for (int i = 0; i < s.length(); ++i) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }
    
        return -1;
    }
};


// unordered_map<char, int> freq;
// for (char c : s) {
//     freq[c]++;
// }
// for (int i = 0; i < s.length(); ++i) {
//     if (freq[s[i]] == 1) {
//         return i;
//     }
// }
// return -1;