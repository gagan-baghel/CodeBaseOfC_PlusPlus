#include<iostream>
#include<stdio.h>

using namespace std;
int getBit(int a , int pos){
	return   ((a & (1<<pos))!=0);
}
int setBit(int a ,int pos ){
	return (a|(1<<pos));
}

int clearBit(int a , int pos){
	int mask = ~(1<<pos);
	return (a & mask);
}
int updateBit(int a , int pos ,int bit){
	int mask = ~(1<<pos);
	a = (a & mask);
	return (a|(bit<<pos));
	
}



int main(){
cout<<getBit(5,2)<<endl;
cout<<setBit(5,1)<<endl;
cout<<clearBit(5,2)<<endl;
cout<<updateBit(5,1,1);
}