#include<iostream>
#include<stdio.h>
using namespace std;

int getBit(int a,int pos){

	return ((a&(1<<pos))!=0);

}

void twoUnique(int a[],int size){
	int xorsum =0;
	for (int i=0;i<size;i++){
		xorsum = xorsum^a[i];
	}
	int pos =0;
	int tempxor=xorsum;
	int bit=0;
	while(bit!=1){
		bit = xorsum&1;
		pos++;
		xorsum = (xorsum>>1);
	}
	int newxor=0;
	for (int i=0;i<size;i++){
		if(getBit(a[i],pos-1)){
			newxor=newxor^a[i];
		}
	}
	cout<<newxor<<endl;
	cout<<(newxor^tempxor);

}
int main(){

	int arr[6]={2,2,5,6,7,7};
	twoUnique(arr,6);

}