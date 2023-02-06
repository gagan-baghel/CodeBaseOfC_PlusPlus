#include<iostream>
#include<stdio.h>
using namespace std;

int main (){
	int a[5]= {2,3,9,5,6};
	int min ,max;
	if (sizeof(a)==1){
		min = a[0];
		max=  a[0];
	}
	else{
		min=a[0];
		max=a[0];
		for(int i=1;i<(sizeof(a)/4)-2;i++){
			if(a[i+1]>a[i]){
				max=a[i+1];
			}
			if(a[i+1]<a[i]){
				min = a[i+1];
			}
		}
		cout<<min<<max;
	}


}