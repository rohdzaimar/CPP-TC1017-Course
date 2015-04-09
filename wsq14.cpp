#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

long factorial(int n)
{
	long f=1;
		for (unsigned int i=1; i<=n; i++)
		{
			 f *= i;
		}
	return f;
}

float euler(int n)
{
	float e = 0.0;

	for(int i=0; i<n; i++)
	{
		e += (1.0/factorial(i));
	}

	return e;
}

int main()
{
	int decimals;
	cout << "How many decimals would you like the ´e´ constant to display?: ";
	cin >> decimals;
	cout << endl;
	cout << "The ´e´ constant with " << decimals << " decimals is: " << setprecision(decimals + 1) << euler(15) << endl;
	return 0;
}