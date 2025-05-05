class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return num % 9 == 0 ? 9 : num % 9;
    }
};

// Approach 1: O(n)

// while (num >= 10) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     num = sum;
// }
// return num;


// Approach 2: Digital Root

// if (num == 0) return 0; 
// return num % 9 == 0 ? 9 : num % 9;