//Dutch national flag algo
//timr complexity O(n) distance between mid and high is n
#include<iostream>
using namespace std;
void swap(int arr[],int a,int b ){
		int temp = arr[a];
		arr[a]=arr[b];
		arr[b]=temp;

	}
void dnfSort(int arr[],int n ){
	int low=0;
	int mid =0;
	int high = n-1;
	

	while(mid<=high){
		if(arr[mid]==0){
			swap(arr,low,mid);
			low++,mid++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			swap(arr,mid,high);
			high --;

		}
		
	}
}


int main(){
	int arr[10]={2,2,2,2,0,0,1,1,0,1};
	dnfSort(arr,10);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


