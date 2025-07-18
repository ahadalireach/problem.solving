class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

// Approach 1:

// int sum = 0;
// for(int i = 0; i < nums.size(); i++){
//     sum += nums[i];
//     nums[i] = sum;
// }
// return nums;


// Approach 2:

// for(int i = 1; i < nums.size(); i++){
//     nums[i] += nums[i - 1];
// }
// return nums;