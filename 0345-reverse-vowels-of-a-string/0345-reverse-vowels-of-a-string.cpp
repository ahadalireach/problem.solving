class Solution {
    bool isVowel(char x){
        x = tolower(x);
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
            return true;
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            while(left < right && !isVowel(s[left])){
                left++;
            }
            while(left < right && !isVowel(s[right])){
                right--;
            }

            if(left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

// Approach 1

// int left = 0;
// int right = s.size() - 1;
// unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
// while(left < right){
//     while(left < right && vowels.find(s[left]) == vowels.end()){
//         left++;
//     }
//     while(left < right && vowels.find(s[right]) == vowels.end()){
//         right--;
//     }
//     if(left < right){
//         swap(s[left], s[right]);
//         left++;
//         right--;
//     }
// }


// Approach 2

// bool isVowel(char x){
//     x = tolower(x);
//     if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
//         return true;
//     }
//     return false;
// }
// string reverseVowels(string s) {
//     int left = 0;
//     int right = s.size() - 1;
//     while(left < right){
//         while(left < right && !isVowel(s[left])){
//             left++;
//         }
//         while(left < right && !isVowel(s[right])){
//             right--;
//         }
//         if(left < right){
//             swap(s[left], s[right]);
//             left++;
//             right--;
//         }
//     }
//     return s;
// }