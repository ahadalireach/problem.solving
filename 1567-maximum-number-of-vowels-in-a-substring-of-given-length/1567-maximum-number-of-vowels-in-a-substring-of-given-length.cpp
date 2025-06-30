class Solution {
private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
public:
    int maxVowels(string s, int k) {
        if(s.size() < k) return -1;

        int maxCount = 0;

        int left = 0;
        int right = 0;
        int curCount = 0;

        while (right < k) {
            if (isVowel(s[right])) curCount++;
            right++;
        }
        
        maxCount = max(curCount, maxCount);

        while(right < s.size()){
            if (isVowel(s[left])) curCount--;
            if (isVowel(s[right])) curCount++;
            maxCount = max(curCount, maxCount);

            left++;
            right++;
        }

        return maxCount;
    }
};

// Approach 1

// int maxVowels(string s, int k) {
// if(s.size() < k) return -1;
// int maxCount = 0;
// for(int i = 0; i <= s.size() - k; i++){
//     string ss = s.substr(i, k);
//     int j = 0;
//     int curCount = 0;
//     while(j < k){
//         if(isVowel(s[j])){
//             curCount++;
//         }
//         j++;
//     }
//     maxCount = max(curCount, maxCount);
// }
// return maxCount;
// }