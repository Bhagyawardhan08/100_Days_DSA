/*
Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number1 = 12;
//     int number2 = 15;

//     if(number1>=number2){
//         cout<<"Number1 is bigger than number2: "<<number1<<endl;
//     }
//     else{
//         cout<<"Number2 is bigger than number1: "<<number2<<endl;
//     }
//     return 0;
// }


// with user input

#include<iostream>
using namespace std;
int main()
{
    int number1, number2;

    cout<<"Enter the first number: ";

    cin>>number1;
    
    cout<<"Enter the second number: ";
    cin>>number2;

    if(number1>=number2){
        cout<<"Number1 is greater than number2: "<<number1<<endl;
    }

    else{
        cout<<"Number2 is greater than number1: "<<number2<<endl;
    }
    return 0;
}