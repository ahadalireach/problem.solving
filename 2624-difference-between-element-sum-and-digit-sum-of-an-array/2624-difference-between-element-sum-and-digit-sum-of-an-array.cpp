class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0, digitSum = 0;
        for(int num : nums){
            elementSum += num;
            for(char c : to_string(num))
                digitSum += c - '0'; 
        }
        return elementSum - digitSum;
    }
};

// int elementSum = 0, digitSum = 0;
// for(int num : nums){
//     elementSum += num;
//     while(num > 0){
//         int temp = num % 10;
//         digitSum += temp;
//         num /= 10;
//     }
// }
// return elementSum - digitSum;