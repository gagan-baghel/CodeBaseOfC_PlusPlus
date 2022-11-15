#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=2*n;i++){
        int totalstar;
        int totalspace;

        (i<=n)?totalstar=n-i+1:totalstar=i-n;
        (i<=n)?totalspace=2*i-1:totalspace=2*(2*n-i)+1;

        for(int j=1;j<=totalstar;j++){
            cout<<"* ";
        }
        for(int k=1;k<totalspace;k++){
            cout<<"  ";
        }
        for(int j=1;j<=totalstar;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}