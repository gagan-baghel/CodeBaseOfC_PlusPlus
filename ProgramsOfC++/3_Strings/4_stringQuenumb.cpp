#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
	string a = "1234598873";
	sort(a.begin(),a.end(),greater<int>()); //rev the string in decending order
	cout<<a<<endl;

	reverse(a.begin(),a.end()); //rev the string in c++
	cout<<a<<endl;
}