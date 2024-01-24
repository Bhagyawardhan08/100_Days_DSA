// todo: 5: Find the second largest element in an array of unique elements of size n. Where n>3.


#include<iostream>
using namespace std;

int main() {
    int n;

    // Input for array size
    cout << "Enter the size of the array (n > 3): ";
    cin >> n;

    if (n <= 3) {
        cout << "Please enter a valid size (n > 3)." << endl;
        return 1; // Exit with an error code
    }

    int arr[n];

    // Input for array elements
    cout << "Enter " << n << " unique elements:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Initialize max and secondMax
    int maxElement = arr[0];
    int secondMax = arr[1];

    // Find maximum and second maximum
    for (int i = 2; i < n; ++i) {
        if (arr[i] > maxElement) {
            secondMax = maxElement;
            maxElement = arr[i];
        } else if (arr[i] > secondMax && arr[i] < maxElement) {
            secondMax = arr[i];
        }
    }

    // Output the result
    cout << "The second largest element is: " << secondMax << endl;

    return 0;
}



// todo: Let's take an example to understand how the code works. Consider the array of unique elements:

// arr = {10, 5, 8, 12, 15}


// The goal is to find the second largest element in this array.

// Initialize maxElement and secondMax:

// maxElement = 10 (first element)
// secondMax = 5 (second element)
// Iterate through the array starting from the third element (index 2):

// For arr[2] = 8, since 8 is less than maxElement (10) and greater than secondMax (5), update secondMax to 8.
// For arr[3] = 12, since 12 is greater than maxElement (10), update secondMax to the current value of maxElement (10) and update maxElement to 12.
// For arr[4] = 15, since 15 is greater than maxElement (12), update secondMax to the current value of maxElement (12) and update maxElement to 15.
// At the end of the iteration, secondMax will hold the second largest element.

// In this example, the second largest element is 12, and that's what the program would output.