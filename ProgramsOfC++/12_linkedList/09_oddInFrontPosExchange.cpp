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

void oddFirst(node *&head)
{
	node *oddptr = head;
	node *evenptr = head->next;
	node *evenStart = evenptr ;
	while (oddptr->next != NULL && evenptr->next != NULL)
	{
		oddptr->next = oddptr->next->next;
		evenptr->next = evenptr->next->next;
		oddptr = oddptr->next;
		evenptr = evenptr->next;
	}
	if (evenptr->next == NULL)
	{
		oddptr->next = evenStart;
	}
	else
	{
		oddptr->next = evenStart;
		evenptr->next = NULL;
	}
}

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

int main()
{
	node *head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	oddFirst(head);
	display(head);
	return 0;
}