#include<iostream>
#include<vector>
using namespace std;

int MaxSumDifference(int a[],int n){
	sort(a,a+n);
	vector<int> v;
	int maxi=0;
	for(int i=0;i<n/2;i++){
		v.push_back(a[i]);
		v.push_back(a[n-1-i]);
	}
	for (size_t i = 0; i < n-1; i++)
	{
		maxi+=abs(v[i]-v[i+1]);
	}
	maxi+=abs(v[n-1]-v[0]);
	return maxi;
}


int main()
{
    int a[] = { 10,12};
    int n = sizeof(a) / sizeof(a[0]);
    cout << MaxSumDifference(a, n) << endl;
}