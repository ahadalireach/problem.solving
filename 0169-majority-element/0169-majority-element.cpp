class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int threshold = nums.size() / 2; 
        
        for(auto num : nums) {
            mp[num]++;
        }
        
        for(auto& m : mp) {
            if(m.second > threshold) {
                return m.first; 
            }
        }

        return -1; 
    }
};