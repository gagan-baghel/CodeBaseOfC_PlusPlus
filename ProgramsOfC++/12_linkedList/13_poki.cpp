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
void insertAtHead(node *&head, int val)
{
	node *n = new node(val);
	n->next = head;
	head = n;
}
void insertAtTail(node *&head, int val)
{
	node *n = new node(val);
	if (head == NULL)
	{
		head = n;
		return;
	}
	node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}
void display(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}
node *divide(node *&head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	node *even = new node(0);
	node *temp = head;
	node *ans = even;
	node *cur;
	node *pre = head;
	while (pre->data % 2 == 0)
	{
		even->next = pre;
		even = even->next;
		pre = pre->next;
	}

	while (cur != NULL && pre->next != NULL)
	{
		cur = pre->next;
		if ((cur->data) % 2 == 0)
		{
			even->next = cur;
			pre->next = cur->next;
			even = even->next;
		}
		else
		{
			pre = cur;
		}
	}
	even->next = head;
	return ans->next;
}

int main()
{
	node *head = NULL;
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	insertAtTail(head, 7);
	// insertAtTail(head, 8);
	display(divide(head));
	return 0;
}
