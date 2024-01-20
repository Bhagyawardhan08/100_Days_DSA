#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout<< "Rhombus Star Pattern is \n";
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i-1; j++) {
            cout << " ";
        }
        for(int k=1; k<=n; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

//        ********
//       ********
//      ********
//     ********
//    ********
//   ********
//  ********
// ********