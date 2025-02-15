class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> arr;
        
        for (int i = 0; i < nums.size(); i += 2) {
            arr.push_back(nums[i + 1]); 
            arr.push_back(nums[i]);  
        }
        
        return arr;
    }
};

// int findMin(vector<int> nums){
//     int minIndex = 0;
//     for (int i = 1; i < nums.size(); i++) 
//         if (nums[i] < nums[minIndex])
//             minIndex = i;
//     return minIndex;
// }

// while(!nums.empty()){
//     int elementIndex = findMin(nums);
//     int aliceElement = nums[elementIndex];
//     nums.erase(nums.begin() + elementIndex);
//     elementIndex = findMin(nums);
//     int bobElement = nums[elementIndex];
//     nums.erase(nums.begin() + elementIndex);
//     arr.push_back(bobElement);
//     arr.push_back(aliceElement);
// }

// sort(nums.begin(), nums.end());
// while (!nums.empty()) {
//     int aliceElement = nums[0];
//     nums.erase(nums.begin());
//     if (nums.empty()) break; 
//     int bobElement = nums[0];
//     nums.erase(nums.begin());
//     arr.push_back(bobElement);
//     arr.push_back(aliceElement);
// }