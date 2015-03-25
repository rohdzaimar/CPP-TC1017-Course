//Rodrigo Hernández Aimar       A01224975       Quiz #8, part 2.       "Triangles"

#include <iostream>
#include <cstdlib>

using namespace std;

void triangles(int s)
{
	for (int i=1; i<=s; i++)
	{
		for (int j=1; j<=i; j++)
		{
			cout << "X";
		}
		cout << endl;
	}
		for (int i=(s-1); i>0; i--)
	{
		for (int j=1; j<=i; j++)
		{
			cout << "X";
		}
		cout << endl;
	}
}

int main()
{
	int s;
	cout << "Beware the mighty triangle" << endl;
	cout << endl;
	cout << "How large will the largest segment be?:" << endl;
	cin >> s;
	triangles(s);
	return 0;
}

