#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    char start ='A';
    for(int i=n;i>=0;i--){

        for(int j=0;j<=i;j++){
            cout<<start;
        }
        start++;
        cout<<endl;
    }

    
}