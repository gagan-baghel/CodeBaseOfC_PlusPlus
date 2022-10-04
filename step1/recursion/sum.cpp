#include<iostream>
using namespace std;


int countsum(int n ){
    if(n<10) return 1;


    return 1+ countsum(n/10);

}

int main(){

int n=98746;

cout<<countsum(n);

    return 0;
}