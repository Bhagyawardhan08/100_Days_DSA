// print on screen

// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e

// #include<iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     for(row = 1; row<=5; row++){
//         for(col = 1; col<=5; col++){
//          char name = 'a' + col-1;
//         cout<<name<<" ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }


// second method

#include<iostream>
using namespace std;
int main()
{
    int row;
    char col;
    for(row = 1; row<=5; row++){
        for(col = 'a'; col<='e'; col++){
           cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}
