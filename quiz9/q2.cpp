//Rodrigo Hernández     A01224975

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

long superpower(long a, long b)
{
	long power = pow(a,b);
	return power;
}

string term(int n)
{
	string t;
	if (n == 1)
		{
			t = "st";
		}
	if (n == 2)
		{
			t = "nd";
		}
	if (n == 3)
		{
			t = "rd";
		}
		
	if (n > 3)
		{
			t = "th";
		}
	return t;
}

int main()
{
	long a, b;
	cout << "the following program calculates exponents." << endl;
	cout << "Enter any positive integer: "; 
	cin >> a; 
	cout << endl;
	cout << endl;
	cout << "Now, " << a << " will be raised to what ever value (positive integer) you enter next: ";
	cin >> b; 
	cout << endl;
	cout << endl;
	cout << "The result of " << a << " to the " << b << term(b) << " power is: ";
	cout << superpower(a, b) << endl;
	return 0;
}

