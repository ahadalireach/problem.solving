class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        
        s = s + s;
        return s.find(goal) != string::npos;
    }
};

// Approach 1

// void shift(string& ss){
//     char s = ss[0];
//     int n = ss.length();
//     for(int i = 0; i < n - 1; i++){
//         ss[i] = ss[i + 1];
//     }
//     ss[n - 1] = s;
// }

// for(int i = 0; i < s.size(); i++){
//     shift(s);
//     if(s == goal){
//         return true;
//     }
// }


// Approach 2

// s = s + s;
// return s.find(goal) != string::npos;