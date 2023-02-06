#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
	node *prev;
	node(int val)
	{
		data = val;
		next = NULL;
		prev = NULL;
	}
};
void insertAtHead(node *&head, int val)
{
	node *n = new node(val);
	n->next = head;
	if (head != NULL)
	{
		head->prev = n;
	}
	head = n;
}
void insertAtTail(node *&head, int val)
{
	node *n = new node(val);
	if (head == NULL)
	{
		insertAtHead(head, val);
		return;
	}
	node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
	n->prev = temp;
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
void deletAthead(node *&head)
{
	node *temp = head;
	head=head->next;
	head->prev=NULL;
	delete temp;
}
void deletion(node *&head, int val)
{
	if (head == NULL)
	{
		return;
	}
	if (head->data == val)
	{
		deletAthead(head);
		return;
	}
	node *temp = head;
	while (temp->data != val && temp != NULL)
	{
		temp = temp->next;
	}
	node *todelete = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	temp->prev->next = temp->next;
	delete temp;
}
int main()
{
	node *head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtHead(head, 5);
	deletion(head, 5);
	deletion(head,1);
	display(head);
	return 0;
}