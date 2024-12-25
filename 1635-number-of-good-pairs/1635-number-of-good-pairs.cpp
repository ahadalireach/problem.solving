class Solution
{
    public:
        int numIdenticalPairs(vector<int> &nums)
        {
            unordered_map<int, int> fr;
            int res = 0;
            for (const auto &num: nums)
            {
                if (fr.find(num) != fr.end())
                    res += fr[num];
                fr[num]++;
            }
            return res;
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// int count = 0;
// for (int i = 0; i < nums.size(); i++)
//     for (int j = 1; j < nums.size(); j++)
//         if (i < j && nums[i] == nums[j])
//             count++;
// return count;
// Time complexity: O(n²)
// Space complexity: O(n)