//Rodrigo Hernández     A01224975

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

long fibonacci(int n)
{
	long total, first = 0, second = 1;
	if (n <= 1)
				{
					return n;
				}
	
	for (unsigned int i=2; i <=n; i++)
		{
			
			total = first + second;
			first = second;
			second = total;					
		}
		return total;
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
	cout << "The following program calculates the fibonacci series." << endl;
	cout << "Which Fibonacci number would you like to know? " << endl;
	cout << "Remember that fibonacci(0) is the first number from the series. Enter it now: ";
	int f;
	cin >> f;
	cout << endl << endl;
	cout << "the " << f+1 << term(f+1) << " value from the fibonacci series is: " << fibonacci(f) << endl;
	return 0;
}


