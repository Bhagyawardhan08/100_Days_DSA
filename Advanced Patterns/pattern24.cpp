#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows(odd only)"<< endl;
    cin >> n;
    cout << "Left Arrow Star Pattern \n";
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }
        for(int k=0; k<=n-i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<n; i++) {
        for(int j=1; j<i+1; j++) {
            cout << " ";
        }
        for(int k=1; k<=i+1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//     *****
//    ****
//   ***
//  **
// *
//  **
//   ***
//    ****
//     *****