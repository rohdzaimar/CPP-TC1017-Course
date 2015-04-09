#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include "BigIntegerLibrary.hh"

using namespace std;


BigInteger reverse(BigInteger n)
{
	BigInteger num = n; 
	BigInteger mun;
	string reverse, numstr;
	numstr = bigIntegerToString(num);
	reverse = string(numstr.rbegin(), numstr.rend());
	mun = stringToBigInteger(reverse);
	return mun;
}

bool isPalindrome(BigInteger n)
{


	BigInteger num = n, mun;
	string reverse, numstr;
	numstr = bigIntegerToString(num);
	reverse = string(numstr.rbegin(), numstr.rend());
	mun = stringToBigInteger(reverse);
	
	if ( num - mun == 0)
	{
		return true;
	} else
		{
		return false;
		}
}

bool isLychrel(BigInteger n)
{
	BigInteger num = n;
	BigInteger mun;

	unsigned int i;
	for (i = 0; i < 30 && isPalindrome(num) == false; i++)
	{
		mun = reverse(num);
		num = num + mun;
	}

	return (i >= 30);
}

int main()
{
	BigInteger n;
	int lowerbound, upperbound, palindromes = 0, nonlych = 0, lych = 0;

	cout << "Enter the lower bound: ";
	cin >> lowerbound;
	cout << endl;

	cout << "Enter the upper bound: ";
	cin >> upperbound;
	cout << endl << endl;

	
	for (unsigned int i=lowerbound; i<upperbound; i++)
	{
		n = i;
		if (isPalindrome(n))     // <-- Checking if palindrome,
		{		
			palindromes++;
		} else                    // <-- If not, Try lychrel.
			{       
				if (isLychrel(n))      //<-- Checking if Lychrel
					{
						lych++;
						cout << "Found a lychrel number! " << n << "." << endl;
					} else          // <-- Else, Non Lychrel.
						{
						nonlych++;
						}
			}
	}

	cout << "After going through the given bounds, there were found:" << endl;
	cout << "....." << palindromes << " Palindromes found," << endl;
	cout << "....." << nonlych << " Non-Lychrels found," << endl;
	cout << "....." << lych << " Lychrel numbers found." << endl;
	return 0;
}