/* The Solution class in C++ checks if a given number is ugly, which means it is divisible by only 2,
3, and 5. */
class Solution {
public:
    bool isUgly(int num) {
        if(num == 0) return false;
        /* The code is checking if the given number `num` is divisible by 2, 3, and 5. */
        while(num % 2 == 0) num /= 2;
        while(num % 3 == 0) num /= 3;
        while(num % 5 == 0) num /= 5;
        return num == 1;
    }
};