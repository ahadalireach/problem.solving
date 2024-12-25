class Solution
{
    public:
        void moveZeroes(vector<int> &nums)
        {
            int n = nums.size();
            int lastNonZeroIndex = 0;
            for (int i = 0; i < n; i++)
                if (nums[i] != 0)
                    nums[lastNonZeroIndex++] = nums[i];
            for (int i = lastNonZeroIndex; i < n; i++)
                nums[i] = 0;
        }
};
// This is more optimized because it only requires two passes through the array (one to move non-zero values and another to fill the rest with zeros) without the overhead of unnecessary swaps.

// Time complexity for both: O(n)
// Space complexity for both: O(1)

// int l = 0, r = 1;
// if (n <= 1)
//     return;
// while (r < n)
// {
//     if (nums[l] == 0 && nums[r] != 0)
//     {
//         swap(nums[l], nums[r]);
//         l++;
//     }
//     r++;
// }
// This solution involves more operations due to the need for frequent swaps, making it less efficient overall.