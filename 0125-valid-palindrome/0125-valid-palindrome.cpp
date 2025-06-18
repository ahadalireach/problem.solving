class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            if(!isalnum(s[left])){
                left++;
                continue;
            }
            if(!isalnum(s[right])){
                right--;
                continue;
            }

            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

// Approach 1

// string cleaned = "";
// for (char c : s) {
//     if (isalnum(c)) {
//         cleaned += tolower(c);
//     }
// }
// int left = 0;
// int right = cleaned.size() - 1;
// while(left < right){
//     if(cleaned[left] != cleaned[right]){
//         return false;
//     }
//     left++;
//     right--;
// }


// Approach 2

// int left = 0;
// int right = s.size() - 1;
// while(left < right){
//     if(!isalnum(s[left])){
//         left++;
//         continue;
//     }
//     if(!isalnum(s[right])){
//         right--;
//         continue;
//     }
//     if(tolower(s[left]) != tolower(s[right])){
//         return false;
//     }
//     left++;
//     right--;
// }
// return true;