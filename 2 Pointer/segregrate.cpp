#include <iostream>
using namespace std;
class Solution{   
public:
    void segregate0and1(int arr[], int n) {
    int i=0, j=0;
    while(j < n){
        if(arr[j] == 0)
            swap(arr[i++], arr[j]);
        ++j;
    }
    }
};