class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int count = 0;
        for(int num : nums){
            if(num == 1){
                count++;
                maxOnes = max(maxOnes, count);
            }else{
                count = 0;
            }
        }
        return maxOnes;
    }
};