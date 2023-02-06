#include <iostream>
using namespace std;
#define n 90
class queue
{

	int *arr;
	int front;
	int back;

public:
	queue()
	{
		arr = new int[n];
		front = -1;
		back = -1;
	}

	void push(int val)
	{
		if (back == n - 1)
		{
			cout << "queue is overflow";
			return;
		}
		if (front == -1)
		{
			front++;
		}
		back++;
		arr[back] = val;
	}
	void pop()
	{
		if (front == -1 || front > back)
		{
			cout << " queue is empty";
			return;
		}
		front++;
	}
	bool empty()
	{
		return front > back || front == -1;
	}
	int peek()
	{
		if (front == -1 || front > back)
		{
			cout << " queue is empty ";
			return -1;
		}
		return arr[front];
	}
};

int main(){
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<q.peek();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	cout<<q.peek();
	cout<<q.empty();
	return 0;
}