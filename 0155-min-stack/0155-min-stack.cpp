class MinStack {
private:
    stack<int> data;  // Main stack to store all values
    stack<int> mins;  // Auxiliary stack to track current minimums

public:
    MinStack() {}

    // Pushes a value onto the stack
    void push(int val) {
        data.push(val);

        // If mins is empty OR val is <= current minimum, push it to mins
        if (mins.empty() || val <= mins.top()) {
            mins.push(val);
        }
    }

    // Removes the top element from the stack
    void pop() {
        int val = data.top();
        data.pop();

        // If the popped value is equal to current minimum, remove it from mins
        if (val == mins.top()) {
            mins.pop();
        }
    }

    // Returns the top element of the stack
    int top() {
        return data.top();
    }

    // Returns the current minimum element in the stack
    int getMin() {
        return mins.top();
    }
};

/**
 * Usage Example:
 *
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int topValue = obj->top();
 * int minValue = obj->getMin();
 */