class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        // Finding the first index of a positive number (smallest index with nums[i] > 0)
        int posIndex = lower_bound(nums.begin(), nums.end(), 1) - nums.begin();
        int posCount = n - posIndex; // Number of positive numbers

        // Finding the first index of zero (smallest index with nums[i] >= 0)
        int negIndex = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int negCount = negIndex; // Number of negative numbers (before the first zero)

        return max(posCount, negCount);
    }
};

// int n = nums.size();
// if (n == 0) return 0;

// int positiveCount = 0;
// int negativeCount = 0;

// for (int num : nums) 
//     if (num > 0) 
//         positiveCount++;
//     else if (num < 0) 
//         negativeCount++;

// return max(positiveCount, negativeCount);