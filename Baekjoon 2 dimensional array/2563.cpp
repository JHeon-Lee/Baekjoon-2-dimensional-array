#include <iostream>

using namespace std;

int a[101][101] = { 0 };

int main()
{
	int n, x, y;
	int count = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				a[j][k] = 1;
			}
		}
	}

	
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			if (a[i][j] == 1)
				count++;
		}
	}

	cout << count;

	return 0;
}