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
node* changeHead(node* & head){
	if(head->next==NULL){
		return head;
	}
	node * temp = head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	temp->next->next=head;
	head = temp->next;
	temp->next =NULL;
return head;
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
	insertAtHead(head, 5);
	changeHead(head);
	display(head);
	return 0;
}