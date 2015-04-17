//Rodrigo Hernández Aimar     A01224975

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;



bool isPalindrome(string s)
{
	string reverse, str = s;
	reverse = string(str.rbegin(), str.rend());
	if(str == reverse)
		{
			return true;
		}
		else
			{
				return false;
			}
}

int main()
{
	string str1;
	cout << "This program decides if a string is a palindrome or not." << endl;
	cout << "Enter any string: ";
	cin >> str1;
	cout << endl << endl;
		if (isPalindrome(str1))
		{
			cout << "The string is a palindrome";
		} else
			{
				cout << "The string is NOT a palindrome";
			}
	cout << endl;
	cout << endl;
	return 0;
}

