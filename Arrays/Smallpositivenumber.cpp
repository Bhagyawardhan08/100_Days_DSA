// todo: You are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array.


// Input:
// N = 5
// arr[] = {1,2,3,4,5}
// Output: 6
// Explanation: Smallest positive missing 
// number is 6.
// Example 2:

// Input:
// N = 5
// arr[] = {0,-10,1,3,-20}
// Output: 2
// Explanation: Smallest positive missing 
// number is 2.
// Your Task:
// The task is to complete the function missingNumber() which returns the smallest positive missing number in the array.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= N <= 106
// -106 <= arr[i] <= 106


class Solution {
public:
    int missingNumber(int arr[], int n) {
        int mx = INT_MIN;

        // Step 1: Replace non-positive values with 0 and find the maximum value in the array
        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0)
                arr[i] = 0;
            mx = max(mx, arr[i]);
        }

        // Step 2: Increment mx by 1
        mx = mx + 1;

        // Step 3: Mark the presence of elements in the array using array indexing
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                int ind = arr[i] % mx - 1;
                if (ind < n && ind >= 0)
                    arr[ind] += mx;
            }
        }

        // Step 4: Find the first non-positive value, which corresponds to the missing number
        for (int i = 0; i < n; i++)
            if (arr[i] < mx)
                return i + 1;

        // Step 5: If all values are present, return n+1
        return n + 1;
    }
};