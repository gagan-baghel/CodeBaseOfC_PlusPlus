#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkParantheses(string s)
{	stack<char> st;
	bool flag = false;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '{' || s[i] == '[' || s[i] == '(')	st.push(s[i]);
		else if (s[i] == ')'){
			if (!st.empty() && st.top() == '(')	st.pop();
			else return flag;
		}
		else if (s[i] == '}'){
			if (!st.empty() && st.top() == '{')	st.pop();
			else return flag;
		}
		else{
			if (!st.empty() && st.top() == '[') st.pop();
			else return flag;
		}
	}
	if (st.empty()) flag = true;
	return flag;
}
int main(){
	cout << checkParantheses("()(){}{}[[]]");
	return 0;
}