#include<iostream>
using namespace std;

int main(){

int n ;cin>>n;

for(int i= n-1 ; i>=0;i--){
for(int k=0;k<n-i-1;k++) cout<<"  ";
for(int j=2*i-1;j>=0;j--) cout<<"* ";

cout<<"* "<<endl;
}
    return 0;
}