// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.


// Problem no. 231
 

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false
 

// Constraints:

// -231 <= n <= 231 - 1

// Solution

class Solution {
public:
    int addDigits(int num) {
        
        while(num>9){
    
        int ans =0, rem;
        
        while(num!=0){
            rem = num%10;
            num = num/10;
            ans+= rem;
        }
        
        num = ans;
            
        }
        
        return num;
    }
};