// Ronny is given a string along with the string which contains single character x. 
// She has to remove the character x from the given string. Help her write a function to remove all occurrences of x character from the given string.

// Input Specification:

// input1: input string s
// input2: String containing any character x
// Output Specification:
// String without the occurrence of character x

#include <bits/stdc++.h>
using namespace std;

void removeChar(char* s, char c)
{

	int j, n = strlen(s);
	for (int i = j = 0; i < n; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';
}

int main()
{
	char s[] = "Ronny";
	removeChar(s, 'n');
	cout << s;
	return 0;
}
