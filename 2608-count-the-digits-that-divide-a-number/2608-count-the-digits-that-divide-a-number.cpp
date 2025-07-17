class Solution {
public:
    int countDigits(int num) {
        int counter = 0;
        int copy = num;

        while(copy > 0){
            int lastDigit = copy % 10;
            if(num % lastDigit == 0) counter++;
            copy /= 10;
        }

        return counter;
    }
};