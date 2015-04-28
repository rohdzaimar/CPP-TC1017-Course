// Rodrigo Hernández     A01224975         Quiz 11 - Question 1


#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

float stdev(const vector<int>& list)
{
	float avg = 0.0;

	for (unsigned int i=0; i<list.size(); i++)
	{
		avg = list[i] + avg;
	} 
	avg = avg/list.size();

	float sumat = 0.0;

	for (unsigned int i=0; i<list.size(); i++)
	{
		sumat += pow(list[i] - avg, 2.0);
	} 

	float dev = sqrt(sumat/list.size());

	return dev;
}

float avg(const vector<int>& list)
{
	float sum = 0.0;

	for (int i=0; i<list.size(); i++)
	{
		sum = list[i] + sum;
	}
	
	return sum/list.size();
}

void readNumbersFromFile(string theFile)
{
	ifstream inFile;
	inFile.open(theFile);

	vector<int> list;
	int count = 0, sum = 0;
	int value = 0;

	if(inFile.good())
	{
		while(! inFile.eof())
		{
			inFile >> value;
			list.push_back(value);
			count++;
		}

	cout << "The total of elements in your list is: " << count << " numbers." << endl;

	for (unsigned int i = 0; i < list.size(); i++)
	{
		sum += list [i];
	}

	cout << "The sum of all your elements is: " << sum << endl << endl;
	cout << "the average of all of your elements is: " << avg(list) << endl << endl;
	cout << "the standard deviation of all of your elements is: " << stdev(list) << endl << endl;

	} else
		{
			cout << "There´s an error with the input file name. Try again." << endl;
			exit(1);	
		}
}

int main()
{

	string filename;

	cout << "Hello. This program grabs a bunch of numbers from a text list in the same directory where the program is." << endl;
	cout << "Please enter the name of your file. Remember to include the extension." << endl;

	cin >> filename;

	readNumbersFromFile(filename);

	return 0;
}







