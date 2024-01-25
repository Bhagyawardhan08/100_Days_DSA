// todo: Count number of elements between two given elements in array

// Given an unsorted array and two elements num1 and num2. The task is to count the number of elements occurs between the given elements (excluding num1 and num2). If there are multiple occurrences of num1 and num2, we need to consider leftmost occurrence of num1 and rightmost occurrence of num2.

 

// Example 1:

// Input : Arr[] = {4, 2, 1, 10, 6}
// num1 = 4 and num2 = 6
// Output : 3
// Explanation:
// We have an array [4, 2, 1, 10, 6] and 
// num1 = 4 and num2 = 6. 
// So, the left most index of num1 is 0 and 
// rightmost index of num2 is 4. 
// So, the total number of element between 
// them is [2, 1, 10] So, function will return 
// 3 as an answer.

// Example 2:

// Input : Arr[] = {3, 2, 1, 4}
// num1 = 2 and num2 = 4
// Output : 1


class Solution {
public:
    int getCount(int arr[], int n, int num1, int num2) {
        // Initialize variables to store the indices of num1 and num2
        int firstIndex = 0;
        int secondIndex = 0;

        // Find the first occurrence of num1 in the array
        for (int i = 0; i < n; i++) {
            if (arr[i] == num1) {
                firstIndex = i;
                break;
            }
        }

        // Find the last occurrence of num2 in the array
        for (int j = n - 1; j >= 0; j--) {
            if (arr[j] == num2) {
                secondIndex = j;
                break;
            }
        }

        // If num1 and num2 have the same index, no elements in between, return 0
        if (firstIndex == secondIndex) {
            return 0;
        }

        // Calculate the count of elements between num1 and num2 (exclusive)
        int ans = secondIndex - firstIndex - 1;

        // Return the result
        return ans;
    }
};