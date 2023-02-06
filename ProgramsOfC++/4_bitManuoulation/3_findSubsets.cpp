#include<iostream>
#include<stdio.h>

using namespace std;


void subSet(int a[],int size){
	for (int i=0;i<(1<<size);i++){
			cout<<"{ ";

		for (int j=0;j<size;j++){
			if(i & (1<<j)){
				cout<<a[j]<<" ";
			}
		}cout<<"}"<<endl;

	}
}
int main(){

int arr[6]={1,2,3,4,5,6};
subSet(arr,6);
}