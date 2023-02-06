#include<iostream>
using namespace std;
void countSort(int arr[],int n){
	int maxEle=arr[0];
	for(int i=0;i<n-1;i++){
		if(arr[i+1]>arr[i]){
			maxEle=arr[i+1];
			
		}
	}
	cout<<maxEle<<endl;
	
	int arr2[10]={0};

	for(int i=0;i<n;i++){
		arr2[arr[i]]++;
	}
	for(int i=1;i<=maxEle;i++){
		arr2[i]=arr2[i-1]+arr2[i];
	}
	int arr3[n];
	for(int i=n-1;i>=0;i--){
		arr2[arr[i]]--;
		arr3[arr2[arr[i]]]=arr[i];
		//or
		//arr3[--arr2[arr[i]]]=arr[i]

	}
	for(int i=0;i<n;i++){
		arr[i]=arr3[i];
	}

}

int main(){
	int arr[9]={1,3,2,3,4,1,6,4,3};
	countSort(arr,9);
	for(int i=0;i<9;i++){
		cout<<arr[i]<<"  ";
	}
	
	return 0;

}
//time complexity O(max(A))
//segment fault is cause due to miss management of memory ;VVVVIIIIIMMMMMMPPPPP

