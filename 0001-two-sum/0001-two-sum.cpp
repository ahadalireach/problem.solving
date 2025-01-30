class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target) {
            vector<pair<int, int>> arr;  
            for (int i = 0; i < nums.size(); i++)
                arr.push_back({nums[i], i}); 
            sort(arr.begin(), arr.end());

            int l = 0, r = nums.size() - 1;
            while (l < r) {
                int sum = arr[l].first + arr[r].first;
                if (sum == target) 
                    return {arr[l].second, arr[r].second};
                else if (sum > target) 
                    r--;
                else
                    l++;
            }
            return {}; 
        }
};
// Time complexity: O(n log n)
// Space complexity: O(1)  (ignoring sorting for now, as we use arr, but no extra DS) 

// unordered_map<int, int> mp;
// int n = nums.size();
// for(int i = 0; i < n; i++){
//     int complement = target - nums[i];
//     if(mp.find(complement) != mp.end())
//         return {mp[complement], i};
//     mp[nums[i]] = i;
// }
// Time complexity: O(n)
// Space complexity: O(n)

// for (int i = 0; i < nums.size(); i++)
//     for (int j = i + 1; j < nums.size(); j++)
//         if (nums[i] + nums[j] == target)
//             return {i, j};
// return {-1, -1};
// Time complexity: O(n²)
// Space complexity: O(1)