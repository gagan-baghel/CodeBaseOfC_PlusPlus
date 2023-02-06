#include <iostream>
using namespace std;

int maxProduct(int a[], int n)
{
	int ans = 1;
	sort(a, a + n);
	int count0 = 0, countneg = 0;
	int minneg = INT_MIN;
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			count0++;
			continue;
		}
		if (a[i] < 0)
		{
			countneg++;
			minneg = max(minneg, a[i]);
		}
		ans *= a[i];
	}
	if(count0==n) return 0;
	if(countneg & 1) {
		if(countneg==1 and count0+countneg==n and count0>0) return 0;

		ans/=minneg;
	}



return ans;


}

int main()
{
	int arr[] = {  0, 2, 4, 3  };
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<maxProduct(arr, n);
	return 0;
}