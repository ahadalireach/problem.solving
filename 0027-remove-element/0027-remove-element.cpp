class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

// Approach 1: Brute Force

// vector<int> tmp;
// for (int num : nums) {
//     if (num != val) {
//         tmp.push_back(num);
//     }
// }
// for (int i = 0; i < tmp.size(); i++) {
//     nums[i] = tmp[i];
// }
// return tmp.size();

// Time complexity: O(n)
// Space complexity: O(n)


// Approach 2: Two pointers I

// int k = 0;
// for(int i = 0; i < nums.size(); i++){
//     if(nums[i] != val){
//         nums[k++] = nums[i];
//     }
// }
// return k;

// Time complexity: O(n)
// Space complexity: O(1)


// Approach 3: Two Pointers II

// int l = 0, r = nums.size() - 1;
// while (l < r) {
//     if (nums[l] == val) {
//         nums[l] = nums[r--];
//     } else {
//         l++;
//     }
// }
// return n;

// Time complexity: O(n)
// Space complexity: O(1)