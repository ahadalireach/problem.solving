class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> tracker;

        for(auto num : nums){
            tracker[num]++;
        }

        vector<pair<int, int>> freqList;
        for (auto pair : tracker) {
            freqList.push_back({pair.second, pair.first});
        }

        sort(freqList.rbegin(), freqList.rend());

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(freqList[i].second);
        }

        return res;
    }
};