// print on screen

//         *
//       * *
//     * * *
//   * * * *
// * * * * *     

// Take user input

#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter the number: ";
    cin>>n;

    for(row=1; row<=n;row++){

        // space printing
        for(col=1; col<=n-row; col++){
            cout<<"  ";
        }

        for(col=1; col<=row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}