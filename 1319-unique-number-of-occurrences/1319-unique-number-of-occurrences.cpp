class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> counter;
        for(int a : arr)
            counter[a]++;
        
        unordered_set<int> freqMap;
        for(auto& c : counter){
            if(freqMap.find(c.second) != freqMap.end())
                return false;
            freqMap.insert(c.second);
        }
        return true;
    }
};