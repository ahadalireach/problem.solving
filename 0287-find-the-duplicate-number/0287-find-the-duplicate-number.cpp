class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);

        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

// Approach 1 (Modifying original)

// sort(nums.begin(), nums.end());
// int i = 0; 
// int j = 1;
// while(j < nums.size()){
//     if(nums[i] == nums[j]){
//         return nums[i];
//     }
//     i++;
//     j++;
// }
// return -1;


// Approach 2 (Extra Space)

// unordered_set<int> seen;
// for(auto num : nums){
//     if(seen.count(num)){
//         return num;
//     }else{
//         seen.insert(num);
//     }
// }
// return -1;

// Approach 3 (TLE)

// for(int i = 0; i < nums.size(); i++)
//     for(int j = i + 1; j < nums.size(); j++)
//         if(nums[i] == nums[j]) return nums[i];
// return -1;