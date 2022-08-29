#include<iostream>
using namespace std;
int main(){
    int  n;
    cin>>n;
    char start ='A';
    for(int i=1;i<=n;i++){

        // for(int j=1;j<=n-i;j++) cout<<"  ";
        start = 'A';
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<start;
            (j<(2*i)/2)?start++:start--;
        }

        cout<<endl;


    }
    return 0;
    
}