//quiz #7 using functions and arrays

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//Function for ordinary numbers
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

float avg(float list[], int size)
{
	float sum = 0.0;

	for (int i=0; i<size; i++)
	{
		sum = list[i] + sum;
	}
	
	return sum/size;
}

float stdev(float list[], int size)
{
	float avg = 0.0;

	for (int i=0; i<size; i++)
	{
		avg = list[i] + avg;
	} 
	avg = avg/size;

	float sumat = 0.0;

	for (int i=0; i<size; i++)
	{
		sumat = pow(list[i] - avg, 2.0) + sumat;
	} 
	float dev = sqrt(sumat/size);

	return dev;
}


int main()
{
	int size;

	cout << "This program calculates the Average and the Standard Deviation of a given group of numbers." << endl;
	cout << endl;
	cout << "How many elements will your list have?: " << endl;
	cin >> size;
	
	float number_list[size];


	for(int i=0; i<size; i++)
	{
		cout << "Enter the " << i+1 << term(i+1) << " value of your list:" << endl;
		cin >> number_list[i];
	}

	cout << endl;
	cout << "The average of your numbers is: " << avg(number_list, size) << endl;
	cout << endl;
	cout << "The standard deviation of your numbers is: " << stdev(number_list, size) << endl;
	return 0;
}