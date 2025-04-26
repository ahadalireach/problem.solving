class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.begin(), nums.end());
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
    }
};

// 2nd Approach

// for (int i = 0; i < n; i++){
//     ans[i] = nums[i];
//     ans[n + i] = nums[i];
// }

// 3rd Approach

// int n = nums.size();
// for(int i = 0; i < n; i++){
//     nums.push_back(nums[i]);
// }
// return nums;