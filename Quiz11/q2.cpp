#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;

void check_banana(string fileName)
{
	string fullString, banana = "banana";

	ifstream inFile;
	inFile.open(fileName);

	int count;

	if (inFile.good())
	{
			while (getline (inFile, fullString))
		{
	    	transform(fullString.begin(),fullString.end(),fullString.begin(), ::tolower);
		      if (fullString.find(banana) != string::npos)
		      	{
		        	count ++;
		      	}
    	}
    cout << "Number of times the word 'Banana' appears in the file: " << count << endl;
  	}else 
		{
			cout << "There´s something wrong with your input file. Try again." << endl;
			exit(1);
		}
		
} 




int main ()
{
	string fileName;

	cout << "the following program looks for banana in a given text file. Please enter the name of the file. include extension." << endl;
	cin >> fileName;
	check_banana(fileName);
	return 0;
}
