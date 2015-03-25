// The following program calculates the Greatest Common Division between two integers.
//Rodrigo Hernández Aimar    A01224975      Quiz #8, part 1.

#include <iostream>
#include <cstdlib>

using namespace std;

int gcd(int a, int b)
{
	int gcd;
	
	if(a == b)
	{
		return a;
	}

	if (a < b)
	{
		int temp;

		temp = a;
		a = b;
		b = temp;
	}

	int rem = a%b;

	if (rem == 0)
		{
		return b;
		}

	while ( rem >= 1)
	{
		rem = a % b;

		if (rem == 0)
		{
		return b;
		}

		a = b;
		b = rem;
		gcd = b;
	}
	return gcd;
}

int main ()
{
	int a;
	int b;

	cout << "This is a GCD calculator: " << endl;
	cout << endl;
	cout << "Enter the first value:" << endl;
	cin >> a;
	cout << "Enter the second value:" << endl;
	cin >> b;
	cout << endl;
	cout << "The GCD of " << a << " and " << b << " is: " << gcd(a,b) << endl;
	return 0;
}