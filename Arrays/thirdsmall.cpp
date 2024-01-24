// todo: 6: Find the third smallest element in an array of unique elements size n. Where n>3.


#include<iostream>
#include<climits>
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

    // Initialize first, second, and third smallest
    int firstSmallest = INT_MAX;
    int secondSmallest = INT_MAX;
    int thirdSmallest = INT_MAX;

    // Find first, second, and third smallest
    for (int i = 0; i < n; ++i) {
        if (arr[i] < firstSmallest) {
            thirdSmallest = secondSmallest;
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] > firstSmallest) {
            thirdSmallest = secondSmallest;
            secondSmallest = arr[i];
        } else if (arr[i] < thirdSmallest && arr[i] > secondSmallest) {
            thirdSmallest = arr[i];
        }
    }

    // Output the result
    cout << "The third smallest element is: " << thirdSmallest << endl;

    return 0;
}


//todo: Let's take an example to understand how the code works. Consider the array of unique elements:

// arr = {8, 12, 5, 10, 15}


// The goal is to find the third smallest element in this array.

// Initialize firstSmallest, secondSmallest, and thirdSmallest:

// firstSmallest = INT_MAX (maximum integer value)
// secondSmallest = INT_MAX
// thirdSmallest = INT_MAX
// Iterate through the array:

// For arr[0] = 8, 8 is less than firstSmallest, so update thirdSmallest to secondSmallest, secondSmallest to firstSmallest, and firstSmallest to 8.
// For arr[1] = 12, 12 is greater than firstSmallest but less than secondSmallest, so update thirdSmallest to secondSmallest and secondSmallest to 12.
// For arr[2] = 5, 5 is less than firstSmallest, so update thirdSmallest to secondSmallest and secondSmallest to firstSmallest, and firstSmallest to 5.
// For arr[3] = 10, 10 is greater than firstSmallest but less than secondSmallest, so update thirdSmallest to 10.
// For arr[4] = 15, 15 is greater than both firstSmallest and secondSmallest, so no updates are made.
// At the end of the iteration, thirdSmallest will hold the third smallest element.

// In this example, the third smallest element is 10, and that's what the program would output.






// todo: What is byte addressable?

// Byte addressable memory is one in which the data space in a cell is equal to 8 bits or 1 byte. Word addressable memory is one in which the data space in a cell is equal to the word length of the CPU. 2. It is called byte addressable memory because it uses bytewise storage configuration