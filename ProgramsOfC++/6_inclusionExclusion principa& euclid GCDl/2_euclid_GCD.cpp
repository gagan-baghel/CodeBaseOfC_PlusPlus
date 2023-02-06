#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a,int b){
	int rem=0;
	while(b!=0)
	{rem = a%b;
	cout<<rem<<endl;
	a=b;
	b=rem;}
	return a;
}
int main(){
cout<<gcd(24,42);
return 0;
}