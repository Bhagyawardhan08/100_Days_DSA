// print on screen
//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include<iostream>
using namespace std;
int main()
{
    int n, col, row;

    cout<<"Enter the number: ";
    cin>>n;

    for(row=1; row<=n; row++){
        for(col= 1; col<=n-row; col++){

            cout<<"  ";
        }
        for(col=1; col<=row; col++){
            char ch = 'A' + (col-1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}