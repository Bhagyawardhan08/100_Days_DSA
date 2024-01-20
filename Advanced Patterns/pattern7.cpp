#include <iostream>
using namespace std;
int main()
{
    int n;
    int m = 1;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "star pattern \n";
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i-1; j++) {
            cout << " ";
        }
        for(int k=1; k<=m; k++) {
            if(k==1 || k==m || m==n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
        m++;
    }
    return 0;
}
 
//       *
//      **
//     * *
//    *  *
//   *   *
//  *    *
// *******