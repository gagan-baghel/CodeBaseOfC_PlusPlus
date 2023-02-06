#include <iostream>
using namespace std;

int countcoin(int arr[], int val, int n)
{	
	sort(arr, arr+n,greater<int>());
	int sum = 0, i = 0;
	int count = 0;
	while (sum!=val)
	{	if (sum < val)
		{
			sum += arr[i];
			count++;
		}
		else if (sum > val)
		{
			sum -= arr[i];
			i++;
			count--;
		}
	}
	cout<<"Minimum no of coin needed to make value = "<<sum<<endl;
	return count;
// int ans;
// for (size_t i = 0; i < n; i++)
// {
// 	ans+=x/arr[i];
// 	x-=x/arr[i]*arr[i];
// }

// return ans;

}

signed main(){
	int denomination[] = {500,200,2000,100,20,50,10,5,2, 1};
	int val = 19645;
	cout << countcoin(denomination, val, 9);
	return 0;
}