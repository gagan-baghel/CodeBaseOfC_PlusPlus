#include<iostream>
#include<string>
using namespace std;

string remDuplicate(string s){

	if(s.length()==0){
		return "";
	}

	char ch = s[0];

	string ans = remDuplicate(s.substr(1));
	if(ch == ans[0]) return ans;
	return (ch+ans);
}

int main(){

	cout<<remDuplicate("aaggll")<<endl;
	return 0;

}