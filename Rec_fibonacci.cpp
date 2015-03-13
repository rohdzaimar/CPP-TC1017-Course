//USING RECURSIVE FUNCTIONS

#include <iostream>
#include <string>

using namespace std;

//Function for ordinary numbers
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

long fibonacci(long n)
{
	if (n == 0)
	{
		return 0;
	}
	if(n == 1)
	{
		return 1;
	}

	long fib = fibonacci (n-1) + fibonacci (n-2);
	return fib;
}

int main ()
{
	int n;
	cout << "Which Fibonacci secuence number would you like to know?" << endl;
	cin >> n;
	cout << "The " << n << term(n) << " Fibonacci number of the secuence is: " << fibonacci(n) << endl;
	cout << endl;
	cout << "The following 5 values of the fibonacci secuence are: " << endl;
	int f;

	for (int i=n+1; i<n+6; i++)
	{
		cout << i << term(i) << ": " << fibonacci(i) << endl;
		cout << endl;
	}

	return 0;
}