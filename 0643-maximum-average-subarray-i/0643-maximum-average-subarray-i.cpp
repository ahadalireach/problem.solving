class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum = 0;
        double currentSum = 0;
        int n = nums.size();

        for(int i = 0; i < k; i++){
            currentSum += nums[i];
        }

        maxSum = currentSum;
        
        for(int i = k; i < nums.size(); i++){
            currentSum += nums[i] - nums[i - k];
            maxSum = max(currentSum, maxSum);
        }

        return maxSum / k;
    }
};

// Approach 1

// int maxAverage = 0;
// int n = nums.size();
// for(int i = 0; i < n - k; i++){
//     int currentAverage = 0;
//     for(int j = i; j < i + k; j++){
//         currentAverage += nums[j];
//     }
//     maxAverage = max(currentAverage, maxAverage);
// }
// return double (maxAverage / k);