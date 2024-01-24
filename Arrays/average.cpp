//todo: 2: Calculate the average of elements in an array of size 18.

#include<iostream>
using namespace std;

int main() {
    const int size = 18;
    int arr[size];

    // Input
    cout << "Enter 18 numbers:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calculate sum
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Calculate average
    double average = static_cast<double>(sum) / size;  
    // todo:  static_cast<double>(sum) is a type-casting operation. It's converting the variable sum (which is an integer) to a double. This is done to ensure that the division operation results in a floating-point number, which allows for a more accurate representation of the average.

    // Output
    cout << "Sum of the elements is: " << sum << endl;
    cout << "Average of the elements is: " << average << endl;

    return 0;
}
