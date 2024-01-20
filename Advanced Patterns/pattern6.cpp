#include<iostream>
using namespace std;
int main()
{
    int i, j, k, rows;
    cout << "Enter number of rows ";
    cin >> rows;
    cout << "Star Pattern\n";
    for(i = 1; i <= rows; i++) {
        for(j = 0; j <= rows - i; j++) {
            cout << " ";
        }
        for(k = 0; k < i; k++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

//      *
//     **
//    ***
//   ****
//  *****