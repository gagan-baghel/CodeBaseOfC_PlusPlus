#include <iostream>
#include <stack>
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
	head = head->next;
	head->prev = NULL;
	delete temp;
}
void deletion(node *&head, int pos)
{
	if (head == NULL)
	{
		return;
	}
	if (pos == 1)
	{
		deletAthead(head);
		return;
	}
	node *temp = head;
	int count = 1;
	while (count != pos && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	node *todelete = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	temp->prev->next = temp->next;
	delete temp;
}

void noOfPairs(node *&head, int val)
{
	node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	node *last = temp;
	node *start = head;
	while (start != NULL and start->data <= val and start < last )

		if (start->data + last->data == val)
		{
			cout << "(" << start->data << "," << last->data << ")";
			last = last->prev;
		}
		else if (start->data + last->data > val)
		{
			last = last->prev;
		}
		else
		{
			start = start->next;
		}
}

int main()
{
	node *head = NULL;
	insertAtHead(head, 0);
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	insertAtTail(head, 9);
	insertAtTail(head, 14);
	insertAtTail(head, 18);
	// display(head);
	noOfPairs(head,9);

	return 0;
}