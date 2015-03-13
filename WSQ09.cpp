#include <iostream>
#include <string>

using namespace std;

long factorial(int n)
{
	long f=1;
		for (int i=1; i<=n; i++)
		{
			 f *= i;
		}
	return f;
}

int main ()
{		
	long fact;
	int n;
	string ans = "yes";

	 while (ans == "Yes" || ans == "yes")
	{

		cout << "Enter a decent, nondecimal, positive integer." << endl;
		cin >> n;
		fact = factorial(n);
		cout << "The factorial of your number is: " << fact << endl;
		cout << endl;
		cout << "Would you like to enter another value?" << endl;
		cin >> ans;
	}
	cout << "Thank you, Good bye." << endl;
	return 0;
}
