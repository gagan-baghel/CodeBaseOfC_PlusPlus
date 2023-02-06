#include<iostream>
#include<stdio.h>

using namespace std;
int powOf2(int n){

	return (n && !(n&(n-1)) );

}
int main (){
	int a = 4;
	cout<<powOf2(31)<<endl;
	
}


