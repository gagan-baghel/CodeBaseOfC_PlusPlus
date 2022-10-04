#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){

if(n==1) return;
int count=0;
for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        count++;
    }
}
if(count==0) return;

bubblesort(arr, n-1);



}


int main(){
    int arr[]={1,2,4,65,7,54,3,2,5,6,77,4,3,56,9};
    int n = sizeof(arr)/sizeof(arr[0]);


    bubblesort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }






    return 0;
}