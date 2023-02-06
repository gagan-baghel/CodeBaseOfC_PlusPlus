#include <iostream>
#include <vector>
using namespace std;
void maxMeetings(int s[],int f[],int n){
	pair<int,int> a[n+1];
	for (int i = 0; i < n; i++){
		a[i].first =f[i]; 
		a[i].second =i;}
	vector <int > ans;
	ans.push_back(a[0].second+1);
	sort (a,a+n) ;
	int tlimit = a[0].first;
	for (size_t i = 1; i < n; i++)
	{	if(s[a[i].second]>=tlimit){
			ans.push_back(a[i].second+1);
			tlimit=a[i].first;}}
	for (size_t i = 0; i<ans.size(); i++) cout<<ans[i]<<" ";
}
int main()
{
	int s[] = {1, 3, 0, 5, 8, 5};
	int f[] = {2, 4, 6, 7, 9, 9};
	int n = sizeof(s)/sizeof(s[0]);
	maxMeetings(s, f, n);
	return 0;
}