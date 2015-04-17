//Rodrigo Hernández Aimar

#include <iostream>
#include <cstdlib>

using namespace std;

void triangles(int s)
{
	for (unsigned int i=1; i <= s; i++)
		{
			for (unsigned int p=1; p <= i; p++)
				{
					cout << "T";
				}
			cout << endl;
		}
		for (unsigned int i=(s); i > 0; i--)
		{
			for (unsigned int p=1; p <= i; p++)
				{
					cout << "T";
				}
			cout << endl;
		}
}

int main()
{
	int s;
	cout << "The following program prints a triangle" << endl;
	cout << "Enter the longest length of your triangle: ";
	cin >> s;
	cout << endl;
	triangles(s);
	cout << endl;
	cout << "cool, uh?" << endl;
	return 0;
}
