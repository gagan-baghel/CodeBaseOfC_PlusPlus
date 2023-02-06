#include <iostream>
#include <stack>
using namespace std;
class que
{
	stack<int> s1;
	stack<int> s2;

public:
	void push(int val){s1.push(val);}
	int pop()
	{
		if (s1.empty() and s2.empty())
		{
			cout << "Queue is empty";
			return -1;
		}
		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		int topVal = s2.top();
		s2.pop();
		return topVal;
	}
	bool empty()
	{
		return s1.empty() and s2.empty();
	}
	int peek()
	{
		if (s1.empty() && s2.empty())
		{
			cout << "Queue is empty";
			return -1;
		}
		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		return s2.top();
	}
};
int main()
{
	que q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout << q.peek() << endl;
	cout << q.pop() << endl;
	cout << q.peek() << endl;
	return 0;
}