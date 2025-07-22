class Solution {
    bool isOperator(const string& token){
        return token == "+" || token == "-" || token == "*" || token == "/";
    }

public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(const auto& token : tokens){
            if(isOperator(token)){
                int val1 = stk.top(); stk.pop();
                int val2 = stk.top(); stk.pop();
                int res = 0;

                if(token == "+") res = val2 + val1;
                else if(token == "-") res = val2 - val1;
                else if(token == "*") res = val2 * val1;
                else if(token == "/") res = val2 / val1;

                stk.push(res);
            } else {
                stk.push(stoi(token));
            }
        }

        return stk.top();
    }
};