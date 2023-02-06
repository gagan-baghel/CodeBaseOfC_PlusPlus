#include<iostream>
#include<stack>
#include<string>
using namespace std;
void reverseSent(string s){
	stack<string> st;
	for(int i=0;i<s.length();i++){
		string word="";
		while(s[i]!=' '&& i<s.length()){
			word+=s[i];
			i++;
		}
		st.push(word);
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}cout<<endl;
}
int main(){
	string s = " hey hello there";
	reverseSent(s);
	return 0;
}