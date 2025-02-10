class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int sum = 0;

        for (string op : operations) {
            if (op == "C") {
                sum -= s.top();
                s.pop();
            } else if (op == "D") {
                int doubleLast = s.top() * 2;
                sum += doubleLast;
                s.push(doubleLast);
            } else if (op == "+") {
                int top1 = s.top(); s.pop();
                int top2 = s.top();
                int newScore = top1 + top2;
                sum += newScore;
                s.push(top1); 
                s.push(newScore);
            } else {
                int num = stoi(op);
                sum += num;
                s.push(num);
            }
        }

        return sum;
    }
};