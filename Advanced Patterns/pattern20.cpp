#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "Half Diamond pattern \n";
    m=1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// *******
// ********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *