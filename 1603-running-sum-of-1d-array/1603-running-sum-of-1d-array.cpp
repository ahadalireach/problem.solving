class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(auto& num : nums){
            sum += num;
            num = sum;
        }
        return nums;
    }
};

// Time complexity: O(n)
// Space complexity: O(1)

// Can be more readable if we use: nums[i] += nums[i - 1];