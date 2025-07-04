class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        
        int maxLen = 0; int left = 0; int right = 0;
        unordered_set<char> tracker;

        while(right < s.size()){
            if(tracker.find(s[right]) == tracker.end()){
                tracker.insert(s[right]);
                maxLen = max(maxLen, right - left + 1);
                right++;
            }else{
                tracker.erase(s[left]);
                left++;
            }
        }

        return maxLen;
    }
};