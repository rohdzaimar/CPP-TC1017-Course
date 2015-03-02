#include <iostream>

using namespace std;

int main ()
{
	int A;
	int B;

	cout << "Please enter two numbers (space inbetween)" << endl;
	cin>>A;
	cin>>B;

    cout << endl; 
	cout << "The sum of these values is = " << A + B << endl;
	cout << endl;
	cout << "The difference is = " << A - B << endl;
	cout << endl;
	cout << "The product is = " << A*B << endl;
	cout << endl;
	cout << "The division of these values is = " << A/B << endl;
	cout << endl;
	cout << "The remainder of the division of these values is = " << A%B << endl;
	return 0;
}