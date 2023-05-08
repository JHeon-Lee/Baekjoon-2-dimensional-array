#include <iostream>

using namespace std;

int a[9][9];

int main()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> a[i][j];
		}
	}

	int max = 0;
	int max_index1 = 0;
	int max_index2 = 0;
	
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
				max_index1 = i;
				max_index2 = j;
			}
		}
	}

	cout << max << endl;
	cout << max_index1 + 1 << " " << max_index2 + 1;

	return 0;
}