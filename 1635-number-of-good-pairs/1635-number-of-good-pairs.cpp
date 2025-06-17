class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                count += mp[nums[i]];
                mp[nums[i]]++;
            }else{
                mp[nums[i]] = 1;
            }
        }

        return count;
    }
};

// Approach 1

// for(int i = 0; i < nums.size(); i++){
//     for(int j = 0; j < nums.size(); j++){
//         if(nums[i] == nums[j] && i < j){
//             count++;
//         }
//     }
// }


// Approach 2:

// int count = 0;
// unordered_map<int, int> mp;

// for(int i = 0; i < nums.size(); i++){
//     if(mp.find(nums[i]) != mp.end()){
//         count += mp[nums[i]];
//         mp[nums[i]]++;
//     }else{
//         mp[nums[i]] = 1;
//     }
// }

// return count;