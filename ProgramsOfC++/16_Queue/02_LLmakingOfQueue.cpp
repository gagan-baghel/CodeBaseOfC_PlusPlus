#include <iostream>
#include <stack>
#include <string>
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

class queue
{
	node *front;
	node *back;

public:
	queue()
	{
		front = NULL;
		back = NULL;
	}

	void push(int val)
	{
		node *temp = new node(val);
		if (front == NULL)
		{
			front = temp;
			back = temp;
		}
		else
		{
			back->next = temp;
			back = back->next;
		}
	}
	void pop()
	{
		if (front == NULL)
		{
			cout << "queue is empty ";
			return;
		}
		node *todelet = front;
		front = front->next;
		delete todelet;
	}
	bool empty()
	{
		return front == NULL;
	}
	int peek()
	{
		if (front == NULL)
		{
			cout << "queue is empty ";
			return -1;
		}
		return front->data;
	}
};

int main(){
	queue q;
	cout<<q.peek();
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<q.peek();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	cout<<q.peek();
	cout<<q.empty();

	return 0;
}