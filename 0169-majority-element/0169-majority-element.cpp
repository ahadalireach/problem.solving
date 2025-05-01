class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0, count = 0;

        for (int num : nums) {
            if (count == 0) {
                res = num;
            }
            count += (num == res) ? 1 : -1;
        }
        
        return res;
    }
};

// Approach 1: Brute Force

// for(auto num : nums){
//     int count  = 0;
//     for(auto i : nums){
//         if(num == i){
//             count++;
//         }
//     }
//     if(count > (nums.size() / 2)){
//         return num;
//     }
// }
// return -1;

// Time Complexity: O(n²)
// Space Complexity: O(1)


// Approach 2: Sorting

// sort(nums.begin(), nums.end());
// int count = 0;
// int res = nums[0];
// for(auto num : nums){
//     if(num == res){
//         count++;
//     }else if(num != res){
//         res = num;
//         count = 1;
//     }
//     if(count > nums.size() / 2){
//         return num;
//     }
// }
// return -1;

// sort(nums.begin(), nums.end());
// return nums[nums.size() / 2];

// Time complexity: O(n log n)
// Space complexity: O(1) or O(n)


// Approach 3: Hashmap

// unordered_map<int, int> freqMap;
// for(auto& num : nums){
//     freqMap[num]++;
// }
// for(auto& pair : freqMap){
//     if(pair.second > (nums.size() / 2)){
//         return pair.first;
//     }
// }
// return -1;

// unordered_map<int, int> count;
// int res = 0, maxCount = 0;
// for (int num : nums) {
//     count[num]++;
//     if (count[num] > maxCount) {
//         res = num;
//         maxCount = count[num];
//     }
// }
// return res;

// Time complexity: O(n)
// Space complexity: O(n)


// Approach 4: Boyer-Moore Voting Algorithm

// int res = 0, count = 0;
// for (int num : nums) {
//     if (count == 0) {
//         res = num;
//     }
//     count += (num == res) ? 1 : -1;
// }
// return res;

// Time complexity: O(n)
// Space complexity: O(1)