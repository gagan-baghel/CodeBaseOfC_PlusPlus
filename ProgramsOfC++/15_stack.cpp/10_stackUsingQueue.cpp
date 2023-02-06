#include <iostream>
#include <queue>
using namespace std;

class Stack
{
	int N;
	queue<int> q1;
	queue<int> q2;
public:
	Stack()
	{
		N = 0;
	}
	void push(int x)
	{
		if (N >= 100)
		{
			cout << "stack overflow"<<endl;
			return;
		}
		N++;
		q2.push(x);
		while (!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}
		queue<int> temp = q1;
		q1 = q2;
		q2 = temp;
	}
	void pop()
	{
		if (q1.empty() && q2.empty())
		{
			cout << "stack is empty";
			return;
		}
		q1.pop();
		N--;
	}
	int Top()
	{
		return q1.front();
	}
	bool empty()
	{
		return q1.empty() && q2.empty();
	}
};

int main()
{
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	cout << st.Top();
	st.pop();
	st.pop();
	st.pop();
	st.pop();

	return 0;
}