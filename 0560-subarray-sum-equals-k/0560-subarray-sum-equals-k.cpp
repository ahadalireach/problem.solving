class Solution
{
    public:
        int subarraySum(vector<int> &nums, int k)
        {
            unordered_map<int, int> us;
            int total = 0, currentSum = 0;
            us[0] = 1;
            for (int num: nums)
            {
                currentSum += num;
                if (us.find(currentSum - k) != us.end())
                    total += us[currentSum - k];
                us[currentSum]++;
            }
            return total;
        }
};

// Time complexity: O(n)
// Space complexity: O(n)