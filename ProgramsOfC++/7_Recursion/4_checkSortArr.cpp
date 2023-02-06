#include<iostream>
#include<stdio.h>
using namespace std;
bool checkarr(int arr[],int n){
if(n==1) return true;
bool result = checkarr(arr+1,n-1);
return(arr[0]<arr[1]&&result);
}
int main(){
	int arr[6]={7,6,5,4,3,2};
	cout<<checkarr(arr,6);
	}