class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j = 0;
        vector<int> res;

        for(int i = 0; i < n; i++){
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
        }

        return res;
    }
};