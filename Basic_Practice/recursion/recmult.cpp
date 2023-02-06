#include<iostream>
using namespace std;

int mult(int x,int y){
    if(y==0) return 0;
    if(x>y){return mult(y,x);}
    return x+ mult(x,y-1);
}
int main(){
    cout<<mult(0,9);

    return 0;
}