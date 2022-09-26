#include<iostream>
using namespace std;

void printarr(int arr[],int n){

if(n==0) return;

int temp[n-1];
for(int i=0;i<n-1;i++){
    int x = arr[i]+arr[i+1];

temp[i]=x;
}

printarr(temp,n-1);

for(int i=0;i<n;i++) cout<<arr[i]<<" ";
cout<<endl;

}

int main(){
    int arr[] ={1, 2, 3, 4, 5};
    int n =5;
    


    printarr(arr,n);
    
    cout<<endl;


    return 0;
}