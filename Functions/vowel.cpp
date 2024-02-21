
// Question:
// Naman was absent in his english class when the vowel topic was taught by the teacher . 
// His english teacher gave him two strings and told him to find the length of the longest common subsequence which contains only vowels, as a punishment for not attending english class yesterday .

// Help Naman by writing a code to find the length of the longest common subsequence 

// Input Specification:

// input1: First string given by his teacher()
// input2: Second string given by his teacher.
// Output Specification:

// Return the length of the longest common subsequence which contains only vowels.

#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool vowel(char ch)
{
    if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o'|| ch=='u')
    {
        return true;
    }
    return false;
}

int lcs(char *X, char *Y,int l1,int l2)
{
    int L[l1+1][l2+1];
    int i,j;
    
    for ( i = 0; i <= l1; i++)
    {
        for(j = 0; j<=l2;j++)
        {
            if (i==0 || j==0)
                L[i][j]=0;
            else if ((X[i - 1] == Y[j - 1]) && vowel (X[i - 1]))
               L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j]=max(L[i - 1][j], L[i][j - 1]);
            
        }
    }
    return L[l1][l2];
}




int main()
{
    char X[]="Pattern";
    char Y[]="Prepare";

    int l1=strlen (X);
    int l2=strlen (Y);

    cout<< lcs(X,Y,l1,l2);
    return 0;
}
