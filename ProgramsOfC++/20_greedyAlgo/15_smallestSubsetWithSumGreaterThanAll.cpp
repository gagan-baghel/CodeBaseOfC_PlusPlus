#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

void smallestsubset(int arr[], int n)
{
	sort(arr, arr + n, greater<int>());
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	int check = 0;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		check += arr[i];
		sum -= arr[i];
		if (check > sum)
		{
			res =i+1;
			break;
		}
	}
	for (int i = 0; i < res; i++)
	{
		cout << arr[i] << " ";
	}

	cout<<res;
}

int main()
{
	int arr[] ={1,3,2,7};
	smallestsubset(arr, 4);
	return 0;
}