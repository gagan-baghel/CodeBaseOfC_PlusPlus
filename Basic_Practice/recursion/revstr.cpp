#include <iostream>
#include <string>
using namespace std;


int rev(string s,int len){
    if(s.size()==0) return len;
    len+=1;
    return rev(s.substr(1),len);
}
int main(){

    string s= "Gagan";
    cout<<rev(s,0);

    return 0;
}