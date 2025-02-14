class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums[0] + nums[1] <= nums[2])  
            return "none";
        
        if(nums[0] == nums[1] && nums[1] == nums[2])
            return "equilateral";
        else if(nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2])
            return "isosceles";
        else
            return "scalene";
    }
};

// Triangle Inequality Rule:
// - Agar kisi bhi triangle ke do sides ka sum teesri side se chhota ya barabar ho, to triangle nahi ban sakta.

// Sorting: O(3 log 3) = O(1) Fixed size
// Checking conditions: O(1)
// Overall: O(1) 