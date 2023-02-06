#include<iostream>
#include<math.h>
using namespace std;


void print(int a){
    if(a<=0) return;
    else {
        cout<<"GAGAN"<<a<<endl;
        print(a-1);
        }

}


void display(int num)  
{  
    if(num)  
        display(num-1);  
    else  
        return;  
  
    printf("\n%d\n", num);  
} 
int main(){


    // int n = 1000;
    // int temp = n;
    // int count=0;
    // while(temp){
    //     temp/=10;
    //     count++;
    // }
    // cout<<count;

    // string s = to_string(n);
    // cout<<s.length();

    // cout<<log10(n)+1;
    // cout<<(5/4)*4;

    print(10000);
    // display(6)  ;

    
}