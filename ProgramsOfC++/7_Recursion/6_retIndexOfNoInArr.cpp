#include<iostream>
#include<stdio.h>
using namespace std;
int firstocc(int arr[],int n , int i,int key){
	if(i==n) return -1;
	if(arr[i]==key){
		return i;
	}
	return firstocc( arr, n ,  i+1, key);
}
int lastocc(int arr[],int n,int i,int key){
	if(i==n) return -1;	
	int lastoc = lastocc(arr,n,i+1,key);
	if(lastoc!=-1) return lastoc;//cleared
	if(arr[i]==key) return i;
	return -1;
}

int lastoc(int arr[],int n,int i,int num){
	if(i==n) return -1;
	int last = lastoc(arr,n,i+1,num);
	if(last!=-1) return last;
	if(arr[i]==num) return i;
	return -1;

}




int main(){
	int arr[]={4,2,1,2,5,2,7};
	cout<<firstocc(arr,7,0,2)<<endl;
	cout<<lastoc(arr,7,0,2);
	return 0;

}