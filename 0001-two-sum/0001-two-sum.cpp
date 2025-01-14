class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target) {
            unordered_map<int, int> mp;
            for(int i = 0; i < nums.size(); i++){
                int complement = target - nums[i];
                if(mp.find(complement) != mp.end())
                    return {mp[complement], i};
                mp[nums[i]] = i;
            }
            return {};
        }
};
// Time complexity: O(n)
// Space complexity: O(n)

// for (int i = 0; i < nums.size(); i++)
//     for (int j = i + 1; j < nums.size(); j++)
//         if (nums[i] + nums[j] == target)
//             return {i, j};
// return {-1, -1};
// Time complexity: O(n²)
// Space complexity: O(1)