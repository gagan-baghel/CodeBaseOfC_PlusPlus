#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            cout<<max(max(i,j),max(2*n-i,2*n-j))-n+1;
        }
        cout<<endl;
    }
}