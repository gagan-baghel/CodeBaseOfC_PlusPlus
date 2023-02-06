#include<iostream>
using namespace std;
void repStr(string str){
	if(str.length()==0){
		return;
	}
	if(str[0]=='p'&&str[1]=='i'){
		cout<<3.14;
		repStr(str.substr(2));
	}
	else{
		cout<<str[0];
		repStr(str.substr(1));
	}
}
int main(){
	
	repStr("pihelpilopi");
	return 0;
}