// print on screen

// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K

#include<iostream>
using namespace std;
int main()
{
    int row, col;

    for(row=1; row<=5; row++){
        for(col=1; col<=6; col++){
            char ch = 'F' + (col-1);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
