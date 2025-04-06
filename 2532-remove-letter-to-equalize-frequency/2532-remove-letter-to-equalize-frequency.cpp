class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> freq;

        for (char c : word) {
            freq[c]++;
        }

        for (auto& [ch, count] : freq) {
            freq[ch]--; 

            unordered_map<int, int> freqCount;
            for (auto& [c, cnt] : freq) {
                if (cnt > 0)
                    freqCount[cnt]++;
            }

            if (freqCount.size() == 1) return true;

            freq[ch]++;
        }

        return false;
    }
};