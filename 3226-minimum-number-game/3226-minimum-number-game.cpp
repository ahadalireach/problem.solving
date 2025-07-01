class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> arr;
        
        for(int i = 0; i < nums.size(); i += 2){
            int alice = nums[i];
            int bob = nums[i + 1];
            arr.push_back(bob);
            arr.push_back(alice);
        }

        return arr;
    }
};