class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
for(auto& num : nums){
    if(seen.count(num))
        return true;
    seen.insert(num);
}
return false;
        
    }
};

// unordered_set<int> seen(nums.begin(), nums.end());
// return seen.size() < nums.size();

// sort(nums.begin(), nums.end());
// for(int i = 0; i < nums.size() - 1; i++)
//     if(nums[i] == nums[i + 1]) return true;
// return false;
// Time Complexity: O(n log n)
// Space complexity: O(1) (in-place sorting) or O(log n) (due to recursion in sorting)