#include<iostream>
using namespace std;
void minAndMax(int arr[],int n){
	sort(arr,arr+n);
	int maxi=0,mini=0;
	for(int i=0;i<n/2;i++){
		maxi += arr[i+n/2] -arr[i];
		mini += arr[2*i+1] - arr[2*i];}
	cout<<maxi<<endl;
	cout<<mini;}
int main(){
	int arr[]={98,70,97,77,56,44,33,34,89,32};
	minAndMax(arr,10);
	return 0;
	}