#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3, i, j, k;
	cin >> n1 >> n2 >> n3;
	int a[n1][n2], b[n2][n3], c[n1][n3];
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < n3; j++)
		{
			cin >> b[i][j];
		}
	}
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n3; j++)
		{
			c[i][j]=0;
		}
	}


	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n3; j++)
		{
			for (k = 0; k < n2; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n3; j++)
		{
			cout << c[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}
