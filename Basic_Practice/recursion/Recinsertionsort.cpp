#include<iostream>
using namespace std;



void recinr(int arr[],int n){


    if(n==1) return;
    int count =0;
    for(int i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
            count++;
        }
    }
    if(count==0) return ;
    recinr(arr,n-1);

}
int main(){
    int arr[]={3,4,4,5,55,3,2,4,6,4,134,124,46,457,4};
    int n = sizeof(arr)/sizeof(arr[0]);


    recinr(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<< " ";
    return 0;
}
