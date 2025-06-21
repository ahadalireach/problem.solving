class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }

        unordered_set<int> tracker(nums.begin(), nums.end());
        int maxCons = 1;
        for(auto num : tracker){
            if(!tracker.count(num - 1)){
                int curCons = 1;
                int curNum = num;
                while(tracker.count(curNum + 1)){
                    curNum++;
                    curCons++;
                }
                maxCons = max(curCons, maxCons);
            }
        }
        
        return maxCons;
    }
};


// Approach 1

// sort(nums.begin(), nums.end());
// int maxCons = 1;
// int curCons = 1;
// for(int i = 1; i < nums.size(); i++){
//     if(nums[i] == nums[i - 1]){
//         continue;
//     }else if(nums[i] == nums[i - 1] + 1){
//         curCons++;
//     }else{
//         maxCons = max(curCons, maxCons);
//         curCons = 1;
//     }
// }
// return max(curCons, maxCons);


// Approach 2

// unordered_set<int> tracker(nums.begin(), nums.end());
// int maxCons = 1;
// for(auto num : tracker){
//     if(!tracker.count(num - 1)){
//         int curCons = 1;
//         int curNum = num;
//         while(tracker.count(curNum + 1)){
//             curNum++;
//             curCons++;
//         }
//         maxCons = max(curCons, maxCons);
//     }
// }
// return maxCons;


// Approach 3

// set<int> tracker(nums.begin(), nums.end());
// int maxCons = 1;
// int curCons = 1;
// int prev = *tracker.begin();
// for(auto it = next(tracker.begin()); it != tracker.end(); it++){
//     if(*it == prev + 1){
//         curCons++;
//     }else{
//         maxCons = max(maxCons, curCons);
//         curCons = 1;
//     }
//     prev = *it;
// }
// return max(maxCons, curCons);