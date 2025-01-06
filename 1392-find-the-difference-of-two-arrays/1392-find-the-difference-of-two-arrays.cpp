class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mp1(nums1.begin(), nums1.end());
        unordered_set<int> mp2(nums2.begin(), nums2.end());
        vector<int> diff1;
        vector<int> diff2;

        for(auto& num : mp1)
            if(mp2.count(num) == 0)
                diff1.push_back(num);
        
        for(auto& num : mp2)
            if(mp1.count(num) == 0) // if(mp1.find(num) == mp1.end())
                diff2.push_back(num);
        
        return {diff1, diff2};
    }
};
// Time Complexity: O(n)  
// Space Complexity: O(n)