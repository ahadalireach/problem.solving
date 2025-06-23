class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 3; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < n - 2; j++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
               
                int l = j + 1;
                int r = n - 1;

                while(l < r){
                    long long int sum = static_cast<long long>(nums[i]) + nums[j] + nums[l] + nums[r];
                    if(sum == target){
                        res.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while(l < r && nums[l] == nums[l + 1]) l++;
                        while(l < r && nums[r] == nums[r - 1]) r--;
                        l++;
                        r--;
                    }else if(sum > target){
                        r--;
                    }else{
                        l++;
                    }
                }
            }
        }

        return res;
    }
};

// Approach 1

// for(int i = 0; i < n - 3; i++){
//     for(int j = i + 1; j < n - 2; j++){
//         for(int k = j + 1; k < n - 1; k++){
//             for(int l = k + 1; l < n; l++){
//                 if(nums[i] + nums[j] + nums[k] + nums[l] == target){
//                     vector<int> quadruplets = {nums[i], nums[j], nums[k], nums[l]};
//                     sort(quadruplets.begin(), quadruplets.end());        
//                     if(find(res.begin(), res.end(), quadruplets) == res.end()){
//                         res.push_back({nums[i], nums[j], nums[k], nums[l]});
//                     }
//                 }
//             }
//         }
//     }
// }