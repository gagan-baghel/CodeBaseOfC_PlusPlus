#include<iostream>
#include<stdio.h>
using namespace std;
int getbit(int a,int pos){
return ((a&(1<<pos)) !=0);
}

int unique(int a[],int size){
	int result =0;

	for (int i=0;i<64;i++){//size of int is 64 bit thats why
	int sum=0;
	for (int j=0;j<size;j++){
		if(getbit(a[j],i)){
			sum++;
		}
	}
	if(sum%3 !=0){

		result = (result |(1<<i));

	}

	}
	return result;
}


int main () { 

	int arr[7]={1,1,1,3,3,3,6};
	cout<<unique(arr,7);
}