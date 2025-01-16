class Solution
{
    public:
        int countNegatives(vector<vector < int>> &grid)
        {
            int res = 0;
            int x = grid.size(), y = grid[0].size();
            int row = x - 1, col = 0;
            while(row >= 0 && col < y){
                if(grid[row][col] < 0){
                    res += (y - col);
                    row--;
                }else{
                    col++;
                }
            }
            return res;
        }
};

// int n = grid.size();
// int m = grid[0].size();
// int res = 0;
// for (int i = 0; i < n; i++)
// {
//     int low = 0, high = m - 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (grid[i][mid] < 0)
//             high = mid - 1;
//         else
//             low = mid + 1;
        
//     }
//     res += (m - low);
// }
// return res;

// for (int i = 0; i < grid.size(); i++)
//     for (int j = 0; j < grid.size(); j++)
//         if (grid[i][j] < 0)
//             res++;