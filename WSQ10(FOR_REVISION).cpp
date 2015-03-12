#include <iostream>
#include <string>
using namespace std;

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
	
	float list [10];
	float total = 0;
	float avg = total / 10.0;
	for (int i=0; i<10; i++)

	{
		cout << "Enter your " << i+1 << term(i+1) <<  " positive value (You may enter decimals):" << endl;
		cin >> list [i];
	}

	for (int n=0; n<10; n++)
	{
		cout << "The " << n+1 << term(n+1) << " value "<< "is: " << list[n] << endl;

	}

	for(int i=0; i<10; i++)
	{
		total += list[i];
	}

	cout << "The total of all your numbers is: " << total << endl;
	cout << endl;
	cout << "The average of all your numbers is: " << avg << endl;
	return 0;
}