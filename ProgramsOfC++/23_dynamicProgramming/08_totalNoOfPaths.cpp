#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int countWaysM(int i, int j, vector<vector<int> > &dp)
{
	if (i == 0 and j == 0)
		return 1;
	if (i < 0 or j < 0)
		return 0;
	if (dp[i][j] != -1)
		return dp[i][j];
	else
	{
		int up = countWaysM(i - 1, j, dp);
		int left = countWaysM(i, j - 1, dp);
		return dp[i][j] = up + left;
	}
}


int countWayst(int m, int n)
{
	vector<vector<int> > dp(m, vector<int>(n, -1));
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == 0 and j == 0)
			{
				dp[i][j] = 1;
				continue;
			}
			int up=0,left=0;
			if (i > 0)
				up = dp[i - 1][j];
			if (j > 0)
				left = dp[i][j - 1];

			dp[i][j] = up + left;
		}
	}
	return dp[m-1][n-1];
}

int countWays(int m, int n)
{
	vector<vector<int> > dp(m, vector<int>(n, -1));
	// return countWaysM(m - 1, n - 1, dp);
	return countWayst(m , n );
}

int main()
{

	int m = 4;
	int n = 4;

	cout << countWays(m, n);
}