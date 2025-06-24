class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int left = 0;
        int right = n - 1;

        while(left < right){
            if(nums[left] + nums[right] < target){
               count += right - left;
               left++;
            }else{
                right--;
            }
        }

        return count;
    }
};

// Approach 1

// for(int i = 0; i < n; i++)
//     for(int j = i + 1; j < n; j++)
//         if(nums[i] + nums[j] < target) count++;


// Approach 2

// int count = 0;
// int n = nums.size();
// sort(nums.begin(), nums.end());
// int left = 0;
// int right = n - 1;
// while(left < right){
//     if(nums[left] + nums[right] < target){
//         count += right - left;
//         left++;
//     }else{
//         right--;
//     }
// }
// return count;