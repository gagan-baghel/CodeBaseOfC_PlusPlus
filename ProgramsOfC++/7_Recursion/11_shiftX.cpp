#include<iostream>
#include<string>
using namespace std;
string shiftX(string s){
	if(s.length()==0) return "";
	char ch = s[0];
	string ans = shiftX(s.substr(1));
	if(ch=='x'||ch=='X'){
		return (ans + ch);
	}
	return (ch+ans);
}
int main(){
	cout<<p("aspjXXXhgdhjxxxxxXXasgfagf")<<endl;
	return 0;
}