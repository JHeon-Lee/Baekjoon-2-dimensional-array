#include <iostream>

using namespace std;

char c[5][16];

int main()
{

	for (int i = 0; i < 5; i++)
	{
		cin >> c[i];
	}

	for (int j = 0; j < 16; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (c[i][j] == NULL)
				continue;
			else
				cout << c[i][j];
		}
	}

	return 0;
}