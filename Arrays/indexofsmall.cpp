#include<iostream>
using namespace std;
int main()
{
    int arr[5] {3, 5, 6, 2, 8};

    int index = 0;

    for(int i =1; i<=4; i++)
    {
        if(arr[i]<arr[index])
        {
            index = i;
        }
    }

    cout<<"index = "<<index<<endl;
    return 0;
}