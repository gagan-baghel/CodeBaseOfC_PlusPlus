#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,tower;
		cin>>x>>y>>tower;
		int arrx[tower],arry[tower];
		for (size_t i = 0; i < tower; i++)
		{	cin>>arrx[i];
			cin>>arry[i];}
		sort(arrx,arrx+tower);
		sort(arry,arry+tower);
		int maxx=0,maxy=0;
		for (size_t i = 0; i < tower-1; i++)maxx= max(maxx,arrx[i+1]-arrx[i]);
		for (size_t i = 0; i < tower-1; i++)maxy= max(maxy,arry[i+1]-arry[i]);
		maxx-=1;
		maxy-=1;
		int ans = (maxx*maxy);
		cout<<ans;
	}
	return 0;
}