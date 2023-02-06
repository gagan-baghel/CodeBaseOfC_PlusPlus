#include<iostream>
#include<string>
using namespace std;

int boardg(int s ,int e){
	if(s==e){
		return 1;
	}
	if(s>e){
		return 0;
	}
	int count =0;
	for(int i=1;i<=6;i++){
		count+=boardg(s+i,e);
	}
	return count;

}
int main (){
	cout<<boardg(0,2);
	return 0;
}