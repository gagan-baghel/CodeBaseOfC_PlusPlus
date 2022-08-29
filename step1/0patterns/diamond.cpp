#include<iostream>
using namespace std;

int main(){

int  n;
cin>>n;

for(int  row = 1 ;row <2*n; row++){
    int totalcol;
    int totalspace;
    (row<n)?totalspace = n-row: totalspace=row-n;

    for(int col = 0 ; col <totalspace;col++){
        cout<<"  ";
    }

    (row<n)?totalcol = row: totalcol = 2*n-row;

    for(int col = 0 ; col <2*totalcol-1;col++){
        cout<<"* ";
    }


    cout<<endl;
}
}