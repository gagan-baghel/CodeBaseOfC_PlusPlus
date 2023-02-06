#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;
bool safe(int **arr, int x, int y, int n)
{
	if (x < n && y < n && arr[x][y] == 1)
		return true;
	else
		return false;
}
bool mazeRat(int **arr, int x, int y, int n, int **sol)
{
	if (x == n - 1 && y == n - 1)
	{
		sol[x][y] = 1;
		return true;
	}
	if (safe(arr, x, y, n))
	{
		sol[x][y] = 1;
		if (mazeRat(arr, x + 1, y, n, sol))
			return true;
		if (mazeRat(arr, x, y + 1, n, sol))
			return true;
		sol[x][y] = 0;
		return false;
	}
	return false;
}
int32_t main()
{
	int n;
	cin >> n;
	int **arr = new int *[n];
	for (size_t i = 0; i < n; i++)
		arr[i] = new int[n];
	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < n; j++)
			cin >> arr[i][j];
	cout<<"\n";
	int **sol = new int *[n];
	for (size_t i = 0; i < n; i++)
	{
		sol[i] = new int[n];
		for (size_t j = 0; j < n; j++)
			sol[i][j] = 0;
	}
	if (mazeRat(arr, 0, 0, n, sol))
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
				cout << sol[i][j] << " ";
			cout <<"\n";
		}
	}
	else cout<<"-1";

	return 0;
}


// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 1 1 0
// 1 0 0 1 1
// 1 1 1 0 1