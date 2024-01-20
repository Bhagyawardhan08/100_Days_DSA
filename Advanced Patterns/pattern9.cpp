#include <iostream>
using namespace std;
int main()
{
    int n;
    int m = 1;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            if(j==1 || j==i || i==n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// ******
// *   *
// *  *
// * *
// **
// *
