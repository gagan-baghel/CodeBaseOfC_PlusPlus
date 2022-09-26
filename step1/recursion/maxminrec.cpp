#include<iostream>
using namespace std;



void find(int arr[],int &mini,int &maxi,int n){
    if(n==0) return ;

    mini=min(mini,arr[0]);
    maxi=max(maxi,arr[0]);
    
    cout<<arr[0]<<" ";

    find(arr+1,mini,maxi,n-1);
}

int main(){
    int arr[] ={0, 2, 3, 4, 5};
    int n =5;
    


    int mini=INT_MAX;
    int maxi=-10;
    find(arr,mini,maxi,n);
    
    cout<<mini<<" "<<maxi;


    return 0;
}