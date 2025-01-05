class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        int prefix = 1;
        for(int i = 1; i < n; i++){
            prefix *= nums[i - 1];
            ans[i] = prefix;
        }

        int suffix = 1;
        for(int i = n - 2; i >= 0; i--){
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }
        return ans;
    }
};
// Time complexity: O(n)
// Space complexity: O(1)

// In this we firstly store then we multiply prefix and suffix
// int n = nums.size();
// vector<int> prefix(n, 1);
// vector<int> suffix(n, 1);
// vector<int> ans(n, 1);
// for(int i = 1; i < n; i++)
//     prefix[i] = prefix[i - 1] * nums[i - 1];
// for(int i = n - 2; i >= 0; i--)
//     suffix[i] = suffix[i + 1] * nums[i + 1];
// for(int i = 0; i < n; i++)
//     ans[i] = prefix[i] * suffix[i];
// return ans;
// Time complexity: O(n)
// Space complexity: O(n)

// If divison is not restricted we simply divide product by itself (current element)

// If not O(n) we simply take two nested loops and for each element take profuct if i != j and then simply return