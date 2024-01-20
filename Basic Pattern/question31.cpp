// print on screen

 /*      A B C D
         A B C
         A B
         A */


#include<iostream>
using namespace std;
int main()
{
    int row, col;

    for(row=4; row>=1; row--){
        for(col=1; col<=row; col++){
            char ch = 'A' + (col-1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
