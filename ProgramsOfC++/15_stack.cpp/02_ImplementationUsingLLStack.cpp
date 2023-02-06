#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int val)
	{
		data = val;
		next = NULL;
	}
};
class stack
{
	node *head;
public:
	stack()
	{
		head = NULL;
	}
	void push(int x)
	{
		node *n = new node(x);
		n->next = head;
		head = n;
	}
	void pop()
	{
		if (head == NULL)
		{
			cout << " No element to pop " << endl;
			return;
		}
		node * temp = head;
		head = head->next;
		free(temp);
	}
	int Top()
	{
		if (head == NULL)
		{
			cout << " No element in stack" << endl;
			return -1;
		}
		return head->data;
	}
	bool empty()
	{
		return !head;
	}
};
int main()
{

	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	cout << st.Top() << endl;
	st.pop();
	st.pop();
	st.pop();
	// st.pop();
	cout << st.empty();
	return 0;
}
