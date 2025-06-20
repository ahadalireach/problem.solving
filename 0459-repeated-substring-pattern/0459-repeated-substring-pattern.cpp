class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        string trimmed = doubled.substr(1, doubled.length() - 2);
        return trimmed.find(s) != string::npos;
    }
};


// Approach 1

// int n = s.length();
// for(int i = 1; i <= n / 2; i++){
//     if(n % i == 0){
//         string repeated = "";
//         for(int j = 0; j < n / i; j++){
//             repeated += s.substr(0, i);
//         }
//         if(repeated == s){
//             return true;
//         }
//     }
// }
// return false;


// Approach 2

// string doubled = s + s;
// string trimmed = doubled.substr(1, doubled.length() - 2);
// return trimmed.find(s) != string::npos;