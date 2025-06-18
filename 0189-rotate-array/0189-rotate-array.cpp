class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

// Approach 1

// int n = nums.size();
// vector<int> ans(n);
// k = k % n;
// for(int i = 0; i < n; i++){
//     ans[(i + k) % n] = nums[i];
// }
// for(int i = 0; i < n; i++){
//     nums[i] = ans[i];
// }


// Approach 2

// int n = nums.size();
// k = k % n; (ye line ensure karti hai ke tum actual effective rotation karo, jo 0 se n - 1 ke beech me hoti hai.)
// reverse(nums.begin(), nums.end());
// reverse(nums.begin(), nums.begin() + k);
// reverse(nums.begin() + k, nums.end());