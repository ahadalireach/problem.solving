class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap;
        for(int i = 0; i < nums.size(); i++){
            int reqNum = target - nums[i];
            if(numsMap.find(reqNum) != numsMap.end()){
                return {numsMap[reqNum], i};
            }
            numsMap[nums[i]] = i;
        }
        return {-1, -1};
    }
};

// Approach 1: Brute Force (Nested Loops)

// for(int i = 0; i < nums.size(); i++){
//     for(int j = i; j < nums.size(); j++){
//         if(i != j && nums[i] + nums[j] == target){
//             return {i, j};
//         }
//     }
// }
// return {-1, -1};


// Approach 2: Hash Map (Using Difference/Required Number)

// unordered_map<int, int> numsMap;
// for(int i = 0; i < nums.size(); i++){
//     int reqNum = target - nums[i];
//     if(numsMap.find(reqNum) != numsMap.end()){
//         return {numsMap[reqNum], i};
//     }
//     numsMap[nums[i]] = i;
// }
// return {-1, -1};


// Approach 3: Two Pointers (Sorted Array, Two Pointers from Start and End)

// sort(nums.begin(), nums.end());
// int i = 0, j = nums.size() - 1;
// while(i <= j){
//     if(nums[i] + nums[j] == target){
//         return {i, j};
//     }else if(nums[i] + nums[j] > target){
//         j--;
//     }else{
//         i++;
//     }
// }
// return {-1, -1};

// Approach 4: Two Pointers with Indices (Sorted Array, Return Original Indices)

// vector<pair<int, int>> numWithIndex;
// for(int i = 0; i < nums.size(); i++){
//     numWithIndex.push_back({nums[i], i});
// }
// sort(numWithIndex.begin(), numWithIndex.end());
// int i = 0, j = numWithIndex.size() - 1;
// while(i < j){
//     int sum = numWithIndex[i].first + numWithIndex[j].first;
//     if(sum == target){
//         return {numWithIndex[i].second, numWithIndex[j].second};
//     }else if(sum > target){
//         j--;
//     }else{
//         i++;
//     }
// }
// return {-1, -1};

// Approach 5: Two Pointers from Start (Not Suitable for All Test Cases)

// Two pointers from the start may skip valid pairs because only one pointer moves forward, potentially missing combinations that could sum to the target.
// nums = [1, 2, 3, 4], target = 6


// int i = 0;
// int j = 1;
// while (j < nums.size()) {
//     int sum = nums[i] + nums[j];
//     if (sum == target) {
//         return {i, j};
//     } else if (sum < target) {
//         j++;
//     } else {
//         i++;
//         if (i == j) {
//             j++;
//         }
//     }
// }
// return {-1, -1};