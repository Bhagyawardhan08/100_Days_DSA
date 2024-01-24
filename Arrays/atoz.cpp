// todo: 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.


#include<iostream>
using namespace std;

int main() {
    const int size = 26; // Size of the array for storing 'a' to 'z'
    char charArray[size];

    // Initialize the array with 'a' to 'z'
    for (int i = 0; i < size; ++i) {
        charArray[i] = 'a' + i;
    }

    // Print the elements of the array
    cout << "Elements of the char array are:\n";
    for (int i = 0; i < size; ++i) {
        cout << charArray[i] << " ";
    }

    cout << endl;

    return 0;
}
