class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char num = board[i][j];
                if (num != '.') {
                    string rowKey = string(1, num) + " in row " + to_string(i); // string(1, num) -> 1 is no of count to repeat the character.
                    string colKey = string(1, num) + " in col " + to_string(j);
                    string boxKey = string(1, num) + " in box " + to_string(i / 3) + "-" + to_string(j / 3);

                    if (!seen.insert(rowKey).second ||
                        !seen.insert(colKey).second ||
                        !seen.insert(boxKey).second) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};

// Approach 2

// unordered_map<int, unordered_set<char>> rows, cols;
// map<pair<int, int>, unordered_set<char>> squares;
// for (int r = 0; r < 9; r++) {
//     for (int c = 0; c < 9; c++) {
//         if (board[r][c] == '.') continue;
//         pair<int, int> squareKey = {r / 3, c / 3};
//         if (rows[r].count(board[r][c]) || 
//             cols[c].count(board[r][c]) || 
//             squares[squareKey].count(board[r][c])) {
//             return false;
//         }
//         rows[r].insert(board[r][c]);
//         cols[c].insert(board[r][c]);
//         squares[squareKey].insert(board[r][c]);
//     }
// }
// return true;