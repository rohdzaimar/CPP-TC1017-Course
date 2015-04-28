 //Rodrigo Hernández Aimar   A01224975      QUIZ 10 - Question 1


#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int findThrees(const vector<int>& list)
{
	
	int sum;

	for(unsigned int i=0; i < list.size(); i++)
	{
		if(list[i]%3 == 0)
		{
			sum += list[i];
		}
	}
	return sum;
}

void fillVector(vector<int>& list)
{
	cout << "Enter the elements of your list (-1 to stop):" << endl;
	int input;
	cin >> input ;

	while (input != -1)
	{
		list.push_back(input);
		cin >> input;
	}
}

int main()
{

	vector<int> list;

	fillVector(list);

	cout << "The sum of all the multiples of three in your list is: ";
	cout << findThrees(list) - 1 << endl;
	
	return 0;
}