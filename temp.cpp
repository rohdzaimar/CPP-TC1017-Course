#include <iostream>
using namespace std;

int main ()
{
	int F;
	int C;

	cout << endl;
	cout << "Enter the temperature in Degrees Fahrenheit" << endl;
	cout << endl;
	cin >> F;
	cout << endl;
	C = 5 * (F - 32)/9;
	cout << F << "ºF in Celcius is " << endl;
	cout << endl;
	cout << C << "ºC" << endl;
	cout << endl;
	cout << endl;


	if (C >= 100){
		cout << "Water would boil at this temperature";
	} 

	if (C <= 0)	{
		cout << "Water would freeze at this temperature";
	} 
	if (C > 0 && C < 100) {
		cout << "Water wouldn´t freeze or boil at this temperature" << endl;
	}
	cout << endl;
	cout << endl;
	return 0;
}


