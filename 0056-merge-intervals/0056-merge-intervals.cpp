class Solution
{
    public:
        vector<vector < int>> merge(vector<vector < int>> &intervals)
        {
            sort(intervals.begin(), intervals.end());
            vector<vector < int>> ans;
            for (auto &in: intervals)
                if (ans.empty() || ans.back()[1] < in[0])
                    ans.push_back(in);
                else
                    ans.back()[1] = max(ans.back()[1], in[1]);

            return ans;
        }
};
// Time complexity: O(n logn)
// Space complexity: O(n)