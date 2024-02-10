#include<iostream>
using namespace std;
void displayPair(int arr[], int size, int n) {
   int i = 0;
   int j = 1;
   while (i < size && j < size) {
      if (i != j && arr[j] - arr[i] == n) {
         cout << "(" << arr[i] << ", " << arr[j] << ")"<<endl;
         i++; j++;
      }
      else if (arr[j]-arr[i] < n)
         j++;
      else
         i++;
   }
}
int main() {
   int arr[] = {10, 15, 26, 30, 40, 70};
   int size = sizeof(arr)/sizeof(arr[0]);
   int n = 30;
   displayPair(arr, size, n);
}
