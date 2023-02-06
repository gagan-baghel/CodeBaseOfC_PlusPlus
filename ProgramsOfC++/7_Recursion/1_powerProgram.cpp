#include<iostream>
#include<stdio.h>
using namespace std;
int power(int a , int pow){
if (pow==0){
	return 1;
}
int result = 0;
return result = a*power(a,pow-1);
}
int main(){
cout<<power(5,3);
return 0;
}