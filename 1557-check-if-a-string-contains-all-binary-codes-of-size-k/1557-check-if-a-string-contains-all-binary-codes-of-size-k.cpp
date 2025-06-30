class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (s.size() < k) return false;

        unordered_set<string> tracker;

        for(int i = 0; i <= s.size() - k; i++){
            string subString = s.substr(i, k);
            tracker.insert(subString);
        }

        return tracker.size() == (1 << k);
    }
};