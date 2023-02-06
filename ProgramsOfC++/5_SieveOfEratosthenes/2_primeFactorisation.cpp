#include<iostream>
#include<stdio.h>
using namespace std;

void prime (int a ){

	int arr[100]={0};

	for(int i=0;i<=a;i++){
		arr[i]=i;
	}
		for(int i=2;i*i<=a;i++){
			if(arr[i]==i){

				for(int j=i*i;j<=a;j+=i){
					arr[j]=i;
				}

			}
		}

		while(a!=1){
			cout<<arr[a]<<" ";
			a=(a/arr[a]);
		}


}



int main(){

	prime(15);

}