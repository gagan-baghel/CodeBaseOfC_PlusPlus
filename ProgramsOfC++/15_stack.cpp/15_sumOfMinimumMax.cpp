#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
using namespace std;
int sumOfMinMax(int arr[], int k, int l)
{
	if (k > l)
	{
		cout << "not possible";
		return 0;
	}
	int sum=0;
	deque<int> dq;
	int min =INT_MAX();
	int mix =INT_MIN();
	for (size_t i = 0; i < k i++)
	{
		dq.push_back(arr[i]);
		min = (min,arr[i]);
		mix = (mix,arr[i]);
	}
	for (size_t i = k; i < l; i++)
	{

	}
}

int main()
{
	int k;
	cin >> k;
	int arr[] = {};
	cout << sumOfMinMax(arr, k);
	return 0;
}