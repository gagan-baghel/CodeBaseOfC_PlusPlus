#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
using namespace std;

long long int maxim(vector<int> &v)
{
	long int n = v.size();
	long int prev = v[0];
	long int prev2 = 0;
	for (long int i = 1; i < n; i++)
	{
		long int take = v[i] + ((i > 1) ? prev2 : 0);
		long int nontake = 0 + prev;
		long int curri = max(take, nontake);
		prev2 = prev;
		prev = curri;
	}
	return prev;
}

long long int houseRobber(vector<int> &valueInHouse)
{
	vector<int> temp1, temp2;
	long int n = valueInHouse.size();
	for (long int i = 0; i < n; i++)
	{
		if (i != 0)
			temp1.push_back(valueInHouse[i]);
		if (i != n - 1)
			temp2.push_back(valueInHouse[i]);
	}
	return max(maxim(temp1), maxim(temp2));
}
int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (size_t i = 0; i < n; i++) cin >> arr[i];
	cout << houseRobber(arr);
}
