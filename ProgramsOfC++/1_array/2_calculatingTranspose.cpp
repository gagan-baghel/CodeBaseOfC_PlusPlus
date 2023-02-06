#include<iostream>
using namespace std;
int main (){	
int a,temp,i,j;
cin>>a;
int arr[a][a];
for ( i = 0 ;i<a;i++){
	for ( j = 0 ;j<a;j++){
		cin>>arr[i][j];
	}
}
for ( i = 0 ;i<a;i++){
	for ( j = 0 ;j<a;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}

for(i = 0 ; i< a ; i++ ){
	for ( j = i; j<a ;j++){
		temp = arr[i][j];
		arr[i][j]= arr[j][i];
		arr[j][i]= temp;
	}
}

for ( i = 0 ;i<a;i++){
	for ( j = 0 ;j<a;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}

return 0 ;
}
