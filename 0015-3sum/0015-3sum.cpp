class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> triplets;

        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 2; i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }

            int left = i + 1;
            int right = n - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    triplets.push_back({nums[i], nums[left], nums[right]}); // [-2, -2, 0, 0, 2, 2]
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                }else if(sum > 0){
                    right--;
                }else{
                    left++; 
                }
            }
        }

        return triplets;
    }
};

// Approach 1

// int n = nums.size();
// vector<vector<int>> res;
// sort(nums.begin(), nums.end());
// for(int i = 0; i < n; i++){
//     for(int j = i + 1; j < n; j++){
//         for(int k = j + 1; k < n; k++){
//             if(nums[i] + nums[j] + nums[k] == 0){
//                 vector<int> triplet = {nums[i], nums[j], nums[k]};
//                 sort(triplet.begin(), triplet.end());
//                 if(find(res.begin(), res.end(), triplet) == res.end()){
//                     res.push_back(triplet);
//                 }
//             }
//         }
//     }
// }
// return res;


// Approach 2

// int n = nums.size();
// set<vector<int>> res;
// sort(nums.begin(), nums.end());
// for(int i = 0; i < n; i++){
//     for(int j = i + 1; j < n; j++){
//         for(int k = j + 1; k < n; k++){
//             if(nums[i] + nums[j] + nums[k] == 0){
//                 vector<int> triplet = {nums[i], nums[j], nums[k]};
//                 sort(triplet.begin(), triplet.end());
//                 res.insert(triplet);
//             }
//         }
//     }
// }
// return vector<vector<int>>(res.begin(), res.end());