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

node * revell(node*&head,int k){
    node* prev=NULL;
    node* curr= head;
    node* next;
    int count=0;
    while(count<k){
        next=curr->next;
        curr->next=prev;
        curr->prev=next;
        prev=curr;
        curr=next;
	count++;
    }
    head->next=curr;
    prev->prev=NULL;
    return prev;
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
void deletion(node *&head, int pos)
{
	if (head == NULL)
	{
		return;
	}
	if (pos==1)
	{
		deletAthead(head);
		return;
	}
	node *temp = head;
	int count=1;
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
int main()
{
	node *head = NULL;
	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	node*temp = revell(head,3);
	display(temp);
	return 0;
}