// print on screen

// * * * * *
// * * * *
// * * *
// * *
// *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, col;

//     for(row=1;row<=5; row++){
//         for(col=1; col<=5-(row-1);col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 2nd method

#include<iostream>
using namespace std;
int main()
{
    int row, col;

    for(row=5;row>=1; row--){
        for(col=1; col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}