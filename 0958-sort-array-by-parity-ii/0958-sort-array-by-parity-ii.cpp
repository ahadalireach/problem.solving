#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int evenIndex = 0, oddIndex = 1;
        
        while (evenIndex < n && oddIndex < n) {
            while (evenIndex < n && nums[evenIndex] % 2 == 0)  evenIndex += 2;
            while (oddIndex < n && nums[oddIndex] % 2 == 1) oddIndex += 2;
            
            if (evenIndex < n && oddIndex < n) {
                swap(nums[evenIndex], nums[oddIndex]);
                evenIndex += 2;
                oddIndex += 2;
            }
        }
        
        return nums;
    }
};