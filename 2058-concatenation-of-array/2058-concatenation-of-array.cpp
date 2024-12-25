class Solution
{
    public:
        vector<int> getConcatenation(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> ans(n *2);

            for (int i = 0; i < n; i++)
                ans[i] = nums[i];

            for (int i = 0; i < n; i++)
                ans[n + i] = nums[i];

            return ans;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// for (int i = 0; i < n; i++)
//     nums.push_back(nums[i]);
// Time complexity: O(n)
// Space complexity: O(n)