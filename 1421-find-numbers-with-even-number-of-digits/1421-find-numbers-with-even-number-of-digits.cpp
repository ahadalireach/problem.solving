class Solution {
public:
    bool isEven(int num){
        int digits = 0;
        while(num > 0){
            num /= 10;
            digits++;
        }
        return digits % 2 == 0;
    }

    int findNumbers(vector<int>& nums) {
        int evenDigits = 0;
        for(const auto& num : nums){
            if(isEven(num)){
                evenDigits++;
            }
        }
        return evenDigits;
    }
};