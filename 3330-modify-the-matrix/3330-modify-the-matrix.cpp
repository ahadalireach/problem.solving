class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> colMax(n, 0);
        for (int j = 0; j < n; j++) {
            int maxVal = -1;
            for (int i = 0; i < m; i++) {
                if (matrix[i][j] != -1) {
                    maxVal = max(maxVal, matrix[i][j]);
                }
            }
            colMax[j] = maxVal;
        }

        vector<vector<int>> answer = matrix;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (answer[i][j] == -1) {
                    answer[i][j] = colMax[j];
                }
            }
        }

        return answer;
    }
};