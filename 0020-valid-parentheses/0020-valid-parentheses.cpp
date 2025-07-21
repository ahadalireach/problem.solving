class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (auto character : s) {
            if (character == '(' || character == '[' || character == '{')
                stk.push(character);
            else if (stk.empty() ||
                (character == ')' && stk.top() != '(') ||
                (character == ']' && stk.top() != '[') ||
                (character == '}' && stk.top() != '{'))
                return false;
            else
                stk.pop();
        }

        return stk.empty();
    }
};


// Approach 2

// unordered_map<char, char> matching = {
//     {')', '('},
//     {']', '['},
//     {'}', '{'}
// };
// stack<char> stk;
// for (char ch : s) {
//     if (matching.count(ch)) { // it's a closing bracket
//         if (stk.empty() || stk.top() != matching[ch])
//             return false;
//         stk.pop();
//     } else {
//         stk.push(ch);
//     }
// }
// return stk.empty();