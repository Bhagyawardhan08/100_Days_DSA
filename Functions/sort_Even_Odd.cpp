// Given an array of integers (both odd and even), the task is to arrange them 
// in such a way that odd and even values come in alternate fashion in non-decreasing 
// order(ascending) respectively. 

// If the smallest value is Even then we have to print Even-Odd pattern.
// If the smallest value is Odd then we have to print Odd-Even pattern.
// Note: No. of odd elements must be equal to No. of even elements in the input array.

// Input: arr[] = {9, 8, 13, 2, 19, 14} 

// Output: 2, 9, 8, 13, 14, 19 

// Smallest value is 2(Even) so output will be Even-Odd pattern.



#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void alternateArrange(int arr[], int n) {

    sort(arr, arr + n);

    bool isEvenSmallest = (arr[0] % 2 == 0);

    int even = (isEvenSmallest ? 0 : 1);
    int odd = (isEvenSmallest ? 1 : 0);

    int tempArr[n];

    for (int k = 0; k < n; ++k) {
        if (k % 2 == 0) {
            tempArr[k] = arr[even];
            even += 2;
        } else {
            tempArr[k] = arr[odd];
            odd += 2;
        }
    }
    copy(tempArr, tempArr + n, arr);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}


int main() {
    int arr[] = {9, 8, 13, 2, 19, 14};
    int n = sizeof(arr) / sizeof(int);

    alternateArrange(arr, n);

    return 0;
}
