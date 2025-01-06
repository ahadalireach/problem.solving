class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = INT_MIN;
        for(auto &num : nums){
                sum += num;
                maxSum = max(sum, maxSum);
                if (sum < 0) sum = 0;
        }
        return maxSum;
    }
};
// Time complexity: O(n)
// Space complexity: O(1)

// Approach 1:
// Create and compute each possible sub array for each element then compute sum for each sub array.
// int sum = 0;
// for(int i = 0; i < nums.size(); i++){
//     for(int j = i; j < nums.size(); j++){
//         int current = 0;
//         for(int k = i; k <= j; k++){
//             current += nums[k];
//         }
//         if(current > sum)
//             sum = current;
//     }
// }
// return sum;
// Time complexity: O(n₃)
// Space complexity: O(1)

// Approach 2:
// int maxSum = INT_MIN; 
// for (int i = 0; i < nums.size(); i++) {
//     int currentSum = 0;
//     for (int j = i; j < nums.size(); j++) {
//         currentSum += nums[j];
//         maxSum = max(maxSum, currentSum);
//     }
// }
// return maxSum;
// Time complexity: O(n²)
// Space complexity: O(1)