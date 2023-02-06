#include<iostream>
#include<stdio.h>

using namespace std;

int calOne(int n){
	int a=0;

	//while(n>=0){
	//	int p=n;
	while(n){

		n = n&(n-1); 
		a++;

	}
	//n=p-1;
	//}
	return a;
}
int main(){

cout<<calOne(5);

