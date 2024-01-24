//todo: 3: Find the index of a specific element in an array, if the element is not present, print -1. Ask the size of the array from the user and then implement it.

#include<iostream>
using namespace std;

int main() {
    int size;

    // Input for array size
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input for array elements
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int target;
    
    // Input for the element to search
    cout << "Enter the element to search: ";
    cin >> target;

    // Search for the element in the array
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    // Output the result
    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
