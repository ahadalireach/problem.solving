class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0};

        for (char c : s)
            freq[c - 'a']++;

        int expectedFreq = freq[s[0] - 'a'];

        for (int i = 0; i < 26; i++) 
            if (freq[i] > 0 && freq[i] != expectedFreq)
                return false;

        return true;
    }
};

// unordered_map<char, int> um;
// for(char a : s)
//     um[a]++;
// int noOfOccurences = um.begin()->second;
// for(auto& u : um)
//     if(u.second != noOfOccurences)
//         return false;
// return true;