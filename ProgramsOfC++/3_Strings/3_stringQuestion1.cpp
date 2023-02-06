#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main() {

	string a = "hEllo";
	//begin return iterator pointer;

//special function transform function
 transform(a.begin(),a.end(),a.begin(),::toupper);//1-2 the string //3from where to start capitaling str
 cout<<a;
 transform(a.begin(),a.end(),a.begin(),::tolower);
 cout<<a;
	for (int i = 0 ; i<a.size();i++){
		if (a[i]>='a'&&a[i]<='z'){
			a[i] -=32;
		}
		else{

		}
	}
	cout<<a;
	for (int i = 0 ; i<a.size();i++){
		if (a[i]>='A'&&a[i]<='Z'){
			a[i] +=32;
		}

		else{
		}
	}
	cout<<a;
	
}