#include<iostream>
#include<stdio.h>
using namespace std;
int facto(int n){
int fac=0;
if (n==1) return 1;
return fac = n*facto(n-1);
}
int main(){
	cout<<facto(5);

}