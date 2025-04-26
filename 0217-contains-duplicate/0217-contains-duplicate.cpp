class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freqMap;

        for(int num : nums){
            // freqMap[num]++;
            if(++freqMap[num] > 1){
                return true;
            }
        }

        return false;
    }
};

// 2nd Approach

// set<int> values;
// for(int num : nums){
//     if(values.find(num) != values.end()){
//         return true;
//     }
//     values.insert(num);
// }
// return false;



// 3rd Approach

// unordered_map<int, int> freqMap;
// for(int num : nums){
//     freqMap[num]++;
// }
// for(auto it : freqMap){
//     if(it.second > 1){
//         return true;
//     }
// }
// return false;