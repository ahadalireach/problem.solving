class Solution {
public:
    string clearDigits(string s) {
        string stack;
        for (char c : s) {
            if (isdigit(c)) {
                if (!stack.empty()) stack.pop_back();
            } else {
                stack.push_back(c);
            }
        }
        return stack;
    }
};

// stack<char> st;
// for (char c : s) {
//     if (!isdigit(c)) {
//         st.push(c); 
//     } else {
//         while (!st.empty() && !isalpha(st.top())) {
//             st.pop();
//         }
//         if (!st.empty() && isalpha(st.top())) {
//             st.pop(); 
//         }
//     }
// }
// string result = "";
// while (!st.empty()) {
//     result = st.top() + result;
//     st.pop();
// }
// return result;