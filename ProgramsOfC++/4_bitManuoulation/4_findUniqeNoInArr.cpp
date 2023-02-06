#include<iostream>
#include<stdio.h>
using namespace std;
//Xor bitwise operator

int unique(int a[],int size){
	int unique=0;
	for(int i = 0; i<size;i++){
	unique = unique^a[i];}
	return unique;
}
int main(){

int arr[5] ={1,2,3,2,1};
cout<<unique(arr,5);



}