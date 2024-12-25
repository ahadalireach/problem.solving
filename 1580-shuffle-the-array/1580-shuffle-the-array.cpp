class Solution
{
    public:
        vector<int> shuffle(vector<int> &nums, int n)
        {
            vector<int> elements;
            elements.reserve(2 * n);

            for (int i = 0; i < n; i++)
            {
                elements.push_back(nums[i]);
                elements.push_back(nums[i + n]);
            }
            return elements;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)