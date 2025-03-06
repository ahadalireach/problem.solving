class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq(n * n + 1, 0);
        int repeatedNum = -1, missingNum = -1;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int num = grid[i][j];
                freq[num]++;
                if (freq[num] == 2) { 
                    repeatedNum = num;
                }
            }
        }

        for (int i = 1; i <= n * n; ++i) {
            if (freq[i] == 0) {
                missingNum = i;
                break;
            }
        }

        return { repeatedNum, missingNum };
    }
};