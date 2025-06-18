class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int maxLength = max(word1.size(), word2.size());

        for(int i = 0; i < maxLength; i++){
            if(i < word1.length()){
                ans += word1[i];
            }
            
            if(i < word2.length()){
                ans += word2[i];
            }
        }

        return ans;
    }
};

// Approach 1

// while(i < word1.size() && i < word2.size()){
//     ans += word1[i];
//     ans += word2[i];
//     i++;
// }
// while(i < word1.size()){
//     ans += word1[i++];
// }
// while(i < word2.size()){
//     ans += word2[i++];
// }


// Approach 2

// int maxLength = max(word1.size(), word2.size());
// for(int i = 0; i < maxLength; i++){
//     if(i < word1.length()){
//         ans += word1[i];
//     }
//     if(i < word2.length()){
//         ans += word2[i];
//     }
// }