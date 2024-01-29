#include<iostream>
using namespace std;

int main() {
    int arr[6] = {1, 5, 8, 3, 9, 2};

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Selection Sort algorithm
    for (int i = 0; i < 5; i++) {
        int index = i;

        for (int j = i + 1; j < 6; j++) {
            // Find the index of the minimum element in the unsorted portion
            if (arr[j] < arr[index]) {
                index = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted portion
        swap(arr[i], arr[index]);

        // Print the array after each iteration
        cout << "After iteration " << i + 1 << ": ";
        for (int k = 0; k < 6; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

