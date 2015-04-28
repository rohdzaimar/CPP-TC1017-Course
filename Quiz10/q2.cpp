 //Rodrigo Hernández Aimar   A01224975      QUIZ 10 - Question 2


#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

bool sameSize(const vector<int>& firstVector, const vector<int>& secondVector)
{
	if (firstVector.size() == secondVector.size())
	{
		return true;
	} else 
		{
			return false;
		}
}

int dotProduct(const vector<int>& firstVector, const vector<int>& secondVector)
{
	
	int dProd;

	if (sameSize(firstVector, secondVector))
	{
		for (unsigned int i = 0; i < firstVector.size; i++)
		{
			dProd += (firstVector[i] * secondVector[i]);
		}
	}


	return dProd;
}

void fillVector(vector<int>& list, int index)
{

	string str;

	if(index != 0)
	{
		str = "new ";
	}

	cout << "Enter the elements of your " << str << "vector (-1 to stop):" << endl;
	int input;
	cin >> input;

	while (input != -1)
	{
		list.push_back(input);
		cin >> input;
	}
}

int main()
{
	vector<int> list1;
	vector <int> list2;
	unsigned int i = 0;

	cout << "the following program calculates the Dot Product between two vectors." << endl;
	fillVector(list1, i);
	i++
	fillVector(list2, i);

	if(sameSize(list1, list2) != true)
	{
		cout << "sorry, your vectors are not the same size. Please try again." << endl;
		list1.clear;
		list2.clear;
	}

	cout << "the dot product of your vectors is: " << dotProduct(list1, list2) << endl;

	return 0;
}