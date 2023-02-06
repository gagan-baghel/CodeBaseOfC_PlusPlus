#include <iostream>
#include <stack>
using namespace std;

int midEle(stack<int> s)
{
	int n = s.size();
	int t = n / 2;
	while (t)
	{
		s.pop();
		t--;
	}
	return s.top();
}
int main()
{

	stack <int > st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(9);
	// cout<<st.top();
	cout << midEle(st);
	// cout << st.empty();
	return 0;
}
