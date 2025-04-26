class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            nums.push_back(nums[i]);
        }
        
        return nums;
    }
};

// 2nd Approach

// for (int i = 0; i < n; i++){
//     ans[i] = nums[i];
//     ans[n + i] = nums[i];
// }