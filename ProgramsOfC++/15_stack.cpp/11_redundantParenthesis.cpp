#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool redundantParanthesis(string s)
{
	stack<char> st;
	bool flag = false;
	int n = s.length(); // s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
		{
			st.push(s[i]);
		}
		else if (s[i] == ')')
		{
			if (st.top() == '(')
			{
				flag = true;
			}

			while (st.top() == '+' || st.top() == '-' || st.top() == '/' || st.top() == '*')
			{
				st.pop();
			}
			st.pop();
		}
	}
	return flag;
}
int main()
{
	string s = "(+(a+b))";
	cout << redundantParanthesis(s);
	return 0;
}
