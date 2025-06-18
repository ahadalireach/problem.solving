class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;

        while (j < nums.size()) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};

// Approach 1

// vector<int> temp;
// for(int i = 0; i < nums.size(); i++){
//     if(nums[i] != 0){
//         temp.push_back(nums[i]);
//     }
// }
// for(int i = 0; i < nums.size(); i++){
//     if(i < temp.size()){
//         nums[i] = temp[i];
//     }else{
//         nums[i] = 0;
//     }
// }

// Approach 2

// int k = 0;
// for(int i = 0; i < nums.size(); i++){
//     if(nums[i] != 0){
//         nums[k++] = nums[i];
//     }
// }
// while(k < nums.size()){
//     nums[k++] = 0;
// }


// Approach 3

// int i = 0, j = 0;
// while (j < nums.size()) {
//     if (nums[j] != 0) {
//         swap(nums[i], nums[j]);
//         i++;
//     }
//     j++;
// }