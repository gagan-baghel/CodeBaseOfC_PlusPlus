#include<iostream>
using namespace std;

int main(){
    int n ;cin>>n;

for(int i=0;i<n;i++){
for(int j=n-i-1;j>0;j--) cout<<"  ";
    for(int k=2*i;k>0;k++){
        cout<<"* ";
    }
    cout<<"*"<<endl;
}

}
