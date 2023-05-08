#include <iostream>

using namespace std;

int a[100][100];
int b[100][100];
int c[100][100];

int main()
{
	int n = 0;
	int m = 0;
	
	while ((n > 100 || n < 1) || (m > 100 || m < 1))
		cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
				cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
				cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}