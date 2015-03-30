//Babylonian Method

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double babylonian(double num)
{
	double error = 0.00001;
	double s = num/2;

	while((s - num/s) > error)
	{
		s = (s+num/s)/2;
	}
	return s;
}

int main()
{
	double number;

	cout << "Which value would you like to compute?" << endl;
	cin >> number;
	cout << endl;
	cout << "By using the Babylonian method, the Square root of " << number << " is: " << babylonian(number) << endl;
	cout << "Also, using a modern SQRT function, the SQRT of your value is: " << sqrt(number) << endl;
	return 0;
}