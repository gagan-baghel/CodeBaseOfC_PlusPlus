#include<iostream>
#include<vector>
using namespace std;

int maxStock(int a[],int n,int k){
	vector <pair<int,int> > v;
	for (int i = 0; i < n; i++) v.push_back(make_pair(a[i],i+1));
	sort(v.begin(),v.end());
	int stocks=0;
	for(int i=0;i<n;i++){
		// int count =0;
		// while(count<v[i].second && k>=0){
		// 	k-=v[i].first;
		// 	count++;
		// 	stocks++;
		// }
		if(v[i].second*v[i].first<=k){
			k-=v[i].second*v[i].first;
			stocks+=v[i].second;
		}
		else{
			stocks+=k/v[i].first;
			k-=(k/v[i].first)*v[i].first;
		}


	}
// if(k<0) return stocks-1;
// else return stocks;
return stocks;
}

int main(){
	int arr[] ={19,10,7};
	cout<<maxStock(arr,3,48);
	return 0;
}