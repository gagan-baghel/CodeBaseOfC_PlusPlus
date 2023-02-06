#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

int a,i,j,r,c,target;
bool flag= false ;
cin>>a;
int arr[a][a];
for ( i = 0 ;i<a;i++){
	for ( j = 0 ;j<a;j++){
		cin>>arr[i][j];
	}
} 
cin>>target;
r=0;c=a-1;
while(r<a and c>=0){
	
	if(arr[r][c]==target){
		flag=true;
		break;
	}
	if(arr[r][c] > target){
		c--;
	}
	else{
		r++;
	}

}
if(flag){
	cout<<"number is there";
}
else {
	cout<<"number is not there";
}

return 0;


}
