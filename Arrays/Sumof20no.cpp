//todo 1: Take 20 elements from user input and find its sum with the help of an array.


#include<iostream>
using namespace std;

int main() {

    int arr[20];

    // Input
    cout << "Enter 20 numbers:\n";
    for (int i = 0; i < 20; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calculate sum
    int ans = 0;
    for(int i = 0; i < 20; i++) {
        ans = ans + arr[i];
    }

    // Output
    cout << "Sum of numbers is: " << ans << endl;

    return 0;
}


// todo: 2nd approach

// #include<iostream>
// using namespace std;

// int main() {
//     const int size = 20;
//     int arr[size];

//     // Input
//     cout << "Enter 20 numbers:\n";
//     for (int i = 0; i < size; ++i) {
//         cout << "Element " << i + 1 << ": ";
//         cin >> arr[i];
//     }

//     // Calculate sum using the formula
//     int n = size;
//     int sum = (n * (n + 1)) / 2;

//     // Output
//     cout << "Sum of the first " << n << " elements in the array is: " << sum << endl;

//     return 0;
// }

