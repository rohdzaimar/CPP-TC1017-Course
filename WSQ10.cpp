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

int main()
{	
cout << "Hello, Thank You for using this list calculator." << endl;
string ans = "yes";	 
int c=0;

while (ans == "Yes" || ans == "yes")	
{
	
	string coun="";
	if (c > 0)
	{
		coun = "new ";
	}
	c++;

	int z; //<-- Asks the user for the number of elements that will be stored in the array.
	cout << "How many elements will your "<< coun << "list have?" << endl;
	cin >> z;
	
	float list [z];
	float total = 0;

	for (int i=0; i<z; i++)

	{
		cout << "Enter your " << i+1 << term(i+1) <<  " positive value (You may enter decimals):" << endl;
		cin >> list [i];
	}

	for (int n=0; n<z; n++)
	{
		cout << "The " << n+1 << term(n+1) << " value "<< "is: " << list[n] << endl;

	}

	for(int i=0; i<z; i++)
	{
		total += list[i];
	}

	cout << "The total of all your numbers is: " << total << endl;
	cout << endl;
	cout << "The average of all your numbers is: " << total/z << endl;
	cout << endl;

	float std, temp = 0;

	for (int i=0; i<z; i++)
	{
		temp += pow(list[i],2.0);
	}

	std = sqrt(temp/z);

	cout << "The standard deviation of your numbers is: " << std << endl;	

	cout << endl;
	cout << "Would you like to calculate a new list?" << endl;
	cin >> ans;

	}	

	cout << "Thank you, Good bye." << endl;
	return 0;
}