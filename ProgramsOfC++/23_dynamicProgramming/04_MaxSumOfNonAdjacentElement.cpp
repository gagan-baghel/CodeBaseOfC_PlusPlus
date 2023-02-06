#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int f(int idx, vector<int> nums, vector<int> &dp)
{
	if (idx == 0)
		return dp[0] = nums[0];
	if (idx < 0)
		return 0;
	if (dp[idx] != -1)
		return dp[idx];
	else
	{
		int take = nums[idx] + f(idx - 2, nums, dp);
		int nottake = 0 + f(idx - 1, nums, dp);
		return dp[idx] = max(take, nottake); // memoization
	}
}
int fd(int idx, vector<int> nums, vector<int> &dp)
{
	dp[0] = nums[0];
	for (int i = 1; i <=idx; i++)
	{
		int take = nums[i] +((i-2<0)?0:dp[i - 2]);
		int nottake = 0 + dp[i-1]; 
		dp[i] = max(take, nottake); // memoizatio
	}

	return dp[idx];
}
int fs(int idx, vector<int> nums)
{
	int prev  = nums[0];
	int prev2=0,curri;
	for (int i = 0; i <=idx; i++)
	{
		int take = nums[i] +((i-2<0)?0:prev2);
		int nottake = 0 + prev; 
		curri = max(take, nottake); // space optmised
		prev2 = prev ;
		prev = curri;
	}
	return prev;
}

int maximumNonAdjacentSum(vector<int> &nums)
{
	int n = nums.size();
	// vector<int> dp(n, 0);
	// return f(n - 1, nums, dp);
	// return fd(n - 1, nums, dp);
	return fs(n - 1, nums);
}
int32_t main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < n; i++)
		cin >> a[i];
	cout << maximumNonAdjacentSum(a);
	return 0;
}

