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

void appendK(node *&head, int k)
{
	node *tail = head;
	int l = 1;
	while (tail->next != NULL)
	{
		tail = tail->next;
		l++;
	}

	if (l == 0 || l < k)
	{
		cout << " not possible "<<endl;
		return;
	}
	int n = l-k;
	int count = 1;
	node *newhead;
	node *temp = head;
	while ((temp->next != NULL) && count < n)
	{
		temp = temp->next;
		count++;
	}
	newhead = temp->next;
	tail->next = head;
	temp->next = NULL;
	head = newhead;
}

int main()
{
	node *head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	appendK(head, 3);

	display(head);
	return 0;
}