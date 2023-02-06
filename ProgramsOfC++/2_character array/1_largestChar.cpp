#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std ;
int main(){

	char str[100],a='a',temp;
	int i = 0;
	cin>>str;
	for(i=0;i<strlen(str);i++){
		if(str[i]>a){
			a = str[i];
		}
	}
	cout<<"greatest letter "<<a;
}