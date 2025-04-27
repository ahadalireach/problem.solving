class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        vector<int> count(26, 0);
        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        for(int c : count){
            if(c != 0){
                return false;
            }
        }

        return true;
    }
};
// Time complexity: O(n)
// Space complexity: O(1)


// Approach 2

// unordered_map<char, int> sFreq;
// unordered_map<char, int> tFreq;
// for (int i = 0; i < s.length(); i++) {
//     sFreq[s[i]]++;
//     tFreq[t[i]]++;
// }
// return sFreq == tFreq;

// Time complexity: O(n + m)
// Space complexity: O(1) (Only 26 letters are possible, so the map has at most 26 keys)


// Approach 3

// unordered_map<char, int> freqMap;
// for(char ss : s){
//     freqMap[ss]++;
// }
// for(char tt : t){
//     freqMap[tt]--;
// }
// for(auto it : freqMap){
//     if(it.second != 0){
//         return false;
//     }
// }

// Time complexity: O(n + m)
// Space complexity: O(1) (Only 26 letters are possible, so the map has at most 26 keys)

// unordered_map automatically inserts it with a default value of 0 (important C++ behavior).


// Approach 4

// sort(s.begin(), s.end());
// sort(t.begin(), t.end());
// return s == t;

// Time complexity: O(n logn + m logm)
// Space complexity: O(1) or O(n + m) depending on the sorting algorithm.