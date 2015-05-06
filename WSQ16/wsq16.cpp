
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{

string line;

string MR, HMPG, CMPG; // midrange, highway MPG, city MPG
int count=0;

float mid_range = 0.0, HighwayMPG = 0.0, cityMPG = 0.0, sumMR = 0.0, sumc = 0.0, sumh = 0.0;

ifstream inFile;

inFile.open("93cars.dat.txt");

	while(getline(inFile,line))
	{
		if((count%2)==0)
		{
			MR = line.substr(43, 46);

			mid_range = atoi(MR.c_str());

			CMPG = line.substr(53, 54);

			cityMPG = atoi(CMPG.c_str());

			HMPG = line.substr(56, 57);

			HighwayMPG = atoi(HMPG.c_str());

			sumMR += mid_range; // sum mid range

			sumc += cityMPG; // sum city

			sumh += HighwayMPG; // sum highway
		}

		count++;
	}

	cout << "Below is information about average mileage both in cities and highways of a given data set of vehicles from 1993: " << endl << endl;
	cout << "The average gas mileage in the city is: " << sumc/93.0 << " Miles Per Gallon" << endl;
	cout << "The average gas mileage on highway is: " << sumh/93.0 << " Miles Per Gallon" << endl;
	cout << "The average midrange price of the vehicles in the data is: "<< "$" << (sumMR/93.0)*1000.00 << endl << endl;

return 0;
}