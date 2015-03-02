#include <iostream>

using namespace std;

int main()
{
	long sum = 0;
	long first, last;

	cout << "This program sums all the numbers in a given range: " << endl;
	cout << "Enter the first number: " << endl;
	cin >> first;
	cout << "Enter the last number: " << endl;
	cin >> last;

	if (first > last)
	{
		int temp;

		temp = first;
		first = last;
		last = temp;
	}

	for(int counter = first; counter <= last; counter ++ )
	{
		sum += counter;
	}
	
cout << "The sum of: " << first << " " << "to: " << last << " "<< "is: " << sum << endl;
return 0;
}

