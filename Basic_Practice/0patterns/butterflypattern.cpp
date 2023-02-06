#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int space = n-2;
    for(int i=1;i<=2*n;i++){
       
        int totalstar;
        int totalspace;
        (i<n)?totalstar=i:totalstar=2*n-i;
        (i<=n)?totalspace=2*(n-i):totalspace=2*(n-totalstar);


        for(int j=1;j<=totalstar;j++) cout<<"* ";

        for(int j=1;j<=totalspace;j++) cout<<"  ";

        for(int j=1;j<=totalstar;j++) cout<<"* ";



    cout<<endl;


    }
}