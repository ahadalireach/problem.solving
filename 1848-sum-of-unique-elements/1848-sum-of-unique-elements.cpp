class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> frequency;

        for (auto& num : nums)
            frequency[num]++;

        int sum = 0;
        for (auto& [num, count] : frequency)
            if (count == 1) 
                sum += num;
        
        return sum;
    }
};