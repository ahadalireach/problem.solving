class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<pair<int, int>> stk; // pair<height, index>
        int maxArea = 0;

        for (int i = 0; i < n; ++i) {
            int start = i;
            while (!stk.empty() && heights[i] < stk.top().first) {
                int height = stk.top().first;
                int index = stk.top().second;
                stk.pop();
                int area = height * (i - index);
                maxArea = max(maxArea, area);
                start = index;
            }
            stk.push({heights[i], start});
        }

        // Remaining elements in stack
        while (!stk.empty()) {
            int height = stk.top().first;
            int index = stk.top().second;
            stk.pop();
            int area = height * (n - index);
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};