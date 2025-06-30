class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            // Step 1: Remove out-of-window index from front
            if(!dq.empty() && dq.front() <= i - k) {
                dq.pop_front(); // \U0001f448 window se bahar gaya element
            }

            // Step 2: Remove smaller values from back
            while(!dq.empty() && nums[i] > nums[dq.back()]) {
                dq.pop_back(); // \U0001f448 chhota element jo ab kabhi max nahi ban sakta
            }

            // Step 3: Push current index at back
            dq.push_back(i); // \U0001f448 new candidate add

            // Step 4: Save result when window hits size k
            if(i >= k - 1) {
                res.push_back(nums[dq.front()]); // \U0001f448 front always gives max
            }
        }

        return res;
    }
};

// Approach 1

// vector<int> res;
// int n = nums.size();
// int left = 0;
// int right = 0;
// int maxElement = INT_MIN;
// while(right < k){
//     maxElement = max(nums[right], maxElement);
//     right++;
// }
// res.push_back(maxElement);
// while(right < n){
//     if(nums[left] == maxElement){
//         maxElement = INT_MIN;
//         for(int i = left + 1; i <= right; i++){
//             maxElement = max(maxElement, nums[i]);
//         }
//     }else{
//         maxElement = max(maxElement, nums[right]);
//     }
//     res.push_back(maxElement);
//     left++;
//     right++;
// }
// return res;