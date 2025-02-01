class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;
        for(int i = 0; i < k; i++)
            windowSum +=nums[i];
        int maxSum = windowSum;
        for(int i = k; i < nums.size(); i++){
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }
        return (double)maxSum / k;
    }
};

// int n = nums.size();
// double maxAverage = numeric_limits<double>::lowest();
// for (int i = 0; i <= n - k; i++) {
//     double sum = 0;
//     for (int j = i; j < i + k; j++) {
//         sum += nums[j];
//     }
//     maxAverage = max(maxAverage, sum / k);
// }
// return maxAverage;