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
	if (head == NULL)
	{
		n->next = n;
		head = n;
		return;
	}
	node *temp = head;
	while (temp->next != head)
	{
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
	head = n;
}
void insertAtTail(node *&head, int val)
{
	node *n = new node(val);
	node *temp = head;
	if (head == NULL)
	{
		insertAtHead(head, val);
		return;
	}
	while (temp->next != head)
	{
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
}
void deleteAtHead(node *&head, int pos)
{
	node *del = head;
	node *temp = head;
	while (temp->next != head)
	{
		temp = temp->next;
	}
	temp->next = temp->next->next;
	head = head->next;
	delete del;
}
void deletion(node *&head, int pos)
{
	if(head==NULL){
		cout<<"NOT POSSIBLE";
		return;
	}
	node *temp = head;
	int count = 1;
	
	if (pos == 1)
	{
		deleteAtHead(head, pos);
		return;
	}
	while (count != pos - 1)
	{
		temp = temp->next;
		count++;
	}
	node *todelete = temp->next;

	temp->next = temp->next->next;
	delete todelete;
}

void display(node *head)
{	if(head==NULL){
		cout<<"NOT POSSIBLE";
		return;
	}
	node *temp = head;
	do
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	} while (temp != head);
}
int main()
{
	node *head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	
	deletion(head,1);
	display(head);
	return 0;
}