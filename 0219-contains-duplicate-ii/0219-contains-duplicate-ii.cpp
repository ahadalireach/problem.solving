class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k == 0) return false;

        unordered_set<int> window;
        int left = 0;
        for (int  right = 0; right < nums.size(); right++) {
            if (right - left > k) {
                window.erase(nums[left]);
                left++;
            }
            if (window.find(nums[right]) != window.end()) {
                return true;
            }
            window.insert(nums[right]);
        }

        return false;
    }
};

// Approach 1

// unordered_map<int, int> window;
// for(int i = 0; i < nums.size(); i++){
//     if(window.find(nums[i]) != window.end() && ((i - window[nums[i]]) <= k)){
//         return true;
//     }
//     window[nums[i]] = i;
// }