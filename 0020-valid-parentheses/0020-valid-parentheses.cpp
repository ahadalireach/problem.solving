#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for (auto& x : s) {
            if (x == '[' || x == '{' || x == '(') {
                brackets.push(x);
            } else if (brackets.empty() || 
                       (brackets.top() == '[' && x != ']') || 
                       (brackets.top() == '{' && x != '}') || 
                       (brackets.top() == '(' && x != ')')) {
                return false;
            } else {
                brackets.pop();
            }
        }
        return brackets.empty();
    }
};
// Time complexity: O(n)
// Space complexity: O(n)