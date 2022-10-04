#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;


int strleng(string s,int ans){
    if(s==""){ return ans; }
    ans++;
    return strleng(s.substr(1),ans);
}



int main() {
int ans=0;
string s ;
cin>>s;



cout<<strleng(s,ans);

	return 0;
}