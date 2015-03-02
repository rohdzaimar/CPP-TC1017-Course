#include <iostream>

using namespace std;

int addition(int a, int b)
{
	int c = a + b;
	return c;
}

int difference(int a, int b)
{
	int c = a - b;
	return c;
}

int product(int a, int b)
{
	int c = a * b;
	return c;
}

int quotient(int a, int b)
{
	int c = a / b;
	return c;
}

int modulo(int a, int b)
{
	int c = a % b;
	return c;
}
 
int main()
{
	int x, y;
	cout << "Enter two numbers: " << endl;
	cin >> x;
	cin >> y;
	int sum = addition (x, y);
	int diff = difference (x, y);
	int prod = product (x, y);
	int quot = quotient (x, y);
	int mod = modulo (x, y);


	cout << "the sum of your numbers is: " << sum << endl;
	cout << "the difference of your numbers is: " << diff << endl;
	cout << "the product of your numbers is: " << prod << endl;
	cout << "the quotient of your numbers is: " << quot << endl;
	cout << "the modulo of your numbers is: " << mod << endl;

return 0;
}