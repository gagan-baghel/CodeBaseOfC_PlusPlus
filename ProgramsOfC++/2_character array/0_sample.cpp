#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

	char a[100]= "apple";
	int i = 0;
	while(a[i] != '\0' ){
		cout<<a[i]<<endl;
		i++;
	}
	//cin>>a;
	//cout<<a;
return 0;
}