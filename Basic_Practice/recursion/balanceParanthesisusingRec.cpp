#include <iostream>
#include <string>
using namespace std;


char retclo(char a){
    if(a == '[') return ']';
    if(a == '(') return ')';
    if(a == '{') return '}';
    return -1;
}


bool statebalance(char s[] , int n){

    if(n==0) return true;
    if(n==1) return false;
    if(s[0]==')'||s[0]==']' ||s[0]=='}') return false;

    char closing = retclo(s[0]);

    int i,count=0;
    for(i=1;i<n;i++){
        if(s[i]==s[0]){
            count++;
        }
        if(s[i]==closing){
            if(count==0) break;
            count--;
        }
    }

if(i==n) return false;
if(i==1){
    return statebalance(s+2 , n-2);
}

return statebalance(s+1 , i-1) && statebalance(s+i+1 , n-i-1);


}


int main(){

    char s[] = "((([])))";
    cout<<statebalance(s,strlen(s));
return 0;
}