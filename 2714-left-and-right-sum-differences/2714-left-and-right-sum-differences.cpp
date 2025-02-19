class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        
        int leftSum = 0, rightSum = accumulate(nums.begin(), nums.end(), 0);
        
        for (int i = 0; i < n; i++) {
            rightSum -= nums[i]; 
            answer[i] = abs(leftSum - rightSum);
            leftSum += nums[i];  
        }

        return answer;
    }
};
