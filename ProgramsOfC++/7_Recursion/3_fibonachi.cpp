#include<iostream>
#include<stdio.h>
using namespace std;
int fibbo(int a){
if(a<=1) return a;
double fib = 0;
return fib = fibbo(a-1)+fibbo(a-2);
}
int main(){
	cout<<fibbo(5);
	return 0;
}