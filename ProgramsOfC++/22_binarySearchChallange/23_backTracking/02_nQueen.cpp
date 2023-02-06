#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;
bool safe(int **arr, int x, int y, int n)
{
	for (size_t i = 0; i < x; i++)
		if (arr[i][y] == 1)
			return false;
	int row = x, col = y;
	while (row >= 0 and col >= 0)
	{
		if (arr[row][col] == 1)
			return false;
		row--;
		col--;
	}
	row = x;
	col = y;
	while (row >= 0 and col < n)
	{
		if (arr[row][col] == 1)
			return false;
		row--;
		col++;
	}
	return true;
}
bool nQueen(int** arr, int x, int n)
{
	if (x >= n)
		return true;

	for (size_t col = 0; col < n; col++)
	{
		if (safe(arr, x, col, n))
		{
			arr[x][col] = 1;
			if (nQueen(arr, x + 1, n))
				return true;
			arr[x][col] = 0;
		}
	}
	return false;
}
int32_t main()
{
	int n;
	cin >> n;
	int **arr = new int *[n];
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (size_t j = 0; j < n; j++)
			arr[i][j] = 0;
	}

	if (nQueen(arr, 0, n))
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
				cout << arr[i][j] << " ";

			cout<<"\n";
		}
	}

	return 0;
}