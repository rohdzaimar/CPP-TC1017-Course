#include <iostream>
#include <string>

using namespace std;

long fibonacci(long n)
{
	long tot;
	long first = 0;
	long second = 1;

	if (n == 0 || n == 1)
	{
		return n;
	}

	for (int i=2; i<=n; i++)
	{
		tot = first + second;
		first = second;
		second = tot;
	}
	return tot;
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
	int n;
	cout << "Hello! this program returns numbers from the Fibonacci secuence." << endl;
	cout << "First, enter a ordinary position of the secuence the get its Fibonacci number: " << endl;
	cout << endl;
	cin >> n;
	cout << "The " << n << term(n) << " value of the Fibonacci secuence is: " << fibonacci(n) << endl;
	return 0;
}