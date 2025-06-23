class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        for(int j = 1; j < nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};

// Approach 1

// set<int> uniqueNums;
// for(auto num : nums){
//     uniqueNums.insert(num);
// }
// int k = 0;
// for(int num : uniqueNums){
//     nums[k++] = num;
// }
// return k;


// Approach 2

// int k = 0;
// for(int i = 0; i < nums.size(); i++){
//     if(nums[i] != nums[i + 1]){
//         nums[k++] = nums[i];
//     }
// }
// return k;


// Approach 3

// int i = 0;
// for(int j = 1; j < nums.size(); j++){
//     if(nums[j] != nums[i]){
//         i++;
//         nums[i] = nums[j];
//     }
// }

// return i;