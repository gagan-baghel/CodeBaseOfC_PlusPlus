#include<iostream>
#include<queue>
using namespace std;

int mergemin(int arr[],int n){
	sort(arr,arr+n);
	int min=0,val=0;
	min =arr[0];
	int sum=0;
	for (int i = 1; i < n; i++){
		sum=min+arr[i];	
		min=sum;
		val+=min;}
	return val;
}
// with priority queue
int pmerge(int arr[],int n){
	vector<int> a(n);
	for (int i = 0; i < n; i++)  a[i]=arr[i];
	priority_queue<int,vector<int>,greater<int> > minheap;
	for (int i = 0; i < n; i++)	minheap.push(a[i]);
	int ans=0;
	while(minheap.size()>1){
		int e1=minheap.top();
		minheap.pop();
		int e2=minheap.top();
		minheap.pop();
		ans+=e1+e2;
		minheap.push(e1+e2);
	}
	return ans;
}
signed main(){
	int arr[]={2 , 4 , 5 , 7 };
	cout<<mergemin(arr,4);
	cout<<pmerge(arr,4);
	return 0;
}


