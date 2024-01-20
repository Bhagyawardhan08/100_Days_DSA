//Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age = 20;

//     if(age > 18){
//         cout<<"Age of a person is greater than 18 so the person is Adult: "<<age<<endl;
//     }

//     else{
//         cout<<"Age is less than 18 so the person is Teenager: "<<age<<endl;
//     }
//     return 0;
// }


// User input

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    if(age>=18){
        cout<<"Age is greater than 18 so the person is Adult: "<<age<<endl;
    }

    else{
        cout<<"Age is less than 18 so the person is Teenager: "<<age<<endl;
    }
    return 0;
}