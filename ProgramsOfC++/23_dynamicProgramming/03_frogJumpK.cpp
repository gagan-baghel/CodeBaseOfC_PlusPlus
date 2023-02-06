#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;

int f(int idx, vector<int> &heights, int k)
{
	if (idx == 0)
		return 0;
	int minstep = INT_MAX;
	for (int j = 1; j <= k; j++)
	{
		if (idx - j >= 0)
		{
			int jump = f(idx - j, heights, k) + abs(heights[idx] - heights[idx - j]);
			minstep = min(jump, minstep);
		}
	}
	return minstep;
}
// size_t can never handle negative value because it is unsigned
int f(int idx, vector<int> &heights, vector<int> &dp, int k)
{
	if (idx == 0)
		return 0;
	if (dp[idx] != -1)
		return dp[idx];
	int minstep = INT_MAX;
	for (int j = 1; j <= k; j++)
	{
		if (idx - j >= 0)
		{
			int jump = f(idx - j, heights, dp, k) + abs(heights[idx] - heights[idx - j]);
			minstep = min(jump, minstep);
		}
	}
	return dp[idx] = minstep;
}

int f1(int idx, vector<int> &heights, vector<int> &dp, int k)
{
	dp[0] = 0;
	for (int i = 1; i < idx; i++)
	{
	int minstep = INT_MAX;
		for (int j = 1; j <= k; j++)
		{
			if (idx - j >= 0)
			{
				int jump = dp[i - j] + abs(heights[i] - heights[i - j]);
				minstep = min(jump, minstep);
			}
		}
	 dp[i] = minstep;
	}
	return dp[idx-1];
}

int32_t main()
{
	int n, k;
	cin >> n >> k;
	vector<int> heights(n);
	for (size_t i = 0; i < n; i++)
		cin >> heights[i];
	vector<int> dp(n, -1);

	cout << f(n - 1, heights, k) << endl;
	cout << f(n - 1, heights, dp, k) << endl;
	cout << f1(n, heights, dp, k) << endl;

	return 0;
}
// 3
// 2
// 10 50 10