class Solution
{
    public:
        vector<int> sortedSquares(vector<int> &nums)
        {
            int left = 0, right = nums.size() - 1;
            vector<int> res(nums.size(), 0);

            for (int i = nums.size() - 1; i >= 0; i--)
            {
                if (abs(nums[left]) > abs(nums[right]))
                {
                    res[i] = nums[left] *nums[left];
                    left++;
                }
                else
                {
                    res[i] = nums[right] *nums[right];
                    right--;
                }
            }
            return res;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// for (auto &num: nums)  	// Square each element
//     num = num * num;
// std::sort(nums.begin(), nums.end()); 	// Sort the array
// Time complexity: O(n log n) 	// Squaring takes O(n), sorting takes O(n log n)
// Space complexity: O(log n)  	// Space for sorting recursion stack