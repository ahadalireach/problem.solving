class Solution
{
    public:
        int missingNumber(vector<int> &nums) {
            int n = nums.size();
            int total = n * (n + 1) / 2;
            int sum = 0;
            for(auto& num : nums)
                sum += num;
            return total - sum;
        };
};
// Time complexity: O(n)
// Space complexity: O(1)

// set<int> s(nums.begin(), nums.end());
// for (int i = 0; i <= nums.size(); i++)
//     if (s.find(i) == s.end())
//         return i;
// return nums.size() + 1;
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

// sort(nums.begin(), nums.end());
// for (int i = 0; i < nums.size(); i++)
//     if (nums[i] != i)
//         return i;
// return nums.size();
// Time complexity: O(n log n)
// Space complexity: O(1)