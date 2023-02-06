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
int length(node *head)
{
	int l = 0;
	node *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		l++;
	}
	return l;
}
node *mergeLL(node *&head, node *&head1)
{
	node *temp = head;
	node *temp1 = head1;
	node *result = new node(0);
	node *newnode=result;
	while (temp != NULL && temp1 != NULL)
	{
		if (temp->data < temp1->data)
		{
			newnode->next = temp;
			temp = temp->next;
		}
		else
		{
			newnode->next = temp1;
			temp1 = temp1->next;
		}
		newnode=newnode->next;
	}
	if (temp != NULL)
	{
		newnode->next = temp;
		temp = temp->next;
	}
	else
	{
		newnode->next = temp1;
		temp1 = temp1->next;
	}
	return result->next;
}
node *mergeRecursive(node *&head, node *&head1){
	if(head==NULL)return head;
	if(head1==NULL)return head;
	node* result ;
	if(head->data<head1->data){
		result = head;
		result->next=mergeRecursive(head->next,head1);
	}
	else{
		result = head1;
		result->next=mergeRecursive(head,head1->next);
	}
	return result;
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
	insertAtTail(head, 6);
	insertAtTail(head, 7);
	insertAtTail(head, 9);
	insertAtTail(head, 12);
	insertAtTail(head, 14);
	insertAtTail(head, 145);
	// display(head);
	node *head1 = NULL;
	insertAtTail(head1, 3);
	insertAtTail(head1, 5);
	insertAtTail(head1, 8);
	insertAtTail(head1, 9);
	// display(mergeLL(head, head1));
	 display(mergeRecursive(head, head1));


	return 0;
}