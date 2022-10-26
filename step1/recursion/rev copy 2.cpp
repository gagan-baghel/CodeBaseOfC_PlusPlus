#include<iostream>
using namespace std;


int sorted(int arr[],int n){
    if(n==1){
        return arr[0]<arr[1];
    }
    else return  arr[0]<arr[1] && sorted(arr+1,n-1);
}


// int find(int arr[],int target,int n){
    
//     if(n==0){  return -1;  }

//     if(arr[0]==target){  return n; }

//     return find(arr+1,target,n-1);

// }



// int rotatedarrbs(int arr[],int target,int start,int end){
//     cout<<start<<" "<<end<<endl;

//     if(start>end) return -1;

//     int mid = start + (end-start)/2;

//     if(arr[mid]==target) return mid;

//     if((arr[start] <= arr[mid]) && (target >= arr[start] && target <= arr[mid])){
//         return rotatedarrbs(arr,target,start,mid-1);
//     }

//     else {
//         return rotatedarrbs(arr,target,mid+1,end); 
//     }


// }


int main(){
int arr[] = {8,9,10,11,1,2,3,4,5,6,7};
cout<<sorted(arr,9);
// cout<<10-find(arr,9,10);
int target=8;
// cout<<rotatedarrbs(arr,target,0,10);

return 0;
}