#include<iostream>
using namespace std;

int minCuts(int x[],int y[],int m ,int n){
	int price =0;
	sort(x,x+m,greater<int>());
	sort(y,y+n,greater<int>());
	int horr=1,vert=1;
	int i=0,j=0;
	while(i<m and  j<n){
		if(x[i]>y[j]){
		price+=x[i]*vert;
		horr++;
		i++;	
		}
	else{
		price+=y[j]*horr;
		vert++;
		j++;}
	}
	while(i<m){
		price+=x[i]*vert;
		i++;
	}
	while (j<n)
	{
		price+=y[j]*horr;
		j++;
	}
	return price;
}



int main(){
	int m = 6 ,n = 4;
	int x[ 6-1] ={2, 1, 3, 1, 4};
	int y[ 4-1 ] ={4, 1, 2};
	cout<<minCuts(x,y,m-1,n-1);
	return 0;
}