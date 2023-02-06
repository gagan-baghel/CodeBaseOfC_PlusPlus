#include<iostream>
#include<vector>
using namespace std;

void printarr(int arr[],int  n){
    if(n==0) {
        cout<<arr[0]<<endl;
        return ;

    }
    vector<int > temp ;
    for(int i=0;i<=n;i++)  temp.push_back(arr[i]);
    arr[n-1] += arr[n];

    printarr(arr, n-1);

    for(auto a :  temp) {
        cout<<a<<" ";
    }
    cout<<endl;

}
int main(){




int arr[] ={1, 2, 3, 4, 5};

printarr(arr,4);


    return 0;
}