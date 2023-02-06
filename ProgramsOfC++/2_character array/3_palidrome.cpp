#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a,p;
cin>> a;
char arr[a+1];
cin>>arr;
bool flag= true;
for (int i = 0 ;i<=a/2;i++){
	if(arr[i]!=arr[a-1-i]){
	flag = false;
	}
	
}
if(flag){
	cout<<"yes";
}
else{
	cout<<"no";
}

return 0;
}