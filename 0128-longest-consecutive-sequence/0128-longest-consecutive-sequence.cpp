class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us(nums.begin(), nums.end());
        int maxLen = 0;

        for (int num : us) {
            if (us.find(num - 1) == us.end()) {
                int currentNum = num;
                int currentStreak = 1;

                while (us.find(currentNum + 1) != us.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                maxLen = max(currentStreak, maxLen);
            }
        }
        return maxLen;
    }
};

// Time complexity: O(n)
// Space complexity: O(n)