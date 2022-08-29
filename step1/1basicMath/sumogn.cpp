#include<iostream>
#include<math.h>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    else return pow(n,3)+sum(n-1);
}

int main(){

    cout<<sum(3);


    return 0;
}